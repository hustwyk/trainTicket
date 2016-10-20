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

signals:
    void sendTrainnum_2(QString trainnum);

    void sendTrainnum_3(QString trainnum);

    void sendModifyNum(int num);

    void sendStationPassstation(QString station);

public slots:
	void getTrainnum(QString s);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::StationDlg *ui;
    QString trainnum;
    QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // STATIONDLG_H
