/********************************************************************************
** Form generated from reading UI file 'QTPlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPLAYER_H
#define UI_QTPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "videoopenglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QTPlayerClass
{
public:
    VideoOpenGLWidget *openGLWidget;
    QWidget *bottemWidget;
    QSlider *playslider;
    QPushButton *playButton;
    QPushButton *openButton;
    QSlider *volumeSlider;
    QWidget *currentContainer;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *currentLayout;
    QLabel *currentHour;
    QLabel *currentMinute;
    QLabel *currentSecond;
    QWidget *totalContainer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *totalLayout;
    QLabel *totalHour;
    QLabel *totalMinute;
    QLabel *totalSecond;

    void setupUi(QWidget *QTPlayerClass)
    {
        if (QTPlayerClass->objectName().isEmpty())
            QTPlayerClass->setObjectName(QString::fromUtf8("QTPlayerClass"));
        QTPlayerClass->resize(800, 600);
        QTPlayerClass->setStyleSheet(QString::fromUtf8("#openButton:!hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(120, 120, 120, 255),stop:0.495      rgba(39, 39, 39, 255),stop:0.505 rgba(39, 39, 39, 255),stop:1 rgba(120, 120, 120, 255));\n"
"    border:none;\n"
"    border-radius:5px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 75 12pt \"\351\273\221\344\275\223\";\n"
"}\n"
"#openButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(39, 39, 39, 255),stop:0.495      rgba(120, 120, 120, 255),stop:0.505 rgba(120, 120, 120, 255),stop:1 rgba(39, 39, 39, 255));\n"
"    border:none;\n"
"    border-radius:5px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 75 12pt \"\351\273\221\344\275\223\";\n"
"}\n"
"#playButton{background-color: rgba(255, 255, 255,0);}\n"
"\n"
"/*#playButton:hover{image: url(:/QTPlayer/Resources/PlayN.png);}\n"
"\n"
"#playButton:!hover{image: url(:/QTPlayer/Resources/PlayH.png);}\n"
"\n"
"#playButton:pressed{image: url(:/QTPlayer/Resources/PlayP.png);}\n"
""
                        "*/\n"
