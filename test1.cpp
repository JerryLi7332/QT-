#include "test1.h"
#include "ui_test1.h"

test1::test1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::test1)
{
    //ui->setupUi(this);
    this->setWindowTitle("知识检测");
    this->setFixedSize(W,H);
    mainPage =new QStackedWidget(this);
    mainPage->setFixedSize(W,H);

    q1=new QWidget();
    q1->setObjectName("q1");
    q1->setWindowTitle("问题1");
    q1->setFixedSize(W,H);
    QLabel* q1Label=new QLabel(q1);
    q1Label->setText(" 以下哪个音乐家属于古典流派？");
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
    //mainPage->setCurrentIndex(0);
    connect(q1b1,&QPushButton::clicked,this,&test1::on_q1b1_clicked);
    connect(q1b2,&QPushButton::clicked,this,&test1::on_q1b2_clicked);
    connect(q1b3,&QPushButton::clicked,this,&test1::on_q1b3_clicked);
    nextQ1=new QPushButton("进入下一题",q1);
    nextQ1->setGeometry(W-300,H-200,180,50);
    QFont font;
    font.setPointSize(20);
    nextQ1->setFont(font);
    nextQ1->setObjectName("nextQ1");
    nextQ1->hide();
    QObject::connect(nextQ1,&QPushButton::clicked,[=](){
        //qDebug()<<"now index"<<mainPage->currentIndex();
        mainPage->setCurrentWidget(q2);
    });

    q2=new QWidget();
    q2->setFixedSize(W,H);
    QLabel* q2Label=new QLabel(q2);
    q2Label->setText("在表演过程中往往伴随着强烈的鼓点和节奏，以及激情四溢的演唱的是哪种音乐？");
    q2Label->setGeometry(QRect(W/2-400, 60, 800, 300));
    q2Label->setAlignment(Qt::AlignCenter);
    q2Label->setWordWrap(true);
    q2Label->setFont(font1);
    QPushButton *q2b1=new QPushButton(q2);
    QPushButton *q2b2=new QPushButton(q2);
    QPushButton *q2b3=new QPushButton(q2);
    q2b1->setObjectName("q2b1");
    q2b1->setGeometry(QRect(buttonX-50, 400, 120, 40));
    q2b1->setFont(font2);
    q2b1->setText("摇滚乐");
    q2b2->setObjectName("q2b2");
    q2b2->setGeometry(QRect(2*buttonX-50, 400, 120, 40));
    q2b2->setFont(font2);
    q2b2->setText("rap");
    q2b3->setObjectName("q2b3");
    q2b3->setGeometry(QRect(3*buttonX-50, 400, 120, 40));
    q2b3->setFont(font2);
    q2b3->setText("爵士乐");
    mainPage->addWidget(q2);
    connect(q2b1,&QPushButton::clicked,this,&test1::on_q2b1_clicked);
    connect(q2b2,&QPushButton::clicked,this,&test1::on_q2b2_clicked);
    connect(q2b3,&QPushButton::clicked,this,&test1::on_q2b3_clicked);
    nextQ2=new QPushButton("进入下一题",q2);
    nextQ2->setGeometry(W-300,H-200,180,50);
    nextQ2->setFont(font);
    nextQ2->hide();
    QObject::connect(nextQ2,&QPushButton::clicked,[=](){
        //qDebug()<<"now index "<<mainPage->currentIndex();
        mainPage->setCurrentWidget(q3);
    });

    q3=new QWidget();
    q3->setFixedSize(W,H);
    QLabel* q3Label=new QLabel(q3);
    q3Label->setText("以下哪种乐器不是乡村音乐演奏时的常用乐器？");
    q3Label->setGeometry(QRect(W/2-400, 60, 800, 300));
    q3Label->setAlignment(Qt::AlignCenter);
    q3Label->setWordWrap(true);
    q3Label->setFont(font1);
    QPushButton *q3b1=new QPushButton(q3);
    QPushButton *q3b2=new QPushButton(q3);
    QPushButton *q3b3=new QPushButton(q3);
    q3b1->setObjectName("q3b1");
    q3b1->setGeometry(QRect(buttonX-50, 400, 120, 40));
    q3b1->setFont(font2);
    q3b1->setText("吉他");
    q3b2->setObjectName("q3b2");
    q3b2->setGeometry(QRect(2*buttonX-50, 400, 120, 40));
    q3b2->setFont(font2);
    q3b2->setText("小号");
    q3b3->setObjectName("q2b3");
    q3b3->setGeometry(QRect(3*buttonX-50, 400, 120, 40));
    q3b3->setFont(font2);
    q3b3->setText("小提琴");
    mainPage->addWidget(q3);
    connect(q3b1,&QPushButton::clicked,this,&test1::on_q3b1_clicked);
    connect(q3b2,&QPushButton::clicked,this,&test1::on_q3b2_clicked);
    connect(q3b3,&QPushButton::clicked,this,&test1::on_q3b3_clicked);
    nextQ3=new QPushButton("进入下一题",q3);
    nextQ3->setGeometry(W-300,H-200,180,50);
    nextQ3->setFont(font);
    nextQ3->hide();
    connect(nextQ3,&QPushButton::clicked,[=](){
        //qDebug()<<"now index "<<mainPage->currentIndex();
        mainPage->setCurrentWidget(q4);
    });

    q4=new QWidget();
    q4->setFixedSize(W,H);
    QLabel* q4Label=new QLabel(q4);
    q4Label->setText("爵士乐起源于哪个国家？");
    q4Label->setGeometry(QRect(W/2-400, 60, 800, 300));
    q4Label->setAlignment(Qt::AlignCenter);
    q4Label->setWordWrap(true);
    q4Label->setFont(font1);
    QPushButton *q4b1=new QPushButton(q4);
    QPushButton *q4b2=new QPushButton(q4);
    QPushButton *q4b3=new QPushButton(q4);
    q4b1->setObjectName("q4b1");
    q4b1->setGeometry(QRect(buttonX-50, 400, 120, 40));
    q4b1->setFont(font2);
    q4b1->setText("美国");
    q4b2->setObjectName("q4b2");
    q4b2->setGeometry(QRect(2*buttonX-50, 400, 120, 40));
    q4b2->setFont(font2);
    q4b2->setText("法国");
    q4b3->setObjectName("q4b3");
    q4b3->setGeometry(QRect(3*buttonX-50, 400, 120, 40));
    q4b3->setFont(font2);
    q4b3->setText("意大利");
    mainPage->addWidget(q4);
    connect(q4b1,&QPushButton::clicked,this,&test1::on_q4b1_clicked);
    connect(q4b2,&QPushButton::clicked,this,&test1::on_q4b2_clicked);
    connect(q4b3,&QPushButton::clicked,this,&test1::on_q4b3_clicked);
    nextQ4=new QPushButton("进入下一题",q4);
    nextQ4->setGeometry(W-300,H-200,180,50);
    nextQ4->setFont(font);
    nextQ4->hide();
    QObject::connect(nextQ4,&QPushButton::clicked,[=](){
        //qDebug()<<"now index "<<mainPage->currentIndex();
        mainPage->setCurrentWidget(q5);
    });

    q5=new QWidget();
    q5->setFixedSize(W,H);
    QLabel* q5Label=new QLabel(q5);
    q5Label->setText("民谣的常见主题不包括以下哪点？");
    q5Label->setGeometry(QRect(W/2-400, 60, 800, 300));
    q5Label->setAlignment(Qt::AlignCenter);
    q5Label->setWordWrap(true);
    q5Label->setFont(font1);
    QPushButton *q5b1=new QPushButton(q5);
    QPushButton *q5b2=new QPushButton(q5);
    QPushButton *q5b3=new QPushButton(q5);
    q5b1->setObjectName("q5b1");
    q5b1->setGeometry(QRect(buttonX-50, 400, 120, 40));
    q5b1->setFont(font2);
    q5b1->setText("理想");
    q5b2->setObjectName("q5b2");
    q5b2->setGeometry(QRect(2*buttonX-50, 400, 120, 40));
    q5b2->setFont(font2);
    q5b2->setText("爱情");
    q5b3->setObjectName("q5b3");
    q5b3->setGeometry(QRect(3*buttonX-50, 400, 120, 40));
    q5b3->setFont(font2);
    q5b3->setText("金钱");
    mainPage->addWidget(q5);
    mainPage->setCurrentWidget(q1);
    connect(q5b1,&QPushButton::clicked,this,&test1::on_q5b1_clicked);
    connect(q5b2,&QPushButton::clicked,this,&test1::on_q5b2_clicked);
    connect(q5b3,&QPushButton::clicked,this,&test1::on_q5b3_clicked);
    nextQ5=new QPushButton("继续",q5);
    nextQ5->setGeometry(W-300,H-200,180,50);
    nextQ5->setFont(font);
    nextQ5->hide();
    connect(nextQ5,&QPushButton::clicked,this,&test1::Q5over);

    zongjie=new QWidget;
    mainPage->addWidget(zongjie);


}

