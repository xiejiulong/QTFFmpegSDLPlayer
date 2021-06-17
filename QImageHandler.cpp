#include "QImageHandler.h"

#include <QMatrix>

QImageHandler::QImageHandler(QImage*& srcImage)
{
	this->desImage = srcImage;
}

QImageHandler::~QImageHandler()
{
}

//************************************
// Method:    mirrorUpAndDown
// FullName:  QImageHandler::mirrorUpAndDown
// Access:    public
// Returns:   void
// Qualifier:��Ƶ���¾������
//************************************
void QImageHandler::mirrorUpAndDown()
{
	*desImage = desImage->mirrored(false, true);
}

//************************************
// Method:    mirrorLeftAndRight
// FullName:  QImageHandler::mirrorLeftAndRight
// Access:    public
// Returns:   void
// Qualifier:�������Ҿ������
//************************************
void QImageHandler::mirrorLeftAndRight()
{
	*desImage = desImage->mirrored(true, false);
}

//************************************
// Method:    rgb2Gray
// FullName:  QImageHandler::rgb2Gray
// Access:    public
// Returns:   void
// Qualifier:��ɫת����rgbת�Ҷ�ͼ
//************************************
void QImageHandler::rgb2Gray()
{
	int imageWidth = 0;
	int imageHeight = 0;
	if (desImage && desImage->format() != QImage::Format_Grayscale8) {
		imageWidth = desImage->width();
		imageHeight = desImage->height();
		if (desImage) {
			delete desImage;
			desImage = NULL;
		}
		desImage = new QImage(imageWidth, imageHeight, QImage::Format_Grayscale8);
	}
}

//************************************
// Method:    gray2RGB
// FullName:  QImageHandler::gray2RGB
// Access:    public
// Returns:   void
// Qualifier:�Ҷ�ͼתrgb
//************************************
void QImageHandler::gray2RGB()
{
	int imageWidth = 0;
	int imageHeight = 0;
	if (desImage && desImage->format() != QImage::Format_ARGB32) {
		imageWidth = desImage->width();
		imageHeight = desImage->height();
		if (desImage) {
			delete desImage;
			desImage = NULL;
		}

		desImage = new QImage(imageWidth, imageHeight, QImage::Format_ARGB32);
	}
}