#ifndef ADDTRAINDLG_H
#define ADDTRAINDLG_H
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
class AddTrainDlg;
}

class AddTrainDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AddTrainDlg(QWidget *parent = 0);
    ~AddTrainDlg();

public slots:
    void getTrainnum_3(QString s);

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddTrainDlg *ui;
    QString trainnum;
    QSqlTableModel *model = new QSqlTableModel(this);
};

#endif // ADDTRAINDLG_H
