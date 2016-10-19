#ifndef STATIONDLG_H
#define STATIONDLG_H
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
class StationDlg;
}

class StationDlg : public QDialog
{
    Q_OBJECT

public:
    explicit StationDlg(QWidget *parent = 0);
    //void setTrainnum(QString s);
    ~StationDlg();

public slots:
	void getTrainnum(QString s);

private:
    Ui::StationDlg *ui;
    QString trainnum;
    QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // STATIONDLG_H
