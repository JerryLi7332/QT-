#include "basicdialog2.h"
#include "ui_basicdialog2.h"

BasicDialog2::BasicDialog2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BasicDialog2)
{
    ui->setupUi(this);
}

BasicDialog2::~BasicDialog2()
{
    delete ui;
}

void BasicDialog2::on_pushButton_2_clicked()
{
    close();
}

