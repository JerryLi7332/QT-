#ifndef ASSESSMENU_H
#define ASSESSMENU_H

#include <QButtonGroup>
#include <QMainWindow>
#include <QRadioButton>

namespace Ui {
class AssessMenu;
}

class AssessMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit AssessMenu(QWidget *parent = nullptr);
    ~AssessMenu();

private slots:
    //生成报告
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AssessMenu *ui;
    QButtonGroup* pGroup[12];
    QList<QList<QRadioButton*>> pRadioButtonlist;
};

#endif // ASSESSMENU_H
