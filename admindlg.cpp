#include "admindlg.h"
#include "ui_admindlg.h"
#include "logindlg.h"
#include "stationdlg.h"
#include "addtraindlg.h"

AdminDlg::AdminDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDlg)
{
    ui->setupUi(this);

    model->setTable("traininfo");
    //model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    //model->select();
    QStringList headerList = { "车次", "类别", "始发站","始发时间","终点站","终到时间","软卧余票","硬卧余票","硬座余票","无座余票" };
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
    if (ui->trainlineEdit->text().isEmpty()){
        QMessageBox::warning(0, "查找失败", "请输入车次", QMessageBox::Cancel);
    }
    else{
        query.exec(QString("select trainnum from traininfo where trainnum='%1'")
            .arg(trainnum));
        if (query.next()) {
            model->setFilter(QString("trainnum='%1'").arg(trainnum));
            model->select();
        }
        else {
            model->setFilter(QString("trainnum='%1'").arg(trainnum));
            model->select();
            QMessageBox::warning(0, "查找失败", "该车次列车不存在", QMessageBox::Cancel);
        }
    }
}

//查找用户
void AdminDlg::on_pushButton_7_clicked()
{
	QSqlQuery query;
	username = ui->usernamelineEdit->text();
    if (ui->usernamelineEdit->text().isEmpty()){
        QMessageBox::warning(0, "查找失败", "请输入用户名", QMessageBox::Cancel);
    }
    else {
        query.exec(QString("select account from passenger where account='%1'")
            .arg(username));
        if (query.next()) {
            model_2->setFilter(QString("account='%1'").arg(username));
            model_2->select();
        }
        else {
            model_2->setFilter(QString("account='%1'").arg(username));
            model_2->select();
            QMessageBox::warning(0, "查找失败", "该用户名不存在", QMessageBox::Cancel);
        }
    }
}

//查找订单
void AdminDlg::on_pushButton_10_clicked()
{
	QSqlQuery query;
	username_2 = ui->usernamelineEdit_2->text();
    if (ui->usernamelineEdit_2->text().isEmpty()){
        QMessageBox::warning(0, "查找失败", "请输入用户名", QMessageBox::Cancel);
    }
    else {
        query.exec(QString("select account from ticket where account='%1'")
            .arg(username_2));
        if (query.next()) {
            model_3->setFilter(QString("account='%1'").arg(username_2));
            model_3->select();
        }
        else {
            model_3->setFilter(QString("account='%1'").arg(username_2));
            model_3->select();
            QMessageBox::warning(0, "查找失败", "该用户名不存在", QMessageBox::Cancel);
        }
    }
}

//车站管理
void AdminDlg::on_pushButton_3_clicked()
{
    QSqlQuery query;
    trainnum = ui->trainlineEdit->text();
    if (trainnum.isEmpty()){
        QMessageBox::warning(0, "查找失败", "请输入车次", QMessageBox::Cancel);
    }
    else{
        query.exec(QString("select trainnum from traininfo where trainnum='%1'")
            .arg(trainnum));
        if(query.next()){
            StationDlg *s = new StationDlg;
            //QMessageBox::warning(0, "tips2", trainnum, QMessageBox::Cancel);
            connect(this, SIGNAL(sendTrainnum(QString)), s, SLOT(getTrainnum(QString)));
            emit sendTrainnum(trainnum);
            //s->setTrainnum(trainnum);
            s->exec();
        }
        else {
            QMessageBox::warning(0, "查找失败", "该列车车次不存在", QMessageBox::Cancel);
        }
    }

}

//添加车次
void AdminDlg::on_pushButton_5_clicked()
{
    QSqlQuery query;
    trainnum = ui->trainlineEdit->text();
    if(trainnum.isEmpty()){
        QMessageBox::warning(0, "添加失败", "请输入车次", QMessageBox::Cancel);
    }
    else {
        query.exec(QString("select trainnum from traininfo where trainnum='%1'")
            .arg(trainnum));
        if(query.next()) {
            QMessageBox::warning(0, "添加失败", "该列车车次已存在", QMessageBox::Cancel);
        }
        else {
            AddTrainDlg *a = new AddTrainDlg;

            connect(this, SIGNAL(sendTrainnum_2(QString)), a, SLOT(getTrainnum_3(QString)));
            emit sendTrainnum_2(trainnum);

            a->exec();
        }
    }
}

//删除车次，删除车次信息的时候，该车次对应的车站信息也应该删除
void AdminDlg::on_pushButton_6_clicked()
{
    QSqlQuery query;
    trainnum = ui->trainlineEdit->text();
    if(trainnum.isEmpty()){
        QMessageBox::warning(0, "删除失败", "请输入车次", QMessageBox::Cancel);
    }
    else {
        query.exec(QString("select trainnum from traininfo where trainnum='%1'")
            .arg(trainnum));
        if(query.next()) {
            query.exec(QString("delete from stationinfo where trainnum='%1'")
                .arg(trainnum));
            query.exec(QString("delete from traininfo where trainnum='%1'")
                .arg(trainnum));
            QMessageBox::about(NULL, "删除成功", "列车信息以及对应车站删除成功！");
        }
        else {
            QMessageBox::warning(0, "删除失败", "该列车车次不存在", QMessageBox::Cancel);
        }
    }
}
