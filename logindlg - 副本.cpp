#include "logindlg.h"
#include "admindlg.h"
#include "inquire.h"
#include "register.h"
#include "ui_logindlg.h"


LoginDlg::LoginDlg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);
    //连接数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName(QString("DRIVER={SQL SERVER};"
                                   "SERVER=%1;"
                                   "DATABASE=%2;"
                                   "UID=%3;"
                                   "PWD=%4;").arg("127.0.0.1")
                           .arg("ticket")
                           .arg("sa")
                           .arg("admin"));
    if (!db.open())
    {
        flag = 0;
        QMessageBox::warning(0,"Cannot open database", db.lastError().text(), QMessageBox::Cancel);
        //QMessageBox::warning(0, qApp->tr("Cannot open database"),
        //        db.lastError().databaseText(), QMessageBox::Cancel);
    }
    else
    {
        flag = 1;
        qDebug()<<"Connect to Database Success!";
    }

    //ui->pushButton_2->setFocus();    //设置默认焦点
    //ui->pushButton_2->setDefault();
    //ui->pushButton_2->setShortcut(QKeySequence::InsertParagraphSeparator);  //设置快捷键为键盘的“回车”键
    //ui->pushButton_2->setShortcut(Qt::Key_Enter);  //设置快捷键为enter键
}

LoginDlg::~LoginDlg()
{
    delete ui;
}

void LoginDlg::on_pushButton_2_clicked()
{

    QSqlQuery query1,query2;
    //query1.exec(QString("select account,pwd from admin where account='admin' and pwd='admin'"));

    query1.exec(QString("select account,pwd from admin where account='%1' and pwd='%2'")
        .arg(ui->usernamelineEdit->text())
        .arg(ui->pswlineEdit->text()));

    //QMessageBox::information(NULL, "account", ui->usernamelineEdit->text(), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    //QMessageBox::information(NULL, "pwd", ui->usernamelineEdit->text(), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    query2.exec(QString("select account,pwd from passenger where account='%1' and pwd='%2'")
        .arg(ui->usernamelineEdit->text())
        .arg(ui->pswlineEdit->text()));
    if(query1.next()){
        hide();
        AdminDlg *a = new AdminDlg;
        a->show();
    }
    else if (query2.next()) {
        hide();
        Inquire *l = new Inquire;
        l->show();
    }
    else{
        QMessageBox::warning(0,"登录失败", "用户名或密码错误", QMessageBox::Cancel);
    }

}

void LoginDlg::on_pushButton_clicked()
{
    hide();
    Register *r = new Register;
    r->show();
}
