/********************************************************************************
** Form generated from reading UI file 'admindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDLG_H
#define UI_ADMINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDlg
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_10;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *trainlineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *usernamelineEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_11;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *usernamelineEdit_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_7;
    QTableView *tableView_3;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_12;

    void setupUi(QDialog *AdminDlg)
    {
        if (AdminDlg->objectName().isEmpty())
            AdminDlg->setObjectName(QStringLiteral("AdminDlg"));
        AdminDlg->resize(1215, 544);
        gridLayout_4 = new QGridLayout(AdminDlg);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label = new QLabel(AdminDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label);

        tabWidget = new QTabWidget(AdminDlg);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        trainlineEdit = new QLineEdit(tab);
        trainlineEdit->setObjectName(QStringLiteral("trainlineEdit"));

        gridLayout->addWidget(trainlineEdit, 0, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMouseTracking(false);
        pushButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        usernamelineEdit = new QLineEdit(tab_2);
        usernamelineEdit->setObjectName(QStringLiteral("usernamelineEdit"));

        gridLayout_2->addWidget(usernamelineEdit, 0, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_4->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_4->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(tab_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_4->addWidget(pushButton_9);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        horizontalLayout_3->addWidget(tableView_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_3->addWidget(pushButton_11);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_9 = new QVBoxLayout(tab_3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        usernamelineEdit_2 = new QLineEdit(tab_3);
        usernamelineEdit_2->setObjectName(QStringLiteral("usernamelineEdit_2"));

        gridLayout_3->addWidget(usernamelineEdit_2, 0, 1, 1, 1);


        horizontalLayout_9->addLayout(gridLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout_8->addWidget(pushButton_10);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));

        horizontalLayout_7->addWidget(tableView_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        verticalLayout_7->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(tab_3);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        verticalLayout_7->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(tab_3);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        verticalLayout_7->addWidget(pushButton_15);


        horizontalLayout_7->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_9->addLayout(verticalLayout_8);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_10->addWidget(tabWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        pushButton_12 = new QPushButton(AdminDlg);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_10->addWidget(pushButton_12);


        verticalLayout_10->addLayout(horizontalLayout_10);


        gridLayout_4->addLayout(verticalLayout_10, 0, 0, 1, 1);


        retranslateUi(AdminDlg);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminDlg);
    } // setupUi

    void retranslateUi(QDialog *AdminDlg)
    {
        AdminDlg->setWindowTitle(QApplication::translate("AdminDlg", "Admin", 0));
        label->setText(QApplication::translate("AdminDlg", "\347\256\241\347\220\206\345\221\230\345\220\216\345\217\260", 0));
        label_2->setText(QApplication::translate("AdminDlg", "\350\275\246\346\254\241\357\274\232", 0));
        pushButton->setText(QApplication::translate("AdminDlg", "\346\237\245\346\211\276", 0));
        pushButton_5->setText(QApplication::translate("AdminDlg", "\346\267\273\345\212\240\350\275\246\346\254\241", 0));
        pushButton_6->setText(QApplication::translate("AdminDlg", "\345\210\240\351\231\244\350\275\246\346\254\241", 0));
        pushButton_2->setText(QApplication::translate("AdminDlg", "\346\267\273\345\212\240\350\275\246\347\253\231", 0));
        pushButton_4->setText(QApplication::translate("AdminDlg", "\344\277\256\346\224\271\350\275\246\347\253\231", 0));
        pushButton_3->setText(QApplication::translate("AdminDlg", "\345\210\240\351\231\244\350\275\246\347\253\231", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminDlg", "\350\275\246\346\254\241\347\256\241\347\220\206", 0));
        label_3->setText(QApplication::translate("AdminDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        pushButton_7->setText(QApplication::translate("AdminDlg", "\346\237\245\346\211\276", 0));
        pushButton_8->setText(QApplication::translate("AdminDlg", "\345\210\233\345\273\272\347\224\250\346\210\267", 0));
        pushButton_9->setText(QApplication::translate("AdminDlg", "\345\210\240\351\231\244\347\224\250\346\210\267", 0));
        pushButton_11->setText(QApplication::translate("AdminDlg", "\344\277\256\346\224\271\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminDlg", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        label_4->setText(QApplication::translate("AdminDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        pushButton_10->setText(QApplication::translate("AdminDlg", "\346\237\245\346\211\276", 0));
        pushButton_13->setText(QApplication::translate("AdminDlg", "\346\267\273\345\212\240\350\256\242\345\215\225", 0));
        pushButton_14->setText(QApplication::translate("AdminDlg", "\344\277\256\346\224\271\350\256\242\345\215\225", 0));
        pushButton_15->setText(QApplication::translate("AdminDlg", "\345\210\240\351\231\244\350\256\242\345\215\225", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminDlg", "\350\256\242\345\215\225\347\256\241\347\220\206", 0));
        pushButton_12->setText(QApplication::translate("AdminDlg", " \351\200\200\345\207\272\345\275\223\345\211\215\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminDlg: public Ui_AdminDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDLG_H
