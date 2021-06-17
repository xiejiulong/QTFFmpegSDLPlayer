#pragma once
#include <QTimer>
#include <QMutex>

extern "C" {
#include <libswscale\swscale.h>
#include <libavutil\time.h>
#include <libavformat/avformat.h>
#include <libswresample/swresample.h>
}
class QImage;
class DisplayMediaTimer :public QObject
{
	Q_OBJECT
public:
	static DisplayMediaTimer* getInstance() {
		static DisplayMediaTimer displayMediaThread;
		return &displayMediaThread;
	}
	bool isPlaying();//��ȡ����״̬
	void setPlay(bool isPlaying);//���ò���״̬
	~DisplayMediaTimer();
	void resetImage(int width, int height);
public slots:
	void synchronizeAudioAndVideo();
private:
	DisplayMediaTimer();
	bool isPlay = false;
	QTimer* timer;//��Ƶ��ʱˢ����
	uchar* buf;
	QImage* img;
	int imageWidth = 800;
	int imageHeight = 600;
	QMutex mutex;
signals:
	void updateFrame(QImage* image);//���͵�opengl
};
