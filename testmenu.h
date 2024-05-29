#ifndef TESTMENU_H
#define TESTMENU_H

#include <QMainWindow>

namespace Ui {
class TestMenu;
}

class TestMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestMenu(QWidget *parent = nullptr);
    ~TestMenu();

private:
    Ui::TestMenu *ui;
};

#endif // TESTMENU_H
