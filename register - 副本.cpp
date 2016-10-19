#include "register.h"
#include "ui_register.h"
#include "logindlg.h"
#include "inquire.h"


Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    flag = 0;
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    flag = 0;
    QSqlQuery query;
    if (ui->pwdlineEdit->text().isEmpty() || ui->usernamelineEdit->text().isEmpty() || ui->repwdlineEdit->text().isEmpty() || ui->namelineEdit->text().isEmpty() || ui->genderlineEdit->text().isEmpty() || ui->idnumlineEdit->text().isEmpty() || ui->callnumlineEdit->text().isEmpty()) {
        QMessageBox::warning(0, "数据不完整", "请填写所有必填项", QMessageBox::Cancel);
    }
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
        QMessageBox::warning(0, "注册失败", "该用户名已被注册", QMessageBox::Cancel);
    }
    else if (ui->pwdlineEdit->text() != ui->repwdlineEdit->text()) {
        QMessageBox::critical(0, "注册失败", "两次填写密码不同", QMessageBox::Cancel);
    }
    else if (ui->emaillineEdit->text().isEmpty()) {
        query.exec(QString("insert into passenger(account,pwd,name,gender,idnum,callnum,email) values(%1,%2,%3,%4,%5,%6,0)")
            .arg(ui->usernamelineEdit->text())
            .arg(ui->pwdlineEdit->text())
            .arg(ui->namelineEdit->text())
            .arg(ui->genderlineEdit->text())
            .arg(ui->idnumlineEdit->text())
            .arg(ui->callnumlineEdit->text()));
        //QMessageBox::warning(0, "1", "方式1", QMessageBox::Cancel);
    }
    else {
        query.exec(QString("insert into passenger(account,pwd,name,gender,idnum,callnum,email) values(%1,%2,%3,%4,%5,%6,%7)")
            .arg(ui->usernamelineEdit->text())
            .arg(ui->pwdlineEdit->text())
            .arg(ui->namelineEdit->text())
            .arg(ui->genderlineEdit->text())
            .arg(ui->idnumlineEdit->text())
            .arg(ui->callnumlineEdit->text())
            .arg(ui->emaillineEdit->text()));
        //QMessageBox::warning(0, "2", "方式2", QMessageBox::Cancel);
    }
    if (!flag) {
        query.exec(QString("select account from passenger where account='%1'")
            .arg(ui->usernamelineEdit->text()));
        if (query.next()) {
            QMessageBox::about(NULL, "注册成功", "注册成功，欢迎使用");
            hide();
            Inquire *i = new Inquire;
            i->show();
        }
        else QMessageBox::warning(0, "注册失败", "填写信息不合法，请使用英文尝试", QMessageBox::Cancel);
    }
}

void Register::on_pushButton_2_clicked()
{
    hide();
    LoginDlg *l = new LoginDlg;
    l->show();
}
