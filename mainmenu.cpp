#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "tutorialmenu.h"
#include "ui_tutorialmenu.h"
#include"assessmenu.h"
#include"ui_assessmenu.h"
#include"testmenu.h"
#include"ui_testmenu.h"
#include <QDialog>
#include <QLabel>
#include <QPushButton>

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_btTutorial_clicked()
{
    // QDialog* tutorial_menu = new QDialog(this);
    // tutorial_menu->setFixedSize(800, 600);
    // QVBoxLayout* layout = new QVBoxLayout(tutorial_menu);
    // QLabel* label = new QLabel("Welcome to the tutorial menu", tutorial_menu);
    // layout->addWidget(label);
    // QPushButton* button = new QPushButton("OK", tutorial_menu);
    // layout->addWidget(button);
    // tutorial_menu->setLayout(layout);
    // tutorial_menu->show();
    TutorialMenu* menu_1=new TutorialMenu(this);

    menu_1->show();



}


void MainMenu::on_btTest_clicked()
{
    TestMenu* menu_2=new TestMenu(this);
    menu_2->show();
    //ui->btTest->setText("测试ing");


}



void MainMenu::on_btAssess_clicked()
{
    AssessMenu* menu_3=new AssessMenu(this);
    menu_3->show();

}

