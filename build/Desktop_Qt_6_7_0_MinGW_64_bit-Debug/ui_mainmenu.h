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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QLabel *main_title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btTutorial;
    QPushButton *btTest;
    QPushButton *btAssess;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(800, 600);
        QFont font;
        font.setWeight(QFont::Light);
        MainMenu->setFont(font);
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName("centralwidget");
        main_title = new QLabel(centralwidget);
        main_title->setObjectName("main_title");
        main_title->setGeometry(QRect(240, 80, 281, 71));
        QFont font1;
        font1.setPointSize(20);
        font1.setWeight(QFont::ExtraBold);
        font1.setItalic(false);
        main_title->setFont(font1);
        main_title->setTextFormat(Qt::AutoText);
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

        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName("statusbar");
        MainMenu->setStatusBar(statusbar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainMenu", nullptr));
        main_title->setText(QCoreApplication::translate("MainMenu", "\344\270\200\344\270\252\345\205\263\344\272\216\351\237\263\344\271\220\347\232\204\350\275\257\344\273\266", nullptr));
        btTutorial->setText(QCoreApplication::translate("MainMenu", "\346\225\231\347\250\213", nullptr));
        btTest->setText(QCoreApplication::translate("MainMenu", "\346\265\213\350\257\225", nullptr));
        btAssess->setText(QCoreApplication::translate("MainMenu", "\346\265\213\350\257\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
