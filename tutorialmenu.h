#ifndef TUTORIALMENU_H
#define TUTORIALMENU_H

#include <QMainWindow>

namespace Ui {
class TutorialMenu;
}

class TutorialMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit TutorialMenu(QWidget *parent = nullptr);
    ~TutorialMenu();

private:
    Ui::TutorialMenu *ui;
};

#endif // TUTORIALMENU_H
