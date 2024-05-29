/********************************************************************************
** Form generated from reading UI file 'tutorialmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIALMENU_H
#define UI_TUTORIALMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TutorialMenu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TutorialMenu)
    {
        if (TutorialMenu->objectName().isEmpty())
            TutorialMenu->setObjectName("TutorialMenu");
        TutorialMenu->resize(800, 600);
        centralwidget = new QWidget(TutorialMenu);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 431, 71));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 140, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 190, 80, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(70, 240, 80, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(70, 290, 80, 24));
        TutorialMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TutorialMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TutorialMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(TutorialMenu);
        statusbar->setObjectName("statusbar");
        TutorialMenu->setStatusBar(statusbar);

        retranslateUi(TutorialMenu);

        QMetaObject::connectSlotsByName(TutorialMenu);
    } // setupUi

    void retranslateUi(QMainWindow *TutorialMenu)
    {
        TutorialMenu->setWindowTitle(QCoreApplication::translate("TutorialMenu", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("TutorialMenu", "\346\254\242\350\277\216\346\235\245\345\210\260\346\225\231\347\250\213\357\274\214\344\273\245\344\270\213\346\234\211\345\207\240\347\247\215\351\237\263\344\271\220\347\261\273\345\236\213\344\276\233\346\202\250\351\200\211\346\213\251", nullptr));
        pushButton->setText(QCoreApplication::translate("TutorialMenu", "\345\217\244\345\205\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TutorialMenu", "\347\210\265\345\243\253", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TutorialMenu", "\346\221\207\346\273\232", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TutorialMenu", "\346\265\201\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TutorialMenu: public Ui_TutorialMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIALMENU_H
