#ifndef USERTICKETDLG_H
#define USERTICKETDLG_H
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
class UserTicketDlg;
}

class UserTicketDlg : public QDialog
{
    Q_OBJECT

public:
    explicit UserTicketDlg(QWidget *parent = 0);
    QString transToType(QString type);
    void addTicketMargin(QString trainnum, QString leaveStation, QString arrivalStation, QString databasecolum);
    ~UserTicketDlg();

public slots:
    void getUsername(QString username);

private slots:
    void on_pushButton_clicked();

private:
    Ui::UserTicketDlg *ui;
    QString username;
    QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // USERTICKETDLG_H
