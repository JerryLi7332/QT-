#ifndef TEST2_H
#define TEST2_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QFont>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QDebug>

#define W 1100
#define H 733

class test2 : public QWidget
{
    Q_OBJECT
public:
    explicit test2(QWidget *parent = nullptr);
private:
    QStackedWidget* mainPage;
    QWidget* intro;
    QWidget* q1;
    QWidget* q2;
    QWidget* q3;
    QMediaPlayer* myPlayer;
signals:
};

#endif // TEST2_H
