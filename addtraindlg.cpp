#include "addtraindlg.h"
#include "ui_addtraindlg.h"

AddTrainDlg::AddTrainDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTrainDlg)
{
    ui->setupUi(this);
}

AddTrainDlg::~AddTrainDlg()
{
    delete ui;
}

//槽函数，接受上层输入的车次号
void AddTrainDlg::getTrainnum_3(QString s)
{
    trainnum = s;
    ui->groupBox->setTitle(trainnum + QString("列车信息"));
}

//添加操作
void AddTrainDlg::on_pushButton_clicked()
{
    QSqlQuery query;
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty() || ui->lineEdit_6->text().isEmpty() || ui->lineEdit_7->text().isEmpty() || ui->lineEdit_8->text().isEmpty() || ui->lineEdit_9->text().isEmpty()){
        QMessageBox::warning(0, "添加失败", "请输入完整信息", QMessageBox::Cancel);
    }
    else{
        query.exec(QString("insert into traininfo values('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10')")
            .arg(trainnum)
            .arg(ui->lineEdit->text())
            .arg(ui->lineEdit_2->text())
            .arg(ui->lineEdit_3->text())
            .arg(ui->lineEdit_4->text())
            .arg(ui->lineEdit_5->text())
            .arg(ui->lineEdit_6->text())
            .arg(ui->lineEdit_7->text())
            .arg(ui->lineEdit_8->text())
            .arg(ui->lineEdit_9->text()));
        QMessageBox::about(NULL, "添加成功", "列车信息添加成功！");
    }
}
