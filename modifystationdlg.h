#ifndef MODIFYSTATIONDLG_H
#define MODIFYSTATIONDLG_H
#pragma execution_character_set("utf-8")
#include <QDialog>
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
class ModifyStationDlg;
}

class ModifyStationDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyStationDlg(QWidget *parent = 0);
    QString trans(int i);
    ~ModifyStationDlg();

public slots:
    void getModifyNum(int i);

    void getStationTrainnum(QString s);

    void getStationPassstation(QString s);


private slots:
    void on_pushButton_clicked();

private:
    Ui::ModifyStationDlg *ui;
    int modifynum;
    QString trainnum;
    QString passstation;
    QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // MODIFYSTATIONDLG_H
