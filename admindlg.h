#ifndef ADMINDLG_H
#define ADMINDLG_H
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
class AdminDlg;
}

class AdminDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDlg(QWidget *parent = 0);
    QString transToType(QString type);
    void addTicketMargin(QString trainnum, QString leaveStation, QString arrivalStation, QString databasecolum);
    ~AdminDlg();

private slots:
    void on_pushButton_12_clicked();

    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_2_clicked();

signals:
	void sendTrainnum(QString trainnum);

    void sendTrainnum_2(QString trainnum);

    void sendUsername(QString username);

    void sendModifyColum(int i);

    void sendUsername_2(QString username);

    void sendModifyColum_2(int i);

    void sendTrainnum_3(QString trainnum);

private:
    Ui::AdminDlg *ui;
    QString trainnum;
    QString username;
    QString username_2;
    QSqlTableModel *model = new QSqlTableModel(this);
    QSqlTableModel *model_2 = new QSqlTableModel(this);
    QSqlTableModel *model_3 = new QSqlTableModel(this);
};

#endif // ADMINDLG_H
