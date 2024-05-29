#include "assessmenu.h"
#include "ui_assessmenu.h"

AssessMenu::AssessMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AssessMenu)
{
    ui->setupUi(this);
}

AssessMenu::~AssessMenu()
{
    delete ui;
}
