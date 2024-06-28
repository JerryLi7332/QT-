#ifndef TUTORIALMENU_H
#define TUTORIALMENU_H

#include <QMainWindow>
#include "tutorialWidget.h"

namespace Ui {
class TutorialMenu;
}

class TutorialMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit TutorialMenu(QWidget *parent = nullptr);
    ~TutorialMenu();



private slots:
    void on_btClassic_clicked();

    void on_btJazz_clicked();

    void on_btRock_clicked();

    void on_btPop_clicked();

private:
    Ui::TutorialMenu *ui;

    //TutorialWidget* classic;
    TutorialWidget* jazz;
    TutorialWidget* rock;
    TutorialWidget* rock__1;
    TutorialWidget* pop;
};

#endif // TUTORIALMENU_H
