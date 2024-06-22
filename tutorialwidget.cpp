#include "tutorialwidget.h"
#include "ui_tutorialwidget.h"
#include "Texts.h"

#include<QListWidget>
#include<QStackedWidget>
#include<QHBoxLayout>
#include<QLabel>
#include<QPushButton>
#include <QString>


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
    list->setStyleSheet("QListWidget::item { height: 60px;}");

    lb0=new QLabel("窗口0",this);
    //classic_1="我偷偷换掉成这一句";
    lb1=new QLabel("窗口1",this);
    lb1->setWordWrap(true);
    //QLabel * lb2=new QLabel(classic_2,this);
    lb2=new QLabel("defult文案",this);
    lb2->setWordWrap(true);
    lb3=new QLabel(this);
    lb3->setText("看到这句话说明还没搭好逻辑yet");
    lb3->setWordWrap(true);

    QWidget* page4=new QWidget;
    QPushButton* pb1=new QPushButton("神奇按钮",page4);

    //创建垂直布局管理器
    QVBoxLayout *vLayout = new QVBoxLayout(page4);
    vLayout->addWidget(pb1, 0, Qt::AlignHCenter); // 将按钮居中添加到垂直布局中
    vLayout->addStretch(); // 添加拉伸因子，使按钮居中显示


    stack->addWidget(lb0);
    stack->addWidget(lb1);
    stack->addWidget(lb2);
    stack->addWidget(lb3);
    stack->addWidget(page4);

    //水平布局
    QHBoxLayout * hlayout = new QHBoxLayout(this);
    //hlayout->setMargin(0);//控件与窗口的边距
    hlayout->setSpacing(10);
    hlayout->addWidget(list,1);
    hlayout->addWidget(stack,5,Qt::AlignHCenter);

    connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));
    connect(pb1,&QPushButton::clicked,this,&TutorialWidget::showDialog);

}

void TutorialWidget::showDialog(){
    newDialog=new BasicDialog1;
    QLabel* temp=new QLabel(newDialog);
    temp->setText("这应该是一个试听界面，可以播放音乐或视频。如你所见，现在还没有设计好。");
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(temp);  // 将 QLabel 添加到布局中

    // 设置布局管理器
    newDialog->setLayout(layout);
    newDialog->exec();
}

TutorialWidget::~TutorialWidget()
{
    delete ui;
}
