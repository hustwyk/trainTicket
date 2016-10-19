#ifndef LOGINDLG_H
#define LOGINDLG_H
#pragma execution_character_set("utf-8")
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QStringList>
#include <QString>
#include <QSqlError>
#include <QDebug>
#include <QSqlTableModel>
#include <QDate>
#include <QDateEdit>

namespace Ui {
class LoginDlg;
}

class LoginDlg : public QWidget
{
    Q_OBJECT

public:
    explicit LoginDlg(QWidget *parent = 0);
    ~LoginDlg();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::LoginDlg *ui;
    int flag;
};

#endif // LOGINDLG_H

