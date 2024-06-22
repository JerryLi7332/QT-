#ifndef BASICDIALOG1_H
#define BASICDIALOG1_H

#include <QDialog>

namespace Ui {
class BasicDialog1;
}

class BasicDialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit BasicDialog1(QWidget *parent = nullptr);
    ~BasicDialog1();


private:
    Ui::BasicDialog1 *ui;
};

#endif // BASICDIALOG1_H