" \n"
"\n"
"#bottemWidget{\n"
"background-color: rgba(0, 0, 0, 122);\n"
"}\n"
"\n"
"#totalHour{\n"
"    color: rgb(255, 255, 255);\n"
"	font: 75 8pt \"\351\273\221\344\275\223\";\n"
"}\n"
"#totalMinute{\n"
"    color: rgb(255, 255, 255);\n"
"	font: 75 8pt \"\351\273\221\344\275\223\";\n"
"}\n"
"#totalSecond{\n"
"    color: rgb(255, 255, 255);\n"
"	font: 75 8pt \"\351\273\221\344\275\223\";\n"
"}\n"
"#currentHour{\n"
"    color: rgb(255, 255, 255);\n"
"	font: 75 8pt \"\351\273\221\344\275\223\";\n"
"}\n"
"#currentMinute{\n"
"    color: rgb(255, 255, 255);\n"
"	font: 75 8pt \"\351\273\221\344\275\223\";\n"
"}\n"
"#currentSecond{\n"
"    color: rgb(255, 255, 255);\n"
"	font: 75 8pt \"\351\273\221\344\275\223\";\n"
"}"));
        openGLWidget = new VideoOpenGLWidget(QTPlayerClass);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(0, 0, 800, 600));
        bottemWidget = new QWidget(QTPlayerClass);
        bottemWidget->setObjectName(QString::fromUtf8("bottemWidget"));
        bottemWidget->setGeometry(QRect(0, 520, 800, 80));
        playslider = new QSlider(bottemWidget);
        playslider->setObjectName(QString::fromUtf8("playslider"));
        playslider->setGeometry(QRect(120, 10, 601, 22));
        playslider->setMaximum(999);
        playslider->setOrientation(Qt::Horizontal);
        playButton = new QPushButton(bottemWidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(400, 40, 31, 28));
        openButton = new QPushButton(bottemWidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(470, 40, 93, 28));
        volumeSlider = new QSlider(bottemWidget);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setGeometry(QRect(590, 50, 160, 22));
        volumeSlider->setMaximum(999);
        volumeSlider->setValue(500);
        volumeSlider->setOrientation(Qt::Horizontal);
        currentContainer = new QWidget(bottemWidget);
        currentContainer->setObjectName(QString::fromUtf8("currentContainer"));
        currentContainer->setGeometry(QRect(10, 29, 61, 51));
        horizontalLayoutWidget_2 = new QWidget(currentContainer);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 51, 21));
        currentLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        currentLayout->setSpacing(6);
        currentLayout->setContentsMargins(11, 11, 11, 11);
        currentLayout->setObjectName(QString::fromUtf8("currentLayout"));
        currentLayout->setContentsMargins(0, 0, 0, 0);
        currentHour = new QLabel(horizontalLayoutWidget_2);
        currentHour->setObjectName(QString::fromUtf8("currentHour"));

        currentLayout->addWidget(currentHour);

        currentMinute = new QLabel(horizontalLayoutWidget_2);
        currentMinute->setObjectName(QString::fromUtf8("currentMinute"));

        currentLayout->addWidget(currentMinute);

        currentSecond = new QLabel(horizontalLayoutWidget_2);
        currentSecond->setObjectName(QString::fromUtf8("currentSecond"));

        currentLayout->addWidget(currentSecond);

        totalContainer = new QWidget(bottemWidget);
        totalContainer->setObjectName(QString::fromUtf8("totalContainer"));
        totalContainer->setGeometry(QRect(730, 10, 51, 41));
        horizontalLayoutWidget = new QWidget(totalContainer);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 51, 21));
        totalLayout = new QHBoxLayout(horizontalLayoutWidget);
        totalLayout->setSpacing(6);
        totalLayout->setContentsMargins(11, 11, 11, 11);
        totalLayout->setObjectName(QString::fromUtf8("totalLayout"));
        totalLayout->setContentsMargins(0, 0, 0, 0);
        totalHour = new QLabel(horizontalLayoutWidget);
        totalHour->setObjectName(QString::fromUtf8("totalHour"));

        totalLayout->addWidget(totalHour);

        totalMinute = new QLabel(horizontalLayoutWidget);
        totalMinute->setObjectName(QString::fromUtf8("totalMinute"));

        totalLayout->addWidget(totalMinute);

        totalSecond = new QLabel(horizontalLayoutWidget);
        totalSecond->setObjectName(QString::fromUtf8("totalSecond"));

        totalLayout->addWidget(totalSecond);


        retranslateUi(QTPlayerClass);
        QObject::connect(openButton, SIGNAL(clicked()), QTPlayerClass, SLOT(openVideoFile()));
        QObject::connect(playslider, SIGNAL(sliderPressed()), QTPlayerClass, SLOT(sliderPress()));
        QObject::connect(playslider, SIGNAL(sliderReleased()), QTPlayerClass, SLOT(sliderRelease()));
        QObject::connect(playButton, SIGNAL(clicked()), QTPlayerClass, SLOT(play()));
        QObject::connect(volumeSlider, SIGNAL(sliderMoved(int)), QTPlayerClass, SLOT(setVolume(int)));

        QMetaObject::connectSlotsByName(QTPlayerClass);
    } // setupUi

    void retranslateUi(QWidget *QTPlayerClass)
    {
        QTPlayerClass->setWindowTitle(QCoreApplication::translate("QTPlayerClass", "QTPlayer", nullptr));
        playButton->setText(QString());
        openButton->setText(QCoreApplication::translate("QTPlayerClass", "open", nullptr));
        currentHour->setText(QCoreApplication::translate("QTPlayerClass", "0:", nullptr));
        currentMinute->setText(QCoreApplication::translate("QTPlayerClass", "0:", nullptr));
        currentSecond->setText(QCoreApplication::translate("QTPlayerClass", "0", nullptr));
        totalHour->setText(QCoreApplication::translate("QTPlayerClass", "0:", nullptr));
        totalMinute->setText(QCoreApplication::translate("QTPlayerClass", "0:", nullptr));
        totalSecond->setText(QCoreApplication::translate("QTPlayerClass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTPlayerClass: public Ui_QTPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPLAYER_H
