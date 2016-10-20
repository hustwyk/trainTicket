#include "inquire.h"
#include "ui_inquire.h"
#include "logindlg.h"

Inquire::Inquire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inquire)
{
    ui->setupUi(this);

    //QStringList headerList = { "车次", "类别", "出发时间","到达时间","持续时间","软卧余票","硬卧余票","硬座余票","无座余票" };
    //for (int i = 0; i < headerList.size(); ++i) {
    //    model->setHeaderData(i, Qt::Horizontal, headerList[i]);
    //}
    model->setHorizontalHeaderItem(0,new QStandardItem("车次"));
    model->setHorizontalHeaderItem(1,new QStandardItem("类别"));
    model->setHorizontalHeaderItem(2,new QStandardItem("出发时间"));
    model->setHorizontalHeaderItem(3,new QStandardItem("到达时间"));
    model->setHorizontalHeaderItem(4,new QStandardItem("持续时间"));
    model->setHorizontalHeaderItem(5,new QStandardItem("软卧余票"));
    model->setHorizontalHeaderItem(6,new QStandardItem("硬卧余票"));
    model->setHorizontalHeaderItem(7,new QStandardItem("硬座余票"));
    model->setHorizontalHeaderItem(8,new QStandardItem("无座余票"));
    ui->tableView->setModel(model);
    //model->setItem(0,0,new QStandardItem("T192"));


}

Inquire::~Inquire()
{
    delete ui;
}

void Inquire::on_pushButton_2_clicked()
{
    close();
    LoginDlg *l = new LoginDlg;
    l->show();
}

void Inquire::on_pushButton_clicked()
{
    QStringList trainnumList;
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
        QSqlQuery query;
        //QMessageBox::warning(0, "sdfsdfsd", "sdfsdfsdfsd", QMessageBox::Cancel);
        query.exec(QString("select trainnum from stationinfo where passstation='%1'")
            .arg(leaveStation));
        //将所有找到的出发站的车次号保存在list中
        while(query.next()){
            trainnumList.append(query.value(0).toString());
        }
        //QMessageBox::warning(0, "sdfsdfsd", "sdfsdfsdfsd", QMessageBox::Cancel);
        //for(int i = 0;i < leavestationList.size(); i++){
        //    qDebug()<<leavestationList[i];
        //}
        if(trainnumList.size() == 0){
            QMessageBox::warning(0, "信息错误", "出发站不存在", QMessageBox::Cancel);
        }

        else {
            //QMessageBox::warning(0, "sdfsdfsd", "sdfsdfsdfsd", QMessageBox::Cancel);
            //将list中保存的所有出发站车次遍历，查找是否存在对应的目的站
            int count = 0;  //表中的行号
            for(int i = 0;i < trainnumList.size(); i++){
                QSqlQuery query2;
                QString trainnumtemp = trainnumList[i];
                query2.exec(QString("select passstation from stationinfo where trainnum='%1' and passstation='%2'")
                       .arg(trainnumtemp)
                       .arg(arrivalStation));
                //若找到该车次对应的目的站
                if(query2.next()){
                    QSqlQuery query3;
                    //通过查询出发站和目的站的票价，确定目的站是否在出发站之后
                    int leavesoftprice, arrivalsoftprice;
                    query3.exec(QString("select softprice from stationinfo where trainnum='%1' and passstation='%2'")
                           .arg(trainnumtemp)
                           .arg(leaveStation));
                    if(query3.next()){
                        leavesoftprice = query3.value(0).toInt();
                    }
                    qDebug()<<leaveStation;
                    qDebug()<<query3.value(0);
                    query3.exec(QString("select softprice from stationinfo where trainnum='%1' and passstation='%2'")
                           .arg(trainnumtemp)
                           .arg(arrivalStation));
                    if(query3.next()){
                        arrivalsoftprice = query3.value(0).toInt();
                    }
                    qDebug()<<query3.value(0);
                    if(arrivalsoftprice > leavesoftprice){
                        //当目的站的软卧票价大于出发站的软卧票价的时候，说明目的站在出发站之后，符合条件
                        //int softprice = arrivalsoftprice - leavesoftprice;
                        //QString softpriceStr = QString::number(softprice,10);
                        //填写count对应的表中的行的信息


                        int softmargin = findTheLeast(trainnumtemp,"softmargin");
                        int hardmargin = findTheLeast(trainnumtemp,"hardmargin");
                        int seatmargin = findTheLeast(trainnumtemp,"seatmargin");
                        int noseatmargin = findTheLeast(trainnumtemp,"noseatmargin");
                        if(softmargin == -1 || hardmargin == -1 || seatmargin == -1 || noseatmargin == -1){
                            continue;
                        }

                        //设置车次号
                        model->setItem(count,0,new QStandardItem(trainnumtemp));

                        //设置列车类型
                        QString type;
                        QSqlQuery query;
                        query.exec(QString("select type from traininfo where trainnum='%1'")
                            .arg(trainnumtemp));
                        if(query.next()){
                            type = query.value(0).toString();
                        }
                        model->setItem(count,1,new QStandardItem(type));

                        //设置出发时间
                        QString leavetime;
                        query.exec(QString("select leavetime from stationinfo where trainnum='%1' and passstation='%2'")
                            .arg(trainnumtemp)
                            .arg(leaveStation));
                        if(query.next()){
                            leavetime = query.value(0).toString();
                        }
                        model->setItem(count,2,new QStandardItem(leavetime));

                        //设置到达时间
                        QString arrivaltime;
                        query.exec(QString("select arrivaltime from stationinfo where trainnum='%1' and passstation='%2'")
                            .arg(trainnumtemp)
                            .arg(arrivalStation));
                        if(query.next()){
                            arrivaltime = query.value(0).toString();
                        }
                        model->setItem(count,3,new QStandardItem(arrivaltime));

                        //设置经过时间
                        QString duringtime;
                        duringtime = duringTime(leavetime, arrivaltime);
                        model->setItem(count,4,new QStandardItem(duringtime));

                        //设置软卧余票
                        QString softmarginStr = QString::number(softmargin,10);
                        model->setItem(count,5,new QStandardItem(softmarginStr));

                        //设置硬卧余票
                        QString hardmarginStr = QString::number(hardmargin,10);
                        model->setItem(count,6,new QStandardItem(hardmarginStr));

                        //设置硬座余票
                        QString seatmarginStr = QString::number(seatmargin,10);
                        model->setItem(count,7,new QStandardItem(seatmarginStr));

                        //设置无座余票
                        QString noseatmarginStr = QString::number(noseatmargin,10);
                        model->setItem(count,8,new QStandardItem(noseatmarginStr));

                        //qDebug()<<softmarginStr;

                        //符合条件的列车数量加1
                        count++;
                    }


                }
            }
            if(count == 0){
                //若遍历完，找到的符合条件的行没有，说明区间信息有误
                QMessageBox::warning(0, "信息错误", "没有该区间信息，请更改目的地", QMessageBox::Cancel);
            }
        }

    }
    //QMessageBox::warning(0, "离开日期", leavedate.toString(), QMessageBox::Cancel);
}

