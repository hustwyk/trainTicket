/********************************************************************************
** Form generated from reading UI file 'bookdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKDLG_H
#define UI_BOOKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BookDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *BookDlg)
    {
        if (BookDlg->objectName().isEmpty())
            BookDlg->setObjectName(QStringLiteral("BookDlg"));
        BookDlg->resize(523, 300);
        verticalLayout_2 = new QVBoxLayout(BookDlg);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(BookDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(BookDlg);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(BookDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(BookDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(BookDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(BookDlg);

        QMetaObject::connectSlotsByName(BookDlg);
    } // setupUi

    void retranslateUi(QDialog *BookDlg)
    {
        BookDlg->setWindowTitle(QApplication::translate("BookDlg", "Book", 0));
        label->setText(QApplication::translate("BookDlg", "\350\256\242\345\215\225", 0));
        label_2->setText(QApplication::translate("BookDlg", "*\350\257\267\346\243\200\346\237\245\344\277\241\346\201\257\346\230\257\345\220\246\346\227\240\350\257\257\357\274\214\350\213\245\346\262\241\346\234\211\351\227\256\351\242\230\350\257\267\347\202\271\345\207\273\347\241\256\350\256\244", 0));
        pushButton->setText(QApplication::translate("BookDlg", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("BookDlg", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class BookDlg: public Ui_BookDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDLG_H
