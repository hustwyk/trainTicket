/********************************************************************************
** Form generated from reading UI file 'addpassengerdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPASSENGERDLG_H
#define UI_ADDPASSENGERDLG_H

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

class Ui_AddPassengerDlg
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *pwdlineEdit;
    QLineEdit *repwdlineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *genderlineEdit;
    QLineEdit *idnumlineEdit;
    QLineEdit *callnumlineEdit;
    QLineEdit *emaillineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *AddPassengerDlg)
    {
        if (AddPassengerDlg->objectName().isEmpty())
            AddPassengerDlg->setObjectName(QStringLiteral("AddPassengerDlg"));
        AddPassengerDlg->resize(312, 283);
        gridLayout_2 = new QGridLayout(AddPassengerDlg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_9 = new QLabel(AddPassengerDlg);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_9);

        groupBox = new QGroupBox(AddPassengerDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pwdlineEdit = new QLineEdit(groupBox);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(pwdlineEdit);

        repwdlineEdit = new QLineEdit(groupBox);
        repwdlineEdit->setObjectName(QStringLiteral("repwdlineEdit"));
        repwdlineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(repwdlineEdit);

        namelineEdit = new QLineEdit(groupBox);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));

        verticalLayout_2->addWidget(namelineEdit);

        genderlineEdit = new QLineEdit(groupBox);
        genderlineEdit->setObjectName(QStringLiteral("genderlineEdit"));

        verticalLayout_2->addWidget(genderlineEdit);

        idnumlineEdit = new QLineEdit(groupBox);
        idnumlineEdit->setObjectName(QStringLiteral("idnumlineEdit"));

        verticalLayout_2->addWidget(idnumlineEdit);

        callnumlineEdit = new QLineEdit(groupBox);
        callnumlineEdit->setObjectName(QStringLiteral("callnumlineEdit"));

        verticalLayout_2->addWidget(callnumlineEdit);

        emaillineEdit = new QLineEdit(groupBox);
        emaillineEdit->setObjectName(QStringLiteral("emaillineEdit"));

        verticalLayout_2->addWidget(emaillineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(AddPassengerDlg);

        QMetaObject::connectSlotsByName(AddPassengerDlg);
    } // setupUi

    void retranslateUi(QDialog *AddPassengerDlg)
    {
        AddPassengerDlg->setWindowTitle(QApplication::translate("AddPassengerDlg", "Dialog", 0));
        label_9->setText(QApplication::translate("AddPassengerDlg", "\346\267\273\345\212\240\347\224\250\346\210\267", 0));
        groupBox->setTitle(QApplication::translate("AddPassengerDlg", "GroupBox", 0));
        label_2->setText(QApplication::translate("AddPassengerDlg", "\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("AddPassengerDlg", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        label_4->setText(QApplication::translate("AddPassengerDlg", "\345\247\223\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("AddPassengerDlg", "\346\200\247\345\210\253\357\274\232", 0));
        label_6->setText(QApplication::translate("AddPassengerDlg", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", 0));
        label_7->setText(QApplication::translate("AddPassengerDlg", "\346\211\213\346\234\272\345\217\267\357\274\232", 0));
        label_8->setText(QApplication::translate("AddPassengerDlg", "\351\202\256\347\256\261(\351\200\211\345\241\253)\357\274\232", 0));
        pushButton->setText(QApplication::translate("AddPassengerDlg", "\346\267\273\345\212\240", 0));
    } // retranslateUi

};

namespace Ui {
    class AddPassengerDlg: public Ui_AddPassengerDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPASSENGERDLG_H
