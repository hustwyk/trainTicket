#ifndef INQUIRE_H
#define INQUIRE_H
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
#include <QDate>
#include <QDateTime>
#include <QTime>
#include <QDateEdit>
#include <QStandardItemModel>


namespace Ui {
class Inquire;
}

class Inquire : public QDialog
{
    Q_OBJECT

public:
    explicit Inquire(QWidget *parent = 0);
    int findTheLeast(QString trainnum, QString databasecolum);
    QString duringTime(QString leavetime, QString arrivaltime);
    int calculatePrice(QString trainnum, QString databasecolum);
    void minusTicketMargin(QString trainnum, QString databasecolum);
    ~Inquire();


public slots:
    void getAccount(QString account);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Inquire *ui;
    QString leaveStation;
    QString arrivalStation;
    QString account;
    QDate leavedate;
    int flag;
    QStandardItemModel *model = new QStandardItemModel();
    //QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // INQUIRE_H
