#ifndef TUTORIALWIDGET_H
#define TUTORIALWIDGET_H

#include <QWidget>
#include "basicdialog1.h"
#include"musicwidget.h"
#include <QLabel>
#include <QMediaPlayer>

namespace Ui {
class TutorialWidget;
}

class TutorialWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TutorialWidget(QWidget *parent = nullptr);
    ~TutorialWidget();

private:
    Ui::TutorialWidget *ui;
    //QMediaPlayer* MediaPlayer;

public:
    QLabel * lb0;
    QLabel * lb1;
    QLabel * lb2;
    QLabel * lb3;
    MusicWidget* music_widget;
    //BasicDialog1* newDialog;


private slots:
    //void showDialog();
    //void showMusicWidget();

};

#endif // TUTORIALWIDGET_H
