#include "assessmenu.h"
#include "ui_assessmenu.h"
#include "reportdialog.h"
#include <QDebug>

AssessMenu::AssessMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AssessMenu)
{
    ui->setupUi(this);

    for(int i=0;i<12;i++)
    {
        pGroup[i]=new QButtonGroup(this);
    }

    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton << ui->radioButton_2);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_3 << ui->radioButton_4);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_5 << ui->radioButton_6);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_7 << ui->radioButton_8);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_9 << ui->radioButton_10);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_11 << ui->radioButton_12);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_13 << ui->radioButton_14);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_15 << ui->radioButton_16);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_17 << ui->radioButton_18);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_19 << ui->radioButton_20);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_21 << ui->radioButton_22);
    pRadioButtonlist.append(QList<QRadioButton*>() << ui->radioButton_23 << ui->radioButton_24);

    for (int i = 0;i<12;i++)
    {
        pGroup[i]->addButton(pRadioButtonlist.at(i).at(0));
        pGroup[i]->addButton(pRadioButtonlist.at(i).at(1));
    }
}

AssessMenu::~AssessMenu()
{
    delete ui;
}

void AssessMenu::on_pushButton_clicked()
{
    //计算每一类多少分
    QList<int> pSumList;
    pSumList << 0 << 0 << 0 << 0;
    for (int i = 0;i<4;i++)
    {
        if(pRadioButtonlist.at(i*3).at(0)->isChecked())
            pSumList[i]+=0;
        if(pRadioButtonlist.at(i*3).at(1)->isChecked())
            pSumList[i]+=2;
        if(pRadioButtonlist.at(i*3+1).at(0)->isChecked())
            pSumList[i]+=2;
        if(pRadioButtonlist.at(i*3+1).at(1)->isChecked())
            pSumList[i]+=0;
        if(pRadioButtonlist.at(i*3+2).at(0)->isChecked())
            pSumList[i]+=2;
        if(pRadioButtonlist.at(i*3+2).at(1)->isChecked())
            pSumList[i]+=0;
    }
    // 初始假设第一个元素是最大值
    int maxValue = pSumList.at(0);

    // 找到所有的最大值
    QList<int> maxValues;
    maxValues << 0;

    for (int i = 1; i < pSumList.size(); ++i) {
        int current = pSumList.at(i);
        if (current > maxValue) {
            maxValue = current;
            maxValues.clear(); // 清除之前的最大值，因为找到了更新的更大的值
            maxValues << i;
        } else if (current == maxValue) {
            maxValues << i; // 如果当前值等于最大值，添加到 maxValues 中
        }
    }

    // 输出所有的最大值
    QStringList _list;
    for (int value : maxValues) {
        if(value == 0)
            _list.append(QStringLiteral("古典"));
        else if(value == 1)
            _list.append(QStringLiteral("爵士"));
        else if(value == 2)
            _list.append(QStringLiteral("摇滚"));
        else if(value == 3)
            _list.append(QStringLiteral("流行"));
    }
    QString str = QStringLiteral("综上，\n您对%1类音乐比较感兴趣，\n推荐您可以多欣赏了解此类音乐!").arg(_list.join(','));
    ReportDialog dialog;
    dialog.setReportText(str);
    dialog.exec();
}

void AssessMenu::on_pushButton_2_clicked()
{
    close();
}

