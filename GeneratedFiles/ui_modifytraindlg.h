/********************************************************************************
** Form generated from reading UI file 'modifytraindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYTRAINDLG_H
#define UI_MODIFYTRAINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyTrainDlg
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *ModifyTrainDlg)
    {
        if (ModifyTrainDlg->objectName().isEmpty())
            ModifyTrainDlg->setObjectName(QStringLiteral("ModifyTrainDlg"));
        ModifyTrainDlg->resize(376, 105);
        gridLayout_2 = new QGridLayout(ModifyTrainDlg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(ModifyTrainDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(ModifyTrainDlg);

        QMetaObject::connectSlotsByName(ModifyTrainDlg);
    } // setupUi

    void retranslateUi(QDialog *ModifyTrainDlg)
    {
        ModifyTrainDlg->setWindowTitle(QApplication::translate("ModifyTrainDlg", "ModifyTrain", 0));
        groupBox->setTitle(QApplication::translate("ModifyTrainDlg", "GroupBox", 0));
        label->setText(QApplication::translate("ModifyTrainDlg", "\350\257\267\350\276\223\345\205\245\344\277\256\346\224\271\345\200\274\357\274\232", 0));
        pushButton->setText(QApplication::translate("ModifyTrainDlg", "\346\217\220\344\272\244", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyTrainDlg: public Ui_ModifyTrainDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYTRAINDLG_H
