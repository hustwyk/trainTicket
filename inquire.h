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
#include <QDateEdit>


namespace Ui {
class Inquire;
}

class Inquire : public QDialog
{
    Q_OBJECT

public:
    explicit Inquire(QWidget *parent = 0);
    ~Inquire();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Inquire *ui;
    QString leaveStation;
    QString arrivalStation;
    QDate leavedate;
    int flag;
    QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // INQUIRE_H
