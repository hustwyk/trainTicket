#include "stationdlg.h"
#include "ui_stationdlg.h"
#include "admindlg.h"
#include "addstationdlg.h"
#include "modifystationdlg.h"

StationDlg::StationDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StationDlg)
{
    ui->setupUi(this);

    model->setTable("stationinfo");
    QStringList headerList = { "车次", "车站", "车站代码","上一站","到站时间","离站时间","硬座余票","软卧余票","硬卧余票","无座余票","硬座（无座）票价","硬卧票价","软卧票价" };
    for (int i = 0; i < headerList.size(); ++i) {
        model->setHeaderData(i, Qt::Horizontal, headerList[i]);
    }
    ui->tableView->setModel(model);

	

    //QMessageBox::warning(0, "tips", trainnum, QMessageBox::Cancel);
    
}

StationDlg::~StationDlg()
{
    delete ui;
}

//槽函数，接受上层对话框传进的trainnum值
void StationDlg::getTrainnum(QString s)
{
    trainnum = s;
	//QMessageBox::warning(0, "tips3", this->trainnum, QMessageBox::Cancel);
	ui->groupBox->setTitle(trainnum + QString("车站信息表"));
	model->setFilter(QString("trainnum='%1'").arg(trainnum));
	model->select();
}

//添加车站
void StationDlg::on_pushButton_clicked()
{
    AddStationDlg *a = new AddStationDlg;
    connect(this, SIGNAL(sendTrainnum_2(QString)), a, SLOT(getTrainnum_2(QString)));
    emit sendTrainnum_2(trainnum);

    a->exec();

    model->setFilter(QString("trainnum='%1'").arg(trainnum));
    model->select();
}

//删除车站，删除选中的一行信息
void StationDlg::on_pushButton_3_clicked()
{
    QSqlQuery query;
    int irow,icolum;
    irow = ui->tableView->currentIndex().row();
    icolum = ui->tableView->currentIndex().column();
    if(irow == -1){
        QMessageBox::warning(0, "删除失败", "请选择需要删除的行", QMessageBox::Cancel);
    }
    else{
        QString str_del = model->data(model->index(irow,1)).toString();
        query.exec(QString("delete from stationinfo where trainnum='%1' and passstation='%2'")
            .arg(trainnum)
            .arg(str_del));
        QMessageBox::about(NULL, "删除成功", "删除成功");
    }
    model->setFilter(QString("trainnum='%1'").arg(trainnum));
    model->select();
}


//修改车站，修改选中的单元中的信息
void StationDlg::on_pushButton_2_clicked()
{
    int irow,icolum;
    irow = ui->tableView->currentIndex().row();
    icolum = ui->tableView->currentIndex().column();
    if(irow == -1 || icolum == -1){
        QMessageBox::warning(0, "修改失败", "请选择需要修改的单元", QMessageBox::Cancel);
    }
    else if(icolum < 2){
        QMessageBox::warning(0, "修改失败", "所选内容不能修改！", QMessageBox::Cancel);
    }
    else{
        ModifyStationDlg *m = new ModifyStationDlg;

        connect(this, SIGNAL(sendTrainnum_3(QString)), m, SLOT(getStationTrainnum(QString)));
        connect(this, SIGNAL(sendModifyNum(int)), m, SLOT(getModifyNum(int)));
        connect(this, SIGNAL(sendStationPassstation(QString)), m, SLOT(getStationPassstation(QString)));
        QString str_passstation = model->data(model->index(irow,1)).toString();
        emit sendTrainnum_3(trainnum);
        emit sendModifyNum(icolum);
        emit sendStationPassstation(str_passstation);

        m->exec();
    }
    model->setFilter(QString("trainnum='%1'").arg(trainnum));
    model->select();
}
