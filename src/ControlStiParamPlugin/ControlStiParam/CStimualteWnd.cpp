#include "CStimualteWnd.h"
#include "ui_CStimualteWnd.h"
#include<QFile>
sampleParamArea::sampleParamArea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stiParamWnd)
{
    ui->setupUi(this);
    QFile styleFile(":/Style/base.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    styleFile.close();

    this->setStyleSheet(styleSheet);
}

sampleParamArea::~sampleParamArea()
{
    delete ui;
}
