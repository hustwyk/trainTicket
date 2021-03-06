#include "addpassengerdlg.h"
#include "ui_addpassengerdlg.h"

AddPassengerDlg::AddPassengerDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPassengerDlg)
{
    ui->setupUi(this);
}

AddPassengerDlg::~AddPassengerDlg()
{
    delete ui;
}

void AddPassengerDlg::on_pushButton_clicked()
{
    QSqlQuery query;
    if (ui->pwdlineEdit->text().isEmpty() || ui->repwdlineEdit->text().isEmpty() || ui->namelineEdit->text().isEmpty() || ui->genderlineEdit->text().isEmpty() || ui->idnumlineEdit->text().isEmpty() || ui->callnumlineEdit->text().isEmpty()) {
        QMessageBox::warning(0, "数据不完整", "请填写所有必填项", QMessageBox::Cancel);
    }
    else if (ui->pwdlineEdit->text() != ui->repwdlineEdit->text()) {
        QMessageBox::critical(0, "添加失败", "两次填写密码不同", QMessageBox::Cancel);
    }
    else if (ui->emaillineEdit->text().isEmpty()) {
        query.exec(QString("insert into passenger(account,pwd,name,gender,idnum,callnum) values(%1,%2,%3,%4,%5,%6)")
            .arg(username)
            .arg(ui->pwdlineEdit->text())
            .arg(ui->namelineEdit->text())
            .arg(ui->genderlineEdit->text())
            .arg(ui->idnumlineEdit->text())
            .arg(ui->callnumlineEdit->text()));
        //QMessageBox::warning(0, "1", "方式1", QMessageBox::Cancel);
    }
    else {
        query.exec(QString("insert into passenger(account,pwd,name,gender,idnum,callnum,email) values(%1,%2,%3,%4,%5,%6,%7)")
            .arg(username)
            .arg(ui->pwdlineEdit->text())
            .arg(ui->namelineEdit->text())
            .arg(ui->genderlineEdit->text())
            .arg(ui->idnumlineEdit->text())
            .arg(ui->callnumlineEdit->text())
            .arg(ui->emaillineEdit->text()));
        //QMessageBox::warning(0, "2", "方式2", QMessageBox::Cancel);
    }
    query.exec(QString("select account from passenger where account='%1'")
        .arg(username));
    if (query.next()) {
        QMessageBox::about(NULL, "添加成功", "添加成功");
    }
    else QMessageBox::warning(0, "添加失败", "填写信息不合法，请使用英文尝试", QMessageBox::Cancel);
}

//槽函数，接收来自上层传入的用户名
void AddPassengerDlg::getUsername(QString username)
{
    this->username = username;
    ui->groupBox->setTitle(username + QString("的信息"));
}
