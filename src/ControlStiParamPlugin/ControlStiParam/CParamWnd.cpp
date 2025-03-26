#include "CParamWnd.h"
#include "ui_CParamWnd.h"
#include<QFile>
Param::Param(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chaParamWnd)
{
    setObjectName("chaParamWnd");
    ui->setupUi(this);
    QFile styleFile(":/Style/base.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    styleFile.close();

    this->setStyleSheet(styleSheet);
}

Param::~Param()
{
    delete ui;
}