test1::~test1()
{
    delete ui;
}
void test1::initAns(QWidget* w)
{
    res = new QLabel(w);
    QFont font1;
    font1.setPointSize(21);
    font1.setWeight(QFont::ExtraBold);
    res->setFont(font1);
    res->setAlignment(Qt::AlignCenter);
    res->setGeometry(W/2-200,60,400,100);
}
void test1::chooseOver()
{
    this->hide();
}


void test1::Q1toQ2()
{
    if(q1_clicked)
        return;
    nextQ1->show();
}
void test1::on_q1b1_clicked()
{
    if(q1_clicked)
        return;
    initAns(q1);
    res->setText("很遗憾，您答错了");
    res->show();
    Q1toQ2();
    q1_clicked = true;
}
void test1::on_q1b2_clicked()
{
    if(q1_clicked)
        return;
    initAns(q1);
    res->setText("恭喜你，答对了！");
    res->show();
    Q1toQ2();
    q1_clicked = true;
    test1::score+=20;
}
void test1::on_q1b3_clicked()
{
    if(q1_clicked)
        return;
    initAns(q1);
    res->setText("很遗憾，您答错了");
    res->show();
    Q1toQ2();
    q1_clicked = true;
}
void test1::on_nextQ1_clicked()
{
    mainPage->setCurrentIndex(1);
}


