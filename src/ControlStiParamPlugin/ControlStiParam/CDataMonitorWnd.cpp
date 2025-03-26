#include "CDataMonitorWnd.h"
#include "ui_CDataMonitorWnd.h"
#include<QFile>
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

    QVector<QString> vecHeaderStr = {u8"通道", u8"l-mon\n(mV)", u8"V-mon\n(pA)"};

    setHeaderText(0, 0, vecHeaderStr);


}

CDataMonitorWnd::~CDataMonitorWnd()
{
    delete ui;
}

void CDataMonitorWnd::setHeaderText(const int &row, const int &col, const QVector<QString> &vecConetent)
{
    // ui->dataMonitorTableView->setHeaderText(row,col,vecConetent);

}
