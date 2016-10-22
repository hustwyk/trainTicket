/********************************************************************************
** Form generated from reading UI file 'userticketdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERTICKETDLG_H
#define UI_USERTICKETDLG_H

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

class Ui_UserTicketDlg
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *UserTicketDlg)
    {
        if (UserTicketDlg->objectName().isEmpty())
            UserTicketDlg->setObjectName(QStringLiteral("UserTicketDlg"));
        UserTicketDlg->resize(1196, 273);
        gridLayout_2 = new QGridLayout(UserTicketDlg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(UserTicketDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(UserTicketDlg);

        QMetaObject::connectSlotsByName(UserTicketDlg);
    } // setupUi

    void retranslateUi(QDialog *UserTicketDlg)
    {
        UserTicketDlg->setWindowTitle(QApplication::translate("UserTicketDlg", "UserTicket", 0));
        groupBox->setTitle(QApplication::translate("UserTicketDlg", "GroupBox", 0));
        pushButton->setText(QApplication::translate("UserTicketDlg", "\345\217\226\346\266\210\350\256\242\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class UserTicketDlg: public Ui_UserTicketDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERTICKETDLG_H
