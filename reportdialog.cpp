#include "reportdialog.h"
#include "ui_reportdialog.h"
#include <QFont>

ReportDialog::ReportDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportDialog)
{
    setFixedSize(500,200);
    ui->setupUi(this);
}

ReportDialog::~ReportDialog()
{
    delete ui;
}

void ReportDialog::setReportText(const QString &text)
{
    ui->label->setText(text);
    QFont font("Arial",15);
    ui->label->setFont(font);
}
