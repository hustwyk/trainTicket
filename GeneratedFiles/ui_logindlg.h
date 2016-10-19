/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *usernamelineEdit;
    QLineEdit *pswlineEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->setEnabled(true);
        LoginDlg->resize(253, 154);
        gridLayout = new QGridLayout(LoginDlg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(LoginDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(LoginDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(LoginDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        usernamelineEdit = new QLineEdit(LoginDlg);
        usernamelineEdit->setObjectName(QStringLiteral("usernamelineEdit"));

        verticalLayout_3->addWidget(usernamelineEdit);

        pswlineEdit = new QLineEdit(LoginDlg);
        pswlineEdit->setObjectName(QStringLiteral("pswlineEdit"));
        pswlineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(pswlineEdit);


        horizontalLayout_5->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton = new QPushButton(LoginDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(true);

        horizontalLayout_6->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(LoginDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setMouseTracking(false);
        pushButton_2->setAutoDefault(true);
        pushButton_2->setFlat(false);

        horizontalLayout_6->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        QWidget::setTabOrder(usernamelineEdit, pswlineEdit);
        QWidget::setTabOrder(pswlineEdit, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QWidget *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "Login", 0));
        label->setText(QApplication::translate("LoginDlg", "\347\201\253\350\275\246\347\245\250\350\256\242\347\245\250\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("LoginDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("LoginDlg", "\345\257\206\347\240\201\357\274\232", 0));
        pushButton->setText(QApplication::translate("LoginDlg", "\347\224\250\346\210\267\346\263\250\345\206\214", 0));
        pushButton_2->setText(QApplication::translate("LoginDlg", "\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
