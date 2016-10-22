#ifndef MODIFYPASSENGERDLG_H
#define MODIFYPASSENGERDLG_H
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
class ModifyPassengerDlg;
}

class ModifyPassengerDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyPassengerDlg(QWidget *parent = 0);
    QString trans(int i);
    ~ModifyPassengerDlg();

public slots:
    void getModifyColum(int i);

    void getUsername_2(QString username);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ModifyPassengerDlg *ui;
    int modifycolum;
    QString username;
};

#endif // MODIFYPASSENGERDLG_H
