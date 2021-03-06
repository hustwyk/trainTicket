#include "modifytraindlg.h"
#include "ui_modifytraindlg.h"

ModifyTrainDlg::ModifyTrainDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyTrainDlg)
{
    ui->setupUi(this);
}

ModifyTrainDlg::~ModifyTrainDlg()
{
    delete ui;
}

//槽函数，接收待修改的列号
void ModifyTrainDlg::getModifycolum_2(int i)
{
    this->modifycolum = i;
}

//槽函数，接收待修改车次的车次号
void ModifyTrainDlg::getTrainnum_4(QString trainnum)
{
    this->trainnum = trainnum;
    ui->groupBox->setTitle(this->trainnum + QString("信息"));
}

//修改车次信息
void ModifyTrainDlg::on_pushButton_clicked()
{
    QSqlQuery query;
    if(ui->lineEdit->text().isEmpty()){
        QMessageBox::warning(0, "修改失败", "请选输入修改内容", QMessageBox::Cancel);
    }
    else{
        QString databasecolum = trans(modifycolum);
        query.exec(QString("update traininfo set %1='%2' where trainnum='%3'")
            .arg(databasecolum)
            .arg(ui->lineEdit->text())
            .arg(trainnum));
        QMessageBox::about(NULL, "修改成功", "修改成功");
    }
}

//将待修改单元的列号转换为对应的数据库表项
QString ModifyTrainDlg::trans(int i)
{
    QString str;
    switch (i) {
        case 1:{
            str = "type";
            break;
        }
        case 2:{
            str = "startstation";
            break;
        }
        case 3:{
            str = "starttime";
            break;
        }
        case 4:{
            str = "endstation";
            break;
        }
        case 5:{
            str = "endtime";
            break;
        }
        case 6:{
            str = "seattotalnum";
            break;
        }
        case 7:{
            str = "hardtotalnum";
            break;
        }
        case 8:{
            str = "softtotalnum";
            break;
        }
        case 9:{
            str = "noseattotalnum";
            break;
        }
        default: break;
    }
    return str;
}
