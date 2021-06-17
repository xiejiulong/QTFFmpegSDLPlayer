#include "PacketQueue.h"
#include <iostream>
#include <QMutexLocker>
static bool isExit = false;
PacketQueue::PacketQueue()
{
	size = 0;
}

PacketQueue::~PacketQueue() {
	QMutexLocker locker(&mutex);
	isExit = true;
}

//************************************
// Method:    enQueue
// FullName:  PacketQueue::enQueue
// Access:    public
// Returns:   bool
// Qualifier:���������
// Parameter: const AVPacket packet
//************************************
bool PacketQueue::enQueue(const AVPacket packet)
{
	QMutexLocker locker(&mutex);
	queue.push(packet);
	size += packet.size;
	cond.wakeOne();
	return true;
}

//************************************
// Method:    deQueue
// FullName:  PacketQueue::deQueue
// Access:    public
// Returns:   AVPacket
// Qualifier:�����г���
//************************************
AVPacket PacketQueue::deQueue()
{
	bool ret = false;
	AVPacket pkt;
	QMutexLocker locker(&mutex);
	while (true)
	{
		if (!queue.empty())
		{
			pkt = queue.front();
			queue.pop();
			size -= pkt.size;
			ret = true;
			break;
		}
		else
		{
			cond.wait(&mutex);
		}
	}
	return pkt;
}

//************************************
// Method:    getPacketSize
// FullName:  PacketQueue::getPacketSize
// Access:    public
// Returns:   Uint32
// Qualifier:��ȡ����С
//************************************
Uint32 PacketQueue::getPacketSize()
{
	QMutexLocker locker(&mutex);
	return size;
}

//************************************
// Method:    queueFlush
// FullName:  PacketQueue::queueFlush
// Access:    public
// Returns:   void
// Qualifier:��ն���
//************************************
void PacketQueue::queueFlush() {
	while (!queue.empty())
	{
		AVPacket pkt = deQueue();
		av_free_packet(&pkt);
	}
}