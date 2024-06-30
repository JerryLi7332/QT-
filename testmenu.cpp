#include "testmenu.h"
#include "ui_testmenu.h"

TestMenu::TestMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestMenu)
{
    //ui->setupUi(this);
    this->setWindowTitle("测试");
    //this->setWindowFlags(Qt::FramelessWindowHint);
    //t1 = new test1();
    QPixmap pixmap;
    pixmap.load(":/image/3.jpg");
    int w=pixmap.width();
    int h=pixmap.height();
    qDebug()<<"w="<<w;
    qDebug()<<"h="<<h;
    this->setFixedSize(w,h);
    QLabel* background=new QLabel(this);
    background->setPixmap(pixmap);
    background->setScaledContents(true);
    background->setGeometry(0,0,w,h);
    background->show();
    QLabel* welcome = new QLabel("欢迎来到测试阶段！",this);
    welcome->setGeometry(w/2-200,140,400,90);
    QFont font1;
    font1.setPointSize(30);
    font1.setBold(true);
    welcome->setFont(font1);
    welcome->setAlignment(Qt::AlignCenter);
    welcome->show();
    QPushButton* Btntest1=new QPushButton("开始检测",this);
    Btntest1->setGeometry(w/2-72,390,130,40);
    QFont font2;
    font2.setPointSize(17);
    Btntest1->setFont(font2);
    Btntest1->show();
    QPushButton* Btntest2=new QPushButton("听曲识歌",this);
    Btntest2->setGeometry(w/2-72,450,130,40);
    Btntest2->setFont(font2);
    Btntest2->hide();
    t1=new class test1();
    connect(Btntest1,&QPushButton::clicked,this,&TestMenu::on_t1_clicked);
    connect(t1,&test1::sendResult,this,&TestMenu::addScore);
    connect(t1,&test1::t1Over,[=](){
        t1->hide();
        this->show();
    });
    t2 =new test2;
    connect(Btntest2,&QPushButton::clicked,this,&TestMenu::on_t2_clicked);
    //ui->setupUi(this);
    //connect(ui->chooseBtn,&QPushButton::clicked,this,&TestMenu::on_chooseBtn_clicked);
    //connect(t1,&test1::sendResult,this,&TestMenu::addScore);
}

TestMenu::~TestMenu()
{
    delete ui;
}
void TestMenu::addScore(int a)
{
    score+=a;
    //qDebug()<<"score="<<score;
}

void TestMenu::on_t1_clicked()
{
    this->hide();
    t1->show();
}
void TestMenu::on_t2_clicked()
{
    this->hide();
    t2->show();
}

