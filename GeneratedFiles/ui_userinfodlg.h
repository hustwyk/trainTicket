/********************************************************************************
** Form generated from reading UI file 'userinfodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFODLG_H
#define UI_USERINFODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserInfoDlg
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *UserInfoDlg)
    {
        if (UserInfoDlg->objectName().isEmpty())
            UserInfoDlg->setObjectName(QStringLiteral("UserInfoDlg"));
        UserInfoDlg->resize(1044, 182);
        gridLayout_2 = new QGridLayout(UserInfoDlg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(UserInfoDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(UserInfoDlg);

        QMetaObject::connectSlotsByName(UserInfoDlg);
    } // setupUi

    void retranslateUi(QDialog *UserInfoDlg)
    {
        UserInfoDlg->setWindowTitle(QApplication::translate("UserInfoDlg", "UserInfo", 0));
        groupBox->setTitle(QApplication::translate("UserInfoDlg", "GroupBox", 0));
        pushButton->setText(QApplication::translate("UserInfoDlg", "\344\277\241\346\201\257\344\277\256\346\224\271", 0));
        pushButton_2->setText(QApplication::translate("UserInfoDlg", "\350\256\242\347\245\250\350\256\260\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class UserInfoDlg: public Ui_UserInfoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFODLG_H
