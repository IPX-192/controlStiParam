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

    //默认值设置
    ui->amplitudeDoubleSpinBox->setValue(-100);
    ui->amplitudeDoubleSpinBox->setRange(-100,100);

    ui->wavewidthDoubleSpinBox->setValue(5);
    ui->wavewidthDoubleSpinBox->setRange(0.5,500);

    ui->amplitudeDoubleSpinBox_membranes->setValue(500);
    ui->amplitudeDoubleSpinBox_membranes->setRange(-1000,1000);

    ui->wavewidthDoubleSpinBox_membranes->setValue(500);
    ui->wavewidthDoubleSpinBox_membranes->setRange(10,10000);


}

sampleParamArea::~sampleParamArea()
{
    delete ui;
}
