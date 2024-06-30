#ifndef TEST1_H
#define TEST1_H

#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QFont>
#include <QStackedWidget>
#include <QDebug>

#define W 1100
#define H 733

namespace Ui {
class test1;
}

class test1 : public QWidget
{
    Q_OBJECT

public:
    explicit test1(QWidget *parent = nullptr);
    ~test1();
    void chooseOver();
    void on_q1b1_clicked();
    void on_q1b2_clicked();
    void on_q1b3_clicked();
    void initAns(QWidget* w);
    void Q1toQ2();
    void Q2toQ3();
    void showQ2();
    void on_q2b1_clicked();
    void on_q2b2_clicked();
    void on_q2b3_clicked();
    void on_q3b1_clicked();
    void on_q3b2_clicked();
    void on_q3b3_clicked();
    void Q3toQ4();
    void on_nextQ1_clicked();
    void on_q4b1_clicked();
    void on_q4b2_clicked();
    void on_q4b3_clicked();
    void Q4toQ5();
    void on_q5b1_clicked();
    void on_q5b2_clicked();
    void on_q5b3_clicked();
    void Q5back();
    void Q5over();
signals:
    void sendResult(int );
    void t1Over();
private:
    Ui::test1 *ui;
    QStackedWidget* mainPage;
    int score=0;
    QWidget* q1;
    QWidget* q2;
    QWidget* q3;
    QWidget* q4;
    QWidget* q5;
    QWidget* zongjie;
    QLabel* res;
    QPushButton* nextQ1;
    QPushButton* nextQ2;
    QPushButton* nextQ3;
    QPushButton* nextQ4;
    QPushButton* nextQ5;
    QPushButton* back;
    bool q1_clicked=false;
    bool q2_clicked=false;
    bool q3_clicked=false;
    bool q4_clicked=false;
    bool q5_clicked=false;
};

#endif // TEST1_H
