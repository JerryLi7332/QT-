#ifndef TUTORIALWIDGET_H
#define TUTORIALWIDGET_H

#include <QWidget>
#include "basicdialog1.h"
#include <QLabel>

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

public:
    QLabel * lb0;
    QLabel * lb1;
    QLabel * lb2;
    QLabel * lb3;
    BasicDialog1* newDialog;

private slots:
    void showDialog();

};

#endif // TUTORIALWIDGET_H
