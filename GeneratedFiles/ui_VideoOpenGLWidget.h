/********************************************************************************
** Form generated from reading UI file 'VideoOpenGLWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOOPENGLWIDGET_H
#define UI_VIDEOOPENGLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoOpenGLWidget
{
public:

    void setupUi(QWidget *VideoOpenGLWidget)
    {
        if (VideoOpenGLWidget->objectName().isEmpty())
            VideoOpenGLWidget->setObjectName(QString::fromUtf8("VideoOpenGLWidget"));
        VideoOpenGLWidget->resize(400, 300);

        retranslateUi(VideoOpenGLWidget);

        QMetaObject::connectSlotsByName(VideoOpenGLWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoOpenGLWidget)
    {
        VideoOpenGLWidget->setWindowTitle(QCoreApplication::translate("VideoOpenGLWidget", "VideoOpenGLWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoOpenGLWidget: public Ui_VideoOpenGLWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOOPENGLWIDGET_H
