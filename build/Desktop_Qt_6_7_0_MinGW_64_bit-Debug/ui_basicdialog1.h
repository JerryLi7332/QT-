/********************************************************************************
** Form generated from reading UI file 'basicdialog1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICDIALOG1_H
#define UI_BASICDIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_BasicDialog1
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BasicDialog1)
    {
        if (BasicDialog1->objectName().isEmpty())
            BasicDialog1->setObjectName("BasicDialog1");
        BasicDialog1->resize(400, 300);
        buttonBox = new QDialogButtonBox(BasicDialog1);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(20, 220, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(BasicDialog1);

        QMetaObject::connectSlotsByName(BasicDialog1);
    } // setupUi

    void retranslateUi(QDialog *BasicDialog1)
    {
        BasicDialog1->setWindowTitle(QCoreApplication::translate("BasicDialog1", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BasicDialog1: public Ui_BasicDialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICDIALOG1_H
