/********************************************************************************
** Form generated from reading UI file 'assessmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSESSMENU_H
#define UI_ASSESSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssessMenu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AssessMenu)
    {
        if (AssessMenu->objectName().isEmpty())
            AssessMenu->setObjectName("AssessMenu");
        AssessMenu->resize(800, 600);
        centralwidget = new QWidget(AssessMenu);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 601, 81));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        AssessMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AssessMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AssessMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(AssessMenu);
        statusbar->setObjectName("statusbar");
        AssessMenu->setStatusBar(statusbar);

        retranslateUi(AssessMenu);

        QMetaObject::connectSlotsByName(AssessMenu);
    } // setupUi

    void retranslateUi(QMainWindow *AssessMenu)
    {
        AssessMenu->setWindowTitle(QCoreApplication::translate("AssessMenu", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AssessMenu", "\346\254\242\350\277\216\346\235\245\345\210\260\346\265\213\350\257\204\346\250\241\345\235\227\357\274\201\346\210\221\344\273\254\345\215\263\345\260\206\346\240\271\346\215\256\346\202\250\345\210\232\346\211\215\347\232\204\346\265\217\350\247\210\357\274\214\347\224\237\346\210\220\346\265\213\350\257\204\346\212\245\345\221\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssessMenu: public Ui_AssessMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSESSMENU_H