void test1::Q2toQ3()
{
    if(q2_clicked)
        return;
    nextQ2->show();
}
void test1::on_q2b1_clicked()
{
    if(q2_clicked)
        return;
    initAns(q2);
    res->setText("恭喜你，答对了！");
    res->show();
    Q2toQ3();
    q2_clicked = true;
    test1::score+=20;
}
void test1::on_q2b2_clicked()
{
    if(q2_clicked)
        return;
    initAns(q2);
    res->setText("很遗憾，您答错了");
    res->show();
    Q2toQ3();
    q2_clicked = true;

}
void test1::on_q2b3_clicked()
{
    if(q2_clicked)
        return;
    initAns(q2);
    res->setText("很遗憾，您答错了");
    res->show();
    Q2toQ3();
    q2_clicked = true;
}


void test1::Q3toQ4()
{
    if(q3_clicked)
        return;
    nextQ3->show();
}

void test1::on_q3b1_clicked()
{
    if(q3_clicked)
        return;
    initAns(q3);
    res->setText("很遗憾，您答错了");
    res->show();
    Q3toQ4();
    q3_clicked = true;
}
void test1::on_q3b2_clicked()
{
    if(q3_clicked)
        return;
    initAns(q3);
    res->setText("恭喜你，答对了！");
    res->show();
    Q3toQ4();
    q3_clicked = true;
    test1::score+=20;
}
void test1::on_q3b3_clicked()
{
    if(q3_clicked)
        return;
    initAns(q3);
    res->setText("很遗憾，您答错了");
    res->show();
    Q3toQ4();
    q3_clicked = true;
}


void test1::Q4toQ5()
{
    if(q4_clicked)
        return;
    nextQ4->show();
}
void test1::on_q4b1_clicked()
{
    if(q4_clicked)
        return;
    initAns(q4);
    res->setText("恭喜你，答对了！");
    res->show();
    Q4toQ5();
    q4_clicked = true;
    test1::score+=20;
}
void test1::on_q4b2_clicked()
{
    if(q4_clicked)
        return;
    initAns(q4);
    res->setText("很遗憾，您答错了");
    res->show();
    Q4toQ5();
    q4_clicked = true;

}
void test1::on_q4b3_clicked()
{
    if(q4_clicked)
        return;
    initAns(q4);
    res->setText("很遗憾，您答错了");
    res->show();
    Q4toQ5();
    q4_clicked = true;
}


void test1::Q5back()
{
    if(q5_clicked)
        return;
    nextQ5->show();
}
void test1::on_q5b1_clicked()
{
    if(q5_clicked)
        return;
    initAns(q5);
    res->setText("很遗憾，您答错了");
    res->show();
    Q5back();
    q5_clicked = true;
}
void test1::on_q5b2_clicked()
{
    if(q5_clicked)
        return;
    initAns(q5);
    res->setText("很遗憾，您答错了");
    res->show();
    Q5back();
    q5_clicked = true;

}
void test1::on_q5b3_clicked()
{
    if(q5_clicked)
        return;
    initAns(q5);
    res->setText("恭喜你，答对了！");
    res->show();
    Q5back();
    q5_clicked = true;
    test1::score+=20;
}

void test1::Q5over()
{
    zongjie->setFixedSize(W,H);
    QLabel* l1=new QLabel(zongjie);
    QString s ="您的测试成绩为：";
    s += QString::number(score);
    s+=" 分";
    l1->setText(s);
    l1->setGeometry(QRect(W/2-400, 60, 800, 300));
    l1->setAlignment(Qt::AlignCenter);
    l1->setWordWrap(true);
    QFont font1;
    font1.setPointSize(22);
    font1.setBold(true);
    l1->setFont(font1);
    QLabel* l2=new QLabel(zongjie);
    QString str;
    if(score <= 20){
        str="不是，哥们？蒙也不止对这点啊(";
    }
    else if(score <=60){
        str="错的有点多，还要继续加油啊";
    }
    else{
        str="答的很不错，看来你已经大概掌握了我们的内容";
    }
    l2->setText(str);
    l2->setGeometry(QRect(W/2-400, 200, 800, 300));
    l2->setAlignment(Qt::AlignCenter);
    l2->setWordWrap(true);
    QFont font;
    font.setPointSize(20);
    l2->setFont(font);
    back=new QPushButton("返回",zongjie);
    back->setGeometry(W-300,H-200,180,50);
    back->setFont(font);
    connect(back,&QPushButton::clicked,[=](){
        emit t1Over();
    });
    mainPage->setCurrentWidget(zongjie);
}
