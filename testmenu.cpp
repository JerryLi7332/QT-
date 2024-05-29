#include "testmenu.h"
#include "ui_testmenu.h"

TestMenu::TestMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestMenu)
{
    ui->setupUi(this);
}

TestMenu::~TestMenu()
{
    delete ui;
}
