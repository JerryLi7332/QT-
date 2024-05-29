#include "basicdialog1.h"
#include "ui_basicdialog1.h"

BasicDialog1::BasicDialog1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BasicDialog1)
{
    ui->setupUi(this);
}

BasicDialog1::~BasicDialog1()
{
    delete ui;
}
