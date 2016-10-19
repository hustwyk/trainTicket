#ifndef BOOKDLG_H
#define BOOKDLG_H
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
class BookDlg;
}

class BookDlg : public QDialog
{
    Q_OBJECT

public:
    explicit BookDlg(QWidget *parent = 0);
    ~BookDlg();

private:
    Ui::BookDlg *ui;
};

#endif // BOOKDLG_H
