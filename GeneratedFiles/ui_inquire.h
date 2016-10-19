/********************************************************************************
** Form generated from reading UI file 'inquire.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIRE_H
#define UI_INQUIRE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Inquire
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *leavelineEdit;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *arrivallineEdit;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Inquire)
    {
        if (Inquire->objectName().isEmpty())
            Inquire->setObjectName(QStringLiteral("Inquire"));
        Inquire->resize(692, 403);
        gridLayout_4 = new QGridLayout(Inquire);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Inquire);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(Inquire);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        leavelineEdit = new QLineEdit(Inquire);
        leavelineEdit->setObjectName(QStringLiteral("leavelineEdit"));

        gridLayout->addWidget(leavelineEdit, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(Inquire);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        arrivallineEdit = new QLineEdit(Inquire);
        arrivallineEdit->setObjectName(QStringLiteral("arrivallineEdit"));

        gridLayout_2->addWidget(arrivallineEdit, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(Inquire);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        dateEdit = new QDateEdit(Inquire);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setDate(QDate(2016, 10, 1));

        gridLayout_3->addWidget(dateEdit, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(Inquire);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(Inquire);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setShowGrid(true);

        verticalLayout->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(Inquire);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Inquire);

        QMetaObject::connectSlotsByName(Inquire);
    } // setupUi

    void retranslateUi(QDialog *Inquire)
    {
        Inquire->setWindowTitle(QApplication::translate("Inquire", "Inquire", 0));
        label->setText(QApplication::translate("Inquire", "\350\275\246\347\245\250\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("Inquire", "\345\207\272\345\217\221\345\234\260\357\274\232", 0));
        label_3->setText(QApplication::translate("Inquire", "\347\233\256\347\232\204\345\234\260\357\274\232", 0));
        label_4->setText(QApplication::translate("Inquire", "\345\207\272\345\217\221\346\227\245\357\274\232", 0));
        pushButton->setText(QApplication::translate("Inquire", "\346\237\245\350\257\242", 0));
        pushButton_2->setText(QApplication::translate("Inquire", "\351\200\200\345\207\272\345\275\223\345\211\215\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class Inquire: public Ui_Inquire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIRE_H
