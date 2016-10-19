#include "inquire.h"
#include "ui_inquire.h"
#include "logindlg.h"

Inquire::Inquire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inquire)
{
    ui->setupUi(this);

    QSqlDatabase::database().transaction();
    model->setTable("Inquire");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    QStringList headerList = { "车次", "类别", "出发时间","到达时间","持续时间","软卧余票","硬卧余票","硬座余票","无座余票" };
    for (int i = 0; i < headerList.size(); ++i) {
        model->setHeaderData(i, Qt::Horizontal, headerList[i]);
    }
    ui->tableView->setModel(model);
    ui->tableView->show();


}

Inquire::~Inquire()
{
    delete ui;
}

void Inquire::on_pushButton_2_clicked()
{
    hide();
    LoginDlg *l = new LoginDlg;
    l->show();
}

void Inquire::on_pushButton_clicked()
{
    leavedate = ui->dateEdit->date();
    //QString temp = leavedate.toString();
    //QString temp1 = "周六 10月 1 2016";

    leaveStation = ui->leavelineEdit->text();
    arrivalStation = ui->arrivallineEdit->text();

    if (leaveStation.isEmpty() && !arrivalStation.isEmpty()) {
        QMessageBox::warning(0, "信息不完整", "请输入出发站", QMessageBox::Cancel);
    }
    else if (!leaveStation.isEmpty() && arrivalStation.isEmpty()) {
        QMessageBox::warning(0, "信息不完整", "请输入离开站", QMessageBox::Cancel);
    }
    else if (leaveStation.isEmpty() && arrivalStation.isEmpty()) {
        QMessageBox::warning(0, "信息不完整", "请输入出发站和离开站", QMessageBox::Cancel);
    }
    else {

    }
    QMessageBox::warning(0, "离开日期", leavedate.toString(), QMessageBox::Cancel);
}
