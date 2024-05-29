/********************************************************************************
** Form generated from reading UI file 'basicdialog2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICDIALOG2_H
#define UI_BASICDIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicDialog2
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *btExit;

    void setupUi(QDialog *BasicDialog2)
    {
        if (BasicDialog2->objectName().isEmpty())
            BasicDialog2->setObjectName("BasicDialog2");
        BasicDialog2->resize(400, 300);
        horizontalLayoutWidget = new QWidget(BasicDialog2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(120, 190, 254, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        btExit = new QPushButton(horizontalLayoutWidget);
        btExit->setObjectName("btExit");

        horizontalLayout->addWidget(btExit);


        retranslateUi(BasicDialog2);
        QObject::connect(btExit, &QPushButton::clicked, BasicDialog2, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BasicDialog2);
    } // setupUi

    void retranslateUi(QDialog *BasicDialog2)
    {
        BasicDialog2->setWindowTitle(QCoreApplication::translate("BasicDialog2", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BasicDialog2", "\344\270\212\344\270\200\346\255\245", nullptr));
        pushButton_3->setText(QCoreApplication::translate("BasicDialog2", "\344\270\213\344\270\200\346\255\245", nullptr));
        btExit->setText(QCoreApplication::translate("BasicDialog2", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BasicDialog2: public Ui_BasicDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICDIALOG2_H
