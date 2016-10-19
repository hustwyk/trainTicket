#include "stationdlg.h"
#include "ui_stationdlg.h"
#include "admindlg.h"

StationDlg::StationDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StationDlg)
{
    ui->setupUi(this);

    model->setTable("stationinfo");
    QStringList headerList = { "车次", "车站", "车站代码","上一站","到站时间","离站时间","软卧余票","硬卧余票","硬座余票","无座余票","软卧票价","硬卧票价","硬座票价" };
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

void StationDlg::getTrainnum(QString s)
{
    trainnum = s;
	//QMessageBox::warning(0, "tips3", this->trainnum, QMessageBox::Cancel);
	ui->groupBox->setTitle(trainnum + QString("车站信息表"));
	model->setFilter(QString("trainnum='%1'").arg(trainnum));
	model->select();
}

