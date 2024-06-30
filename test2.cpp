#include "test2.h"

test2::test2(QWidget *parent)
    : QWidget{parent}
{
    this->setFixedSize(W,H);
    this->setWindowTitle("听曲识歌");
    mainPage =new QStackedWidget(this);
    mainPage->setFixedSize(W,H);
    intro=new QWidget();
    //intro->setStyleSheet("background-color: red;");
    mainPage->addWidget(intro);
    QLabel* tip=new QLabel("在接下来的测试中，你需要通过听一段音乐来回答问题",intro);
    tip->setGeometry(W/2-200,160,400,200);
    tip->setAlignment(Qt::AlignCenter);
    QFont Font1;
    Font1.setPointSize(25);
    Font1.setBold(true);
    tip->setFont(Font1);
    tip->setWordWrap(true);
    QPushButton* start =new QPushButton("开始",intro);
    start->setGeometry(W-300,H-180,180,50);
    QFont Font2;
    Font2.setPointSize(20);
    start->setFont(Font2);
    myPlayer =new QMediaPlayer;
    myPlayer->setSource(QUrl(":/xiaoyequ.mp3"));
    myPlayer->play();
    mainPage->setCurrentIndex(0);

    q1=new QWidget();
    q1->setObjectName("q1");
    q1->setWindowTitle("问题1");
    q1->setFixedSize(W,H);
    myPlayer =new QMediaPlayer();
    myPlayer->setSource(QUrl(":/xiaoyequ.mp3"));
    myPlayer->play();
    QLabel* q1Label=new QLabel(q1);
    q1Label->setText("这段音乐最有可能出自哪个作品？");
    q1Label->setGeometry(QRect(W/2-210, 200, 420, 120));
    q1Label->setAlignment(Qt::AlignCenter);
    QFont font1;
    font1.setPointSize(22);
    font1.setBold(true);
    q1Label->setFont(font1);
    q1Label->show();
    QPushButton *q1b1=new QPushButton(q1);
    QPushButton *q1b2=new QPushButton(q1);
    QPushButton *q1b3=new QPushButton(q1);
    QFont font2;
    font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
    font2.setPointSize(15);
    int buttonX=W/4;
    q1b1->setObjectName("q1b1");
    q1b1->setGeometry(QRect(buttonX-50, 400, 120, 40));
    q1b1->setFont(font2);
    q1b1->setText("辛纳屈");
    q1b2->setObjectName("q1b2");
    q1b2->setGeometry(QRect(2*buttonX-50, 400, 120, 40));
    q1b2->setFont(font2);
    q1b2->setText("海顿");
    q1b3->setObjectName("q1b3");
    q1b3->setGeometry(QRect(3*buttonX-50, 400, 120, 40));
    q1b3->setFont(font2);
    q1b3->setText("普雷斯利");
    mainPage->addWidget(q1);
}