//在trainnum对应的车次的车站信息中，找databasecolum对应的列在出发站和目的站之间的（比如硬座余票）的最小值
int Inquire::findTheLeast(QString trainnum, QString databasecolum)
{
    QString lastStation;
    int least = 0;
    QSqlQuery query;
    query.exec(QString("select laststation,%1 from stationinfo where trainnum='%2' and passstation='%3'")
        .arg(databasecolum)
        .arg(trainnum)
        .arg(arrivalStation));
    if(query.next()){
        lastStation = query.value(0).toString();
        least = query.value(1).toInt();
    }
    while(lastStation != leaveStation){
        query.exec(QString("select laststation,%1 from stationinfo where trainnum='%2' and passstation='%3'")
            .arg(databasecolum)
            .arg(trainnum)
            .arg(lastStation));
        if(query.next()){
            lastStation = query.value(0).toString();
            int temp = query.value(1).toInt();
            if(temp < least){
                least = temp;
            }
        }
        //若出现中间某车站的上一站在该路线上找不到，则返回-1
        else return -1;
    }
    query.exec(QString("select %1 from stationinfo where trainnum='%2' and passstation='%3'")
        .arg(databasecolum)
        .arg(trainnum)
        .arg(arrivalStation));
    if(query.next()){
        int temp = query.value(0).toInt();
        if(temp < least){
            least = temp;
        }
    }
    return least;
}

//计算出发时间和离开时间之差（通过转换为QTime类型，再分别进行小时、分钟、秒的运算）
QString Inquire::duringTime(QString leavetime, QString arrivaltime)
{
    QTime qleavetime, qarrivaltime;
    qleavetime = QTime::fromString(leavetime,"hh:mm:ss");
    qarrivaltime = QTime::fromString(arrivaltime,"hh:mm:ss");
    int h = qarrivaltime.hour() - qleavetime.hour();
    int m = qarrivaltime.minute() - qleavetime.minute();
    int s = qarrivaltime.second() - qleavetime.second();
    QTime qduringtime(h,m,s,0);
    QString duringtime = qduringtime.toString("hh:mm:ss");
    return duringtime;
}
