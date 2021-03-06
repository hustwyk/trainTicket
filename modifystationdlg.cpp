#include "modifystationdlg.h"
#include "ui_modifystationdlg.h"

ModifyStationDlg::ModifyStationDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyStationDlg)
{
    ui->setupUi(this);
}

ModifyStationDlg::~ModifyStationDlg()
{
    delete ui;
}

//槽函数，得到待修改单元的列号
void ModifyStationDlg::getModifyNum(int i)
{
    modifynum = i;
}

//槽函数，得到待修改单元所在行的车次号
void ModifyStationDlg::getStationTrainnum(QString s)
{
    trainnum = s;
}

//槽函数，得到待修改单元所在行的当前站信息
void ModifyStationDlg::getStationPassstation(QString s)
{
    passstation = s;
    ui->groupBox->setTitle(passstation + QString("信息"));
}

//提交修改信息
void ModifyStationDlg::on_pushButton_clicked()
{
    QSqlQuery query;
    if(ui->lineEdit->text().isEmpty()){
        QMessageBox::warning(0, "修改失败", "请选输入修改内容", QMessageBox::Cancel);
    }
    else{
        QString databasecolum = trans(modifynum);
        query.exec(QString("update stationinfo set %1='%2' where trainnum='%3' and passstation='%4'")
            .arg(databasecolum)
            .arg(ui->lineEdit->text())
            .arg(trainnum)
            .arg(passstation));
        QMessageBox::about(NULL, "修改成功", "修改成功");
    }
}

//将待修改单元的列号转换为对应的数据库表项
QString ModifyStationDlg::trans(int i)
{
    QString str;
    switch (i) {
        case 2:{
            str = "stationcode";
            break;
        }
        case 3:{
            str = "laststation";
            break;
        }
        case 4:{
            str = "arrivaltime";
            break;
        }
        case 5:{
            str = "leavetime";
            break;
        }
        case 6:{
            str = "seatmargin";
            break;
        }
        case 7:{
            str = "hardmargin";
            break;
        }
        case 8:{
            str = "softmargin";
            break;
        }
        case 9:{
            str = "noseatmargin";
            break;
        }
        case 10:{
            str = "seatprice";
            break;
        }
        case 11:{
            str = "hardprice";
            break;
        }
        case 12:{
            str = "softprice";
            break;
        }
        default: break;
    }
    return str;
}
