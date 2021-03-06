#include "addstationdlg.h"
#include "ui_addstationdlg.h"

AddStationDlg::AddStationDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddStationDlg)
{
    ui->setupUi(this);
}

AddStationDlg::~AddStationDlg()
{
    delete ui;
}

// 槽函数，接受待添加车站信息的车次号
void AddStationDlg::getTrainnum_2(QString s)
{
    trainnum = s;
    ui->groupBox->setTitle(trainnum + QString("列车"));
}

//添加操作
void AddStationDlg::on_pushButton_clicked()
{
    QSqlQuery query;
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty() || ui->lineEdit_6->text().isEmpty() || ui->lineEdit_7->text().isEmpty() || ui->lineEdit_8->text().isEmpty() || ui->lineEdit_9->text().isEmpty()|| ui->lineEdit_10->text().isEmpty()|| ui->lineEdit_11->text().isEmpty()|| ui->lineEdit_12->text().isEmpty()){
        QMessageBox::warning(0, "添加失败", "请输入完整信息", QMessageBox::Cancel);
    }
    else{
        query.exec(QString("select passstation from stationinfo where trainnum='%1' and passstation='%2'")
            .arg(trainnum)
            .arg(ui->lineEdit->text()));
        if(query.next()){
            QMessageBox::warning(0, "添加失败", "已有该车站信息", QMessageBox::Cancel);
        }
        else{
            query.exec(QString("insert into stationinfo values('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10','%11','%12','%13')")
                .arg(trainnum)
                .arg(ui->lineEdit->text())
                .arg(ui->lineEdit_2->text())
                .arg(ui->lineEdit_3->text())
                .arg(ui->lineEdit_4->text())
                .arg(ui->lineEdit_5->text())
                .arg(ui->lineEdit_6->text())
                .arg(ui->lineEdit_7->text())
                .arg(ui->lineEdit_8->text())
                .arg(ui->lineEdit_9->text())
                .arg(ui->lineEdit_10->text())
                .arg(ui->lineEdit_11->text())
                .arg(ui->lineEdit_12->text()));
            QMessageBox::about(NULL, "添加成功", "车站信息添加成功！");
        }
    }
}
