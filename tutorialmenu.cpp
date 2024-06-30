#include "tutorialmenu.h"
#include "ui_tutorialmenu.h"
#include "Texts.h"
#include <QDebug>

TutorialMenu::TutorialMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TutorialMenu)
{
    setFixedSize(800,600);
    this->setWindowTitle("测试");
    qDebug() << "Window title set to '测试'";
    ui->setupUi(this);
}

TutorialMenu::~TutorialMenu()
{
    delete ui;
}

void TutorialMenu::on_btClassic_clicked()
{
    TutorialWidget* classic=new TutorialWidget();//这是一种写法：classic建在槽函数里
    //classic->lb1->setText("something");//这句无关紧要，试错用的
    //classic->setTitle("classic");
    classic->lb0->setText(classic_0);
    classic->lb1->setText(classic_1);
    classic->lb2->setText(classic_2);
    classic->lb3->setText(classic_3);
    classic->lb0->setWordWrap(true);//自动换行
    classic->lb1->setWordWrap(true);
    classic->lb2->setWordWrap(true);
    classic->lb3->setWordWrap(true);

    //classic->music_widget->mediaPlayer->setSource(QUrl::fromLocalFile(path_classic));

    classic->music_widget->setMusic(path_classic);
    classic->music_widget->updateMusicTitle(blue);

    classic->show();
}


void TutorialMenu::on_btJazz_clicked()
{
    jazz=new TutorialWidget();//这是另一种写法，jazz是TutorialMenu类的成员指针。后面同这种写法

    jazz->lb0->setText(jazz_0);
    jazz->lb0->setWordWrap(true);
    jazz->lb1->setText(jazz_1);//成功了！！！
    jazz->lb1->setWordWrap(true);
    jazz->lb2->setText(jazz_2);
    jazz->lb2->setWordWrap(true);
    jazz->lb3->setText(jazz_3);
    jazz->lb3->setWordWrap(true);

    jazz->music_widget->setMusic(path_jazz);
    jazz->music_widget->updateMusicTitle(waww);

    jazz->show();
}



void TutorialMenu::on_btRock_clicked()
{
    rock=new TutorialWidget();

    rock->lb0->setText(rock_0);
    rock->lb0->setWordWrap(true);
    rock->lb1->setText(rock_1);
    rock->lb1->setWordWrap(true);
    rock->lb2->setText(rock_2);
    rock->lb2->setWordWrap(true);
    rock->lb3->setText(rock_3);
    rock->lb3->setWordWrap(true);

    rock->music_widget->setMusic(path_rock);
    rock->music_widget->updateMusicTitle(myLife);

    rock->show();

}



void TutorialMenu::on_btPop_clicked()
{
    pop=new TutorialWidget();

    pop->lb0->setText(pop_0);
    pop->lb1->setText(pop_1);
    pop->lb2->setText(pop_2);
    pop->lb3->setText(pop_3);

    pop->lb0->setWordWrap(true);
    pop->lb1->setWordWrap(true);
    pop->lb2->setWordWrap(true);
    pop->lb3->setWordWrap(true);

    pop->music_widget->setMusic(path_pop);
    pop->music_widget->updateMusicTitle(cruel_summer);

    pop->show();

}




void TutorialMenu::on_pushButton_clicked()
{
    close();
}

