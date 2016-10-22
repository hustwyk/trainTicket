#ifndef MODIFYTRAINDLG_H
#define MODIFYTRAINDLG_H
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
class ModifyTrainDlg;
}

class ModifyTrainDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyTrainDlg(QWidget *parent = 0);
    QString trans(int i);
    ~ModifyTrainDlg();

public slots:
    void getModifycolum_2(int i);

    void getTrainnum_4(QString trainnum);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ModifyTrainDlg *ui;
    int modifycolum;
    QString trainnum;
};

#endif // MODIFYTRAINDLG_H
