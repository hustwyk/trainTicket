#include "bookdlg.h"
#include "ui_bookdlg.h"

BookDlg::BookDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookDlg)
{
    ui->setupUi(this);
}

BookDlg::~BookDlg()
{
    delete ui;
}
