/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QAction *actionsomething;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btTutorial;
    QPushButton *btTest;
    QPushButton *btAssess;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(800, 600);
        QFont font;
        font.setWeight(QFont::Light);
        MainMenu->setFont(font);
        actionsomething = new QAction(MainMenu);
        actionsomething->setObjectName("actionsomething");
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(220, 150, 281, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btTutorial = new QPushButton(verticalLayoutWidget);
        btTutorial->setObjectName("btTutorial");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btTutorial->sizePolicy().hasHeightForWidth());
        btTutorial->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btTutorial);

        btTest = new QPushButton(verticalLayoutWidget);
        btTest->setObjectName("btTest");
        sizePolicy.setHeightForWidth(btTest->sizePolicy().hasHeightForWidth());
        btTest->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btTest);

        btAssess = new QPushButton(verticalLayoutWidget);
        btAssess->setObjectName("btAssess");
        btAssess->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btAssess->sizePolicy().hasHeightForWidth());
        btAssess->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btAssess);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 90, 511, 31));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label->setFont(font1);
        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName("statusbar");
        MainMenu->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionsomething);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainMenu", nullptr));
        actionsomething->setText(QCoreApplication::translate("MainMenu", "someAction", nullptr));
        btTutorial->setText(QCoreApplication::translate("MainMenu", "\346\225\231\347\250\213", nullptr));
        btTest->setText(QCoreApplication::translate("MainMenu", "\346\265\213\350\257\225", nullptr));
        btAssess->setText(QCoreApplication::translate("MainMenu", "\346\265\213\350\257\204", nullptr));
        label->setText(QCoreApplication::translate("MainMenu", "\344\270\200\344\270\252\345\205\263\344\272\216\351\237\263\344\271\220\347\232\204\350\275\257\344\273\266", nullptr));
        menu->setTitle(QCoreApplication::translate("MainMenu", "\350\277\231\351\207\214\345\217\257\344\273\245\345\206\231\344\270\234\350\245\277", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainMenu", "\350\277\231\351\207\214\344\271\237\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
