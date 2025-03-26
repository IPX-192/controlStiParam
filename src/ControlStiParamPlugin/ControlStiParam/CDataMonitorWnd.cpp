#include "CDataMonitorWnd.h"
#include "ui_CDataMonitorWnd.h"
#include<QFile>
#include<QDebug>
#pragma execution_character_set("utf-8")
CDataMonitorWnd::CDataMonitorWnd(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dataMonitorWnd)
{
    ui->setupUi(this);
    QFile styleFile(":/Style/base.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    styleFile.close();

    this->setStyleSheet(styleSheet);

    QVector<QString> vecHorizontalHeaderStr = {u8"探头1", u8"探头2"};
    QVector<QString> vecVerticalHeaderStr = {u8"Rreal\n(GΩ)", u8"Rs\n(MΩ)", u8"Rm\n(MΩ)", u8"Cm\n(pF)"};

    setHeaderText(0, 0, vecHorizontalHeaderStr, true);
    setHeaderText(0, 0, vecVerticalHeaderStr, false);

    this->setStyleSheet("#dataMonitorTableView {"
                        "   alternate-background-color: #535353;" // tableView1 双行颜色
                        "   background-color: #4a4a4a;" // tableView1 单行颜色
                        "}"
                        );


}

CDataMonitorWnd::~CDataMonitorWnd()
{
    delete ui;
}


void CDataMonitorWnd::setHeaderText(const int &row, const int &col, const QVector<QString> &vecConetent, bool bHorizontal)
{
    //暂时不显示垂直表头
    ui->dataMonitorTableView->setDispColNumFlag(false);
    if(bHorizontal)
    {
        ui->dataMonitorTableView->setHeaderText(row,col+1,vecConetent, bHorizontal);
    }
    else
    {
        ui->dataMonitorTableView->setHeaderText(row+1,col,vecConetent, bHorizontal);
    }
}





