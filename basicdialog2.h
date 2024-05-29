#ifndef BASICDIALOG2_H
#define BASICDIALOG2_H

#include <QDialog>

namespace Ui {
class BasicDialog2;
}

class BasicDialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit BasicDialog2(QWidget *parent = nullptr);
    ~BasicDialog2();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::BasicDialog2 *ui;
};

#endif // BASICDIALOG2_H
