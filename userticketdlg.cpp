#include "userticketdlg.h"
#include "ui_userticketdlg.h"

UserTicketDlg::UserTicketDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserTicketDlg)
{
    ui->setupUi(this);

    model->setTable("ticket");
    QStringList headerList = { "用户账号", "用户姓名", "订单号","车次","乘坐日期","出发站","到达站","乘坐方式","票价","订票日期","是否网上订票" };
    for (int i = 0; i < headerList.size(); ++i) {
        model->setHeaderData(i, Qt::Horizontal, headerList[i]);
    }
    ui->tableView->setModel(model);
}

UserTicketDlg::~UserTicketDlg()
{
    delete ui;
}

//槽函数，接收上层传递的用户名
void UserTicketDlg::getUsername(QString username)
{
    this->username = username;
    ui->groupBox->setTitle(this->username + QString("的订单"));
    model->setFilter(QString("account='%1'").arg(this->username));
    model->select();

}

//删除所选订单
void UserTicketDlg::on_pushButton_clicked()
{
    QSqlQuery query;
    int irow,icolum;
    QString ordernum;
    QString trainnum;
    QString leavestation;
    QString arrivalstation;
    QString type;
    QString type_database;
    irow = ui->tableView->currentIndex().row();
    icolum = ui->tableView->currentIndex().column();
    if(irow == -1){
        QMessageBox::warning(0, "删除失败", "请选择要选择的订单", QMessageBox::Cancel);
    }
    else {
        ordernum = model->data(model->index(irow,2)).toString();
        trainnum = model->data(model->index(irow,3)).toString();
        leavestation = model->data(model->index(irow,5)).toString();
        arrivalstation = model->data(model->index(irow,6)).toString();
        type = model->data(model->index(irow,7)).toString();
        type_database = transToType(type);
        addTicketMargin(trainnum,leavestation,arrivalstation,type_database);
        query.exec(QString("delete from ticket where account='%1' and ordernum='%2'")
                   .arg(username)
                   .arg(ordernum));
        QMessageBox::about(NULL, "删除成功", "该订票信息已删除");

        model->setFilter(QString("account='%1'").arg(username));
        model->select();
    }
}

//将订单信息里的票型转化为数据库中对应的查询字段
QString UserTicketDlg::transToType(QString type)
{
    QString type_database;
    if(type == "软卧"){
        type_database = "softmargin";
    }
    else if(type == "硬卧"){
        type_database = "hardmargin";
    }
    else if(type == "硬座"){
        type_database = "seatmargin";
    }
    else if(type == "无座"){
        type_database = "noseatmargin";
    }
    return type_database;
}

//将要删除的订单对应的区间中的所有车站的该类型票余量都加1
void UserTicketDlg::addTicketMargin(QString trainnum, QString leaveStation, QString arrivalStation, QString databasecolum)
{
    QString laststation, laststationtemp;
    int ticketmargin;
    QSqlQuery query;
    query.exec(QString("select laststation,%1 from stationinfo where trainnum='%2' and passstation='%3'")
               .arg(databasecolum)
               .arg(trainnum)
               .arg(arrivalStation));
    if(query.next()){
        laststation = query.value(0).toString();
        ticketmargin = query.value(1).toInt();
    }
    ticketmargin++;
    query.exec(QString("update stationinfo set %1=%2 where trainnum='%3' and passstation='%4'")
               .arg(databasecolum)
               .arg(ticketmargin)
               .arg(trainnum)
               .arg(arrivalStation));
    while(laststation != leaveStation){
        query.exec(QString("select laststation,%1 from stationinfo where trainnum='%2' and passstation='%3'")
                   .arg(databasecolum)
                   .arg(trainnum)
                   .arg(laststation));
        if(query.next()){
            laststationtemp = query.value(0).toString();
            ticketmargin = query.value(1).toInt();
        }
        ticketmargin++;
        query.exec(QString("update stationinfo set %1=%2 where trainnum='%3' and passstation='%4'")
                   .arg(databasecolum)
                   .arg(ticketmargin)
                   .arg(trainnum)
                   .arg(laststation));
        laststation = laststationtemp;
    }
    query.exec(QString("select %1 from stationinfo where trainnum='%2' and passstation='%3'")
               .arg(databasecolum)
               .arg(trainnum)
               .arg(leaveStation));
    if(query.next()){
        ticketmargin = query.value(0).toInt();
    }
    ticketmargin++;
    query.exec(QString("update stationinfo set %1=%2 where trainnum='%3' and passstation='%4'")
               .arg(databasecolum)
               .arg(ticketmargin)
               .arg(trainnum)
               .arg(leaveStation));
}
