#ifndef ASSESSMENU_H
#define ASSESSMENU_H

#include <QMainWindow>

namespace Ui {
class AssessMenu;
}

class AssessMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit AssessMenu(QWidget *parent = nullptr);
    ~AssessMenu();

private:
    Ui::AssessMenu *ui;
};

#endif // ASSESSMENU_H
