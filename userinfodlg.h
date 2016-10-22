#ifndef USERINFODLG_H
#define USERINFODLG_H
#pragma execution_character_set("utf-8")
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QStringList>
#include <QString>
#include <QSqlError>
#include <QDebug>
#include <QSqlTableModel>

namespace Ui {
class UserInfoDlg;
}

class UserInfoDlg : public QDialog
{
    Q_OBJECT

public slots:
    void getUsername_3(QString username);

public:
    explicit UserInfoDlg(QWidget *parent = 0);
    ~UserInfoDlg();

signals:
    void sendUsername_3(QString username);

    void sendModifyColum_3(int i);

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::UserInfoDlg *ui;
    QString username;
    QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // USERINFODLG_H
