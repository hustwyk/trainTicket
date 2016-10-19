#include "admindlg.h"
#include "ui_admindlg.h"
#include "logindlg.h"

AdminDlg::AdminDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDlg)
{
    ui->setupUi(this);

    model->setTable("traininfo");
    //model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    //model->select();
    QStringList headerList = { tr("车次"), tr("类别"), tr("始发站"),tr("始发时间"),tr("终点站"),tr("终到时间"),tr("软卧余票"),tr("硬卧余票"),tr("硬座余票"),tr("无座余票") };
    for (int i = 0; i < headerList.size(); ++i) {
        model->setHeaderData(i, Qt::Horizontal, headerList[i]);
    }
    ui->tableView->setModel(model);
    //ui->tableView->show();

    model_2->setTable("passenger");
    QStringList headerList_2 = { "用户账号", "密码", "姓名","性别","身份证号","手机号","邮箱" };
    for (int i = 0; i < headerList_2.size(); ++i) {
        model_2->setHeaderData(i, Qt::Horizontal, headerList_2[i]);
    }
    ui->tableView_2->setModel(model_2);

    model_3->setTable("ticket");
    QStringList headerList_3 = { "用户账号", "用户姓名", "订单号","车次","乘坐日期","出发站","到达站","乘坐方式","票价","订票日期","是否网上订票" };
    for (int i = 0; i < headerList_3.size(); ++i) {
        model_3->setHeaderData(i, Qt::Horizontal, headerList_3[i]);
    }
    ui->tableView_3->setModel(model_3);
}

AdminDlg::~AdminDlg()
{
    delete ui;
}

//退出当前登录
void AdminDlg::on_pushButton_12_clicked()
{
    hide();
    LoginDlg *l = new LoginDlg;
    l->show();
}

//查找车次
void AdminDlg::on_pushButton_clicked()
{
    QSqlQuery query;
    trainnum = ui->trainlineEdit->text();
    query.exec(QString("select trainnum from traininfo where trainnum='%1'")
        .arg(trainnum));
    if (query.next()) {
        model->setFilter(QString("trainnum='%1'").arg(trainnum));
        model->select();
    }
    else if (ui->trainlineEdit->text().isEmpty()) {
        QMessageBox::warning(0, "查找失败", "请输入车次", QMessageBox::Cancel);
    }
    else {
        model->setFilter(QString("trainnum='%1'").arg(trainnum));
        model->select();
        QMessageBox::warning(0, "查找失败", "该车次列车不存在", QMessageBox::Cancel);
    }
}
