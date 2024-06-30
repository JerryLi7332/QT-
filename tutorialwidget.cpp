#include "tutorialwidget.h"
#include "ui_tutorialwidget.h"
#include "Texts.h"

#include<QListWidget>
#include<QStackedWidget>
#include<QHBoxLayout>
#include<QLabel>
#include<QPushButton>
#include <QString>
#include <QFont>


TutorialWidget::TutorialWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TutorialWidget)
{

    setFixedSize(800,600);
    ui->setupUi(this);

    //创建QListWidget和QStackedWidget控件
    QListWidget * list = new QListWidget(this);
    QStackedWidget * stack = new QStackedWidget (this);
    //在list中加入item

    list->addItem("概述");
    list->addItems(QStringList({"起源","分类及特点","代表作品"}));//演示了listItem不同的加入方法
    list->addItem("试听");

    list->setStyleSheet("QListWidget::item { height: 100px;}");


    QFont font("Arial",15);
    lb0=new QLabel("窗口0",this);
    lb0->setFont(font);
    lb1=new QLabel("窗口1",this);
    lb1->setFont(font);
    //lb1->setWordWrap(true);
    lb2=new QLabel("defult文案",this);
    lb2->setFont(font);
    //lb2->setWordWrap(true);
    lb3=new QLabel(this);
    lb3->setFont(font);
    //lb3->setText("看到这句话说明还没搭好逻辑yet");
    //lb3->setWordWrap(true);
    music_widget=new MusicWidget;


    stack->addWidget(lb0);
    stack->addWidget(lb1);
    stack->addWidget(lb2);
    stack->addWidget(lb3);
    stack->addWidget(music_widget);

    //水平布局
    QHBoxLayout * hlayout = new QHBoxLayout(this);
    //hlayout->setMargin(0);//控件与窗口的边距
    hlayout->setSpacing(10);
    hlayout->addWidget(list,1);
    hlayout->addWidget(stack,5,Qt::AlignHCenter);

    connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));

    //connect(pb1,&QPushButton::clicked,this,&TutorialWidget::showDialog);
    //connect(pb1,&QPushButton::clicked,this,&TutorialWidget::showMusicWidget);

}



//void TutorialWidget::showMusicWidget(){
  //  music_widget=new MusicWidget;
    //music_widget->show();
//}

TutorialWidget::~TutorialWidget()
{
    delete ui;
    music_widget->mediaPlayer->stop();
    music_widget->mediaPlayer->setAudioOutput(nullptr);
    delete music_widget;
}
