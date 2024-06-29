/********************************************************************************
** Form generated from reading UI file 'tutorialwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIALWIDGET_H
#define UI_TUTORIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TutorialWidget
{
public:

    void setupUi(QWidget *TutorialWidget)
    {
        if (TutorialWidget->objectName().isEmpty())
            TutorialWidget->setObjectName("TutorialWidget");
        TutorialWidget->resize(400, 300);

        retranslateUi(TutorialWidget);

        QMetaObject::connectSlotsByName(TutorialWidget);
    } // setupUi

    void retranslateUi(QWidget *TutorialWidget)
    {
        TutorialWidget->setWindowTitle(QCoreApplication::translate("TutorialWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TutorialWidget: public Ui_TutorialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIALWIDGET_H
