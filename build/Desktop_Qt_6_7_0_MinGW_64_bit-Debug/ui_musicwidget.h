/********************************************************************************
** Form generated from reading UI file 'musicwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICWIDGET_H
#define UI_MUSICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicWidget
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider_process;
    QSlider *horizontalSlider_volume;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btPlayPause;
    QSpacerItem *horizontalSpacer;
    QPushButton *btHalt;

    void setupUi(QWidget *MusicWidget)
    {
        if (MusicWidget->objectName().isEmpty())
            MusicWidget->setObjectName("MusicWidget");
        MusicWidget->resize(616, 387);
        label = new QLabel(MusicWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 400, 200));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        widget = new QWidget(MusicWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 250, 421, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalSlider_process = new QSlider(widget);
        horizontalSlider_process->setObjectName("horizontalSlider_process");
        horizontalSlider_process->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_process);

        horizontalSlider_volume = new QSlider(widget);
        horizontalSlider_volume->setObjectName("horizontalSlider_volume");
        horizontalSlider_volume->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_volume);

        widget_2 = new QWidget(MusicWidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(210, 310, 121, 71));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        btPlayPause = new QPushButton(widget_2);
        btPlayPause->setObjectName("btPlayPause");
        btPlayPause->setMinimumSize(QSize(50, 50));
        btPlayPause->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/play.png);"));

        horizontalLayout->addWidget(btPlayPause);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btHalt = new QPushButton(widget_2);
        btHalt->setObjectName("btHalt");
        btHalt->setMinimumSize(QSize(50, 50));
        btHalt->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/halt.png);"));

        horizontalLayout->addWidget(btHalt);


        retranslateUi(MusicWidget);

        QMetaObject::connectSlotsByName(MusicWidget);
    } // setupUi

    void retranslateUi(QWidget *MusicWidget)
    {
        MusicWidget->setWindowTitle(QCoreApplication::translate("MusicWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("MusicWidget", "This is a label", nullptr));
        btPlayPause->setText(QString());
        btHalt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MusicWidget: public Ui_MusicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICWIDGET_H
