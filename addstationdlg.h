#ifndef ADDSTATIONDLG_H
#define ADDSTATIONDLG_H
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
class AddStationDlg;
}

class AddStationDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AddStationDlg(QWidget *parent = 0);
    ~AddStationDlg();

public slots:
    void getTrainnum_2(QString s);

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddStationDlg *ui;
    QString trainnum;
    QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // ADDSTATIONDLG_H
