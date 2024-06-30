#ifndef TESTMENU_H
#define TESTMENU_H

#include <QMainWindow>
#include <QWidget>
#include <QPixmap>
#include <QPushButton>
#include "test1.h"
#include "test2.h"

namespace Ui {
class TestMenu;
}

class TestMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestMenu(QWidget *parent = nullptr);
    ~TestMenu();
    void addScore(int );
    void on_t1_clicked();
    void on_t2_clicked();


private:
    Ui::TestMenu *ui;
    test1* t1;
    test2* t2;
    int score=0;
};

#endif // TESTMENU_H
