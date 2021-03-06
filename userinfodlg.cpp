#include "userinfodlg.h"
#include "ui_userinfodlg.h"
#include "modifypassengerdlg.h"
#include "userticketdlg.h"

UserInfoDlg::UserInfoDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfoDlg)
{
    ui->setupUi(this);
    model->setTable("passenger");
    QStringList headerList = {"用户名", "密码", "姓名", "性别","身份证号","手机号","邮箱" };
    for (int i = 0; i < headerList.size(); ++i) {
        model->setHeaderData(i, Qt::Horizontal, headerList[i]);
    }
    ui->tableView->setModel(model);
}

UserInfoDlg::~UserInfoDlg()
{
    delete ui;
}

//槽函数，接收来自上层的用户名
void UserInfoDlg::getUsername_3(QString username)
{
    this->username = username;
    ui->groupBox->setTitle(this->username + QString("的个人信息"));
    model->setFilter(QString("account='%1'").arg(username));
    model->select();
}

//信息修改
void UserInfoDlg::on_pushButton_clicked()
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
        ModifyPassengerDlg *m = new ModifyPassengerDlg;

        connect(this, SIGNAL(sendUsername_3(QString)), m, SLOT(getUsername_2(QString)));
        connect(this, SIGNAL(sendModifyColum_3(int)), m, SLOT(getModifyColum(int)));
        emit sendUsername_3(username);
        emit sendModifyColum_3(icolum);

        m->exec();

        model->setFilter(QString("account='%1'").arg(username));
        model->select();
    }
}


void UserInfoDlg::on_pushButton_2_clicked()
{
    UserTicketDlg *u = new UserTicketDlg;

    connect(this,SIGNAL(sendUsername_3(QString)),u,SLOT(getUsername(QString)));
    emit sendUsername_3(username);

    u->exec();
}
