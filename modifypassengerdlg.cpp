#include "modifypassengerdlg.h"
#include "ui_modifypassengerdlg.h"

ModifyPassengerDlg::ModifyPassengerDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyPassengerDlg)
{
    ui->setupUi(this);
}

ModifyPassengerDlg::~ModifyPassengerDlg()
{
    delete ui;
}


//槽函数，接收待修改值所在的列号
void ModifyPassengerDlg::getModifyColum(int i)
{
    this->modifycolum = i;
}

//槽函数，接收待修改用户的用户名
void ModifyPassengerDlg::getUsername_2(QString username)
{
    this->username = username;
    ui->groupBox->setTitle(this->username + QString("信息"));
}

//修改用户信息
void ModifyPassengerDlg::on_pushButton_clicked()
{
    QSqlQuery query;
    if(ui->lineEdit->text().isEmpty()){
        QMessageBox::warning(0, "修改失败", "请选输入修改内容", QMessageBox::Cancel);
    }
    else{
        QString databasecolum = trans(modifycolum);
        query.exec(QString("update passenger set %1='%2' where account='%3'")
            .arg(databasecolum)
            .arg(ui->lineEdit->text())
            .arg(username));
        QMessageBox::about(NULL, "修改成功", "修改成功");
    }
}

//将待修改单元的列号转换为对应的数据库表项
QString ModifyPassengerDlg::trans(int i)
{
    QString str;
    switch (i) {
        case 1:{
            str = "pwd";
            break;
        }
        case 2:{
            str = "name";
            break;
        }
        case 3:{
            str = "gender";
            break;
        }
        case 4:{
            str = "idnum";
            break;
        }
        case 5:{
            str = "callnum";
            break;
        }
        case 6:{
            str = "email";
            break;
        }
        default: break;
    }
    return str;
}
