#include "admindlg.h"
#include "ui_admindlg.h"
#include "logindlg.h"
#include "stationdlg.h"
#include "addtraindlg.h"
#include "addpassengerdlg.h"
#include "modifypassengerdlg.h"
#include "modifytraindlg.h"

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
    close();
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
        query.exec(QString("select account from passenger where account='%1'")
            .arg(username_2));
        if(query.next()){
            query.exec(QString("select account from ticket where account='%1'")
                .arg(username_2));
            if (query.next()) {
                model_3->setFilter(QString("account='%1'").arg(username_2));
                model_3->select();
            }
            else {
                model_3->setFilter(QString("account='%1'").arg(username_2));
                model_3->select();
                QMessageBox::about(NULL, "无结果", "该用户暂无订票信息");
            }
        }
        else {
            model_3->setFilter(QString("account='%1'").arg(username_2));
            model_3->select();
            QMessageBox::warning(0, "查找失败", "无该用户信息", QMessageBox::Cancel);
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

            model->setFilter(QString("trainnum='%1'").arg(trainnum));
            model->select();
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

            model->setFilter(QString("trainnum='%1'").arg(trainnum));
            model->select();
        }
        else {
            QMessageBox::warning(0, "删除失败", "该列车车次不存在", QMessageBox::Cancel);
        }
    }
}

//添加旅客信息
void AdminDlg::on_pushButton_8_clicked()
{
    QSqlQuery query;
    username = ui->usernamelineEdit->text();
    int flag = 0;
    query.exec(QString("select account from admin where account='%1'")
        .arg(ui->usernamelineEdit->text()));
    if (query.next()) {
        flag = 1;
    }
    else {
        query.exec(QString("select account from passenger where account='%1'")
            .arg(ui->usernamelineEdit->text()));
        if (query.next()) {
            flag = 1;
        }
    }
    if (flag) {
        QMessageBox::warning(0, "添加失败", "该用户名已存在", QMessageBox::Cancel);
    }
    else{
        AddPassengerDlg *a = new AddPassengerDlg;
        connect(this,SIGNAL(sendUsername(QString)),a,SLOT(getUsername(QString)));
        emit sendUsername(ui->usernamelineEdit->text());
        a->exec();

        model_2->setFilter(QString("account='%1'").arg(username));
        model_2->select();
    }
}

//删除旅客信息及其订票信息
void AdminDlg::on_pushButton_9_clicked()
{
    QSqlQuery query;
    username = ui->usernamelineEdit->text();
    int flag = 0;
    username = ui->usernamelineEdit->text();
    if(username.isEmpty()){
        QMessageBox::warning(0, "删除失败", "请输入用户名", QMessageBox::Cancel);
    }
    else {
        query.exec(QString("select account from admin where account='%1'")
            .arg(username));
        if (query.next()) {
            flag = 2;
        }
        else {
            query.exec(QString("select account from passenger where account='%1'")
                .arg(username));
            if (query.next()) {
                flag = 1;
            }
        }
        if (flag == 2) {
            QMessageBox::warning(0, "删除失败", "该用户无法删除", QMessageBox::Cancel);
        }
        else if(flag == 0){
            QMessageBox::warning(0, "删除失败", "不存在该用户", QMessageBox::Cancel);
        }
        else{
            query.exec(QString("delete from passenger where account='%1'")
                       .arg(username));
            QStringList userOrders;
            query.exec(QString("select ordernum from ticket where account='%1'")
                       .arg(username));
            while(query.next()){
                userOrders.append(query.value(0).toString());
            }

            for(int i = 0; i < userOrders.size(); i++){
                QString ordernum = userOrders[i];
                QString trainnum;
                QString leavestation;
                QString arrivalstation;
                QString type;
                QString type_database;
                query.exec(QString("select trainnum,leavestation,arrivalstation,type from ticket where account='%1' and ordernum='%2'")
                           .arg(username)
                           .arg(ordernum));
                if(query.next()){
                    trainnum = query.value(0).toString();
                    leavestation = query.value(1).toString();
                    arrivalstation = query.value(2).toString();
                    type = query.value(3).toString();
                }
                type_database = transToType(type);
                addTicketMargin(trainnum,leavestation,arrivalstation,type_database);
            }
            query.exec(QString("delete from ticket where account='%1'")
                .arg(ui->usernamelineEdit->text()));
            QMessageBox::about(NULL, "删除成功", "该用户信息以及其订票信息均已删除");

            model_2->setFilter(QString("account='%1'").arg(username));
            model_2->select();
        }
    }
}

