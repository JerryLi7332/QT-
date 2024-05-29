/********************************************************************************
** Form generated from reading UI file 'testmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTMENU_H
#define UI_TESTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestMenu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestMenu)
    {
        if (TestMenu->objectName().isEmpty())
            TestMenu->setObjectName("TestMenu");
        TestMenu->resize(800, 600);
        centralwidget = new QWidget(TestMenu);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 60, 281, 91));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 160, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 210, 80, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 260, 80, 24));
        TestMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TestMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(TestMenu);
        statusbar->setObjectName("statusbar");
        TestMenu->setStatusBar(statusbar);

        retranslateUi(TestMenu);

        QMetaObject::connectSlotsByName(TestMenu);
    } // setupUi

    void retranslateUi(QMainWindow *TestMenu)
    {
        TestMenu->setWindowTitle(QCoreApplication::translate("TestMenu", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("TestMenu", "\346\254\242\350\277\216\346\235\245\345\210\260\346\265\213\350\257\225\347\211\210\345\235\227\357\274\201\350\257\267\351\200\211\346\213\251\351\242\230\345\236\213", nullptr));
        pushButton->setText(QCoreApplication::translate("TestMenu", "\345\210\244\346\226\255", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TestMenu", "\345\215\225\351\200\211", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TestMenu", "\345\244\232\351\200\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestMenu: public Ui_TestMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMENU_H
