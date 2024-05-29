#include "tutorialmenu.h"
#include "ui_tutorialmenu.h"

TutorialMenu::TutorialMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TutorialMenu)
{
    ui->setupUi(this);
}

TutorialMenu::~TutorialMenu()
{
    delete ui;
}