//删除订单
void AdminDlg::on_pushButton_15_clicked()
{
    username_2 = ui->usernamelineEdit_2->text();
    QSqlQuery query;
    int irow,icolum;
    QString ordernum;
    QString trainnum;
    QString leavestation;
    QString arrivalstation;
    QString type;
    QString type_database;
    irow = ui->tableView_3->currentIndex().row();
    icolum = ui->tableView_3->currentIndex().column();
    if(username_2.isEmpty()){
        QMessageBox::warning(0, "删除失败", "请输入用户名", QMessageBox::Cancel);
    }
    else if(irow == -1){
        QMessageBox::warning(0, "删除失败", "请选择要选择的订单", QMessageBox::Cancel);
    }
    else {
        ordernum = model_3->data(model_3->index(irow,2)).toString();
        trainnum = model_3->data(model_3->index(irow,3)).toString();
        leavestation = model_3->data(model_3->index(irow,5)).toString();
        arrivalstation = model_3->data(model_3->index(irow,6)).toString();
        type = model_3->data(model_3->index(irow,7)).toString();
        type_database = transToType(type);
        addTicketMargin(trainnum,leavestation,arrivalstation,type_database);
        query.exec(QString("delete from ticket where account='%1' and ordernum='%2'")
                   .arg(username_2)
                   .arg(ordernum));
        QMessageBox::about(NULL, "删除成功", "该订票信息已删除");

        model_3->setFilter(QString("account='%1'").arg(username_2));
        model_3->select();
    }
}

//将订单信息里的票型转化为数据库中对应的查询字段
QString AdminDlg::transToType(QString type)
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
void AdminDlg::addTicketMargin(QString trainnum, QString leaveStation, QString arrivalStation, QString databasecolum)
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

//修改用户信息
void AdminDlg::on_pushButton_11_clicked()
{
    int irow,icolum;
    irow = ui->tableView_2->currentIndex().row();
    icolum = ui->tableView_2->currentIndex().column();
    if(irow == -1 || icolum == -1){
        QMessageBox::warning(0, "修改失败", "请选择需要修改的单元", QMessageBox::Cancel);
    }
    else if(icolum == 0){
        QMessageBox::warning(0, "修改失败", "所选内容不能修改！", QMessageBox::Cancel);
    }
    else{
        ModifyPassengerDlg *m = new ModifyPassengerDlg;

        connect(this, SIGNAL(sendUsername_2(QString)), m, SLOT(getUsername_2(QString)));
        connect(this, SIGNAL(sendModifyColum(int)), m, SLOT(getModifyColum(int)));
        emit sendUsername_2(username);
        emit sendModifyColum(icolum);

        m->exec();

        model_2->setFilter(QString("account='%1'").arg(username));
        model_2->select();
    }
}

//修改车次信息
void AdminDlg::on_pushButton_2_clicked()
{
    int irow,icolum;
    irow = ui->tableView->currentIndex().row();
    icolum = ui->tableView->currentIndex().column();
    if(irow == -1 || icolum == -1){
        QMessageBox::warning(0, "修改失败", "请选择需要修改的单元", QMessageBox::Cancel);
    }
    else if(icolum == 0){
        QMessageBox::warning(0, "修改失败", "所选内容不能修改！", QMessageBox::Cancel);
    }
    else{
        ModifyTrainDlg *m = new ModifyTrainDlg;

        connect(this, SIGNAL(sendTrainnum_3(QString)), m, SLOT(getTrainnum_4(QString)));
        connect(this, SIGNAL(sendModifyColum_2(int)), m, SLOT(getModifycolum_2(int)));
        emit sendTrainnum_3(trainnum);
        emit sendModifyColum_2(icolum);

        m->exec();

        model_3->setFilter(QString("account='%1'").arg(username_2));
        model_3->select();
    }
}
