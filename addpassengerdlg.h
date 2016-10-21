#ifndef ADDPASSENGERDLG_H
#define ADDPASSENGERDLG_H
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
class AddPassengerDlg;
}

class AddPassengerDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AddPassengerDlg(QWidget *parent = 0);
    ~AddPassengerDlg();

public slots:
    void getUsername(QString username);

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddPassengerDlg *ui;
    QString username;
};

#endif // ADDPASSENGERDLG_H
