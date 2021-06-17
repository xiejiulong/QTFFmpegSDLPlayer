#pragma once

#include <queue>

#include <QWaitCondition>
#include <QMutex>
extern "C" {
#include <SDL2/SDL.h>
#include <libavcodec\avcodec.h>
}

class PacketQueue
{
public:
	PacketQueue();
	bool enQueue(const AVPacket packet);
	AVPacket deQueue();
	Uint32 getPacketSize();
	void queueFlush();
	~PacketQueue();
private:
	std::queue<AVPacket> queue;
	Uint32    size;
	QMutex mutex;
	QWaitCondition cond;
};
