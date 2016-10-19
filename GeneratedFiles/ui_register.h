/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *usernamelineEdit;
    QLineEdit *pwdlineEdit;
    QLineEdit *repwdlineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *genderlineEdit;
    QLineEdit *idnumlineEdit;
    QLineEdit *callnumlineEdit;
    QLineEdit *emaillineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(373, 315);
        verticalLayout_4 = new QVBoxLayout(Register);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_9 = new QLabel(Register);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Register);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Register);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Register);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Register);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(Register);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(Register);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(Register);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(Register);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        usernamelineEdit = new QLineEdit(Register);
        usernamelineEdit->setObjectName(QStringLiteral("usernamelineEdit"));

        verticalLayout_2->addWidget(usernamelineEdit);

        pwdlineEdit = new QLineEdit(Register);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(pwdlineEdit);

        repwdlineEdit = new QLineEdit(Register);
        repwdlineEdit->setObjectName(QStringLiteral("repwdlineEdit"));
        repwdlineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(repwdlineEdit);

        namelineEdit = new QLineEdit(Register);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));

        verticalLayout_2->addWidget(namelineEdit);

        genderlineEdit = new QLineEdit(Register);
        genderlineEdit->setObjectName(QStringLiteral("genderlineEdit"));

        verticalLayout_2->addWidget(genderlineEdit);

        idnumlineEdit = new QLineEdit(Register);
        idnumlineEdit->setObjectName(QStringLiteral("idnumlineEdit"));

        verticalLayout_2->addWidget(idnumlineEdit);

        callnumlineEdit = new QLineEdit(Register);
        callnumlineEdit->setObjectName(QStringLiteral("callnumlineEdit"));

        verticalLayout_2->addWidget(callnumlineEdit);

        emaillineEdit = new QLineEdit(Register);
        emaillineEdit->setObjectName(QStringLiteral("emaillineEdit"));

        verticalLayout_2->addWidget(emaillineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setAutoDefault(true);

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        QWidget::setTabOrder(usernamelineEdit, pwdlineEdit);
        QWidget::setTabOrder(pwdlineEdit, repwdlineEdit);
        QWidget::setTabOrder(repwdlineEdit, namelineEdit);
        QWidget::setTabOrder(namelineEdit, genderlineEdit);
        QWidget::setTabOrder(genderlineEdit, idnumlineEdit);
        QWidget::setTabOrder(idnumlineEdit, callnumlineEdit);
        QWidget::setTabOrder(callnumlineEdit, emaillineEdit);
        QWidget::setTabOrder(emaillineEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Register", 0));
        label_9->setText(QApplication::translate("Register", "\347\224\250\346\210\267\346\263\250\345\206\214", 0));
        label->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("Register", "\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        label_4->setText(QApplication::translate("Register", "\345\247\223\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("Register", "\346\200\247\345\210\253\357\274\232", 0));
        label_6->setText(QApplication::translate("Register", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", 0));
        label_7->setText(QApplication::translate("Register", "\346\211\213\346\234\272\345\217\267\357\274\232", 0));
        label_8->setText(QApplication::translate("Register", "\351\202\256\347\256\261(\351\200\211\345\241\253)\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("Register", "\345\217\226\346\266\210", 0));
        pushButton->setText(QApplication::translate("Register", "\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
