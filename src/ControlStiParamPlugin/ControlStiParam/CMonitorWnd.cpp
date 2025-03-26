#include "CMonitorWnd.h"
#include<QFile>
CMonitorWnd::CMonitorWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::monitorWnd)
{
    ui->setupUi(this);
    QFile styleFile(":/Style/base.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    styleFile.close();

    this->setStyleSheet(styleSheet);
}

CMonitorWnd::~CMonitorWnd()
{
    delete ui;
}
