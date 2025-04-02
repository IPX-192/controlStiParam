#include "CStimualteWnd.h"
#include "ui_CStimualteWnd.h"
#include<QFile>
#include<QDebug>

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

    ui->model_RepInt->addItems(QStringList() << "0.1s"<< "0.2s"<< "0.5s"<< "1.0s"<< "2.0s"<< "5.0s"<< "10s");

    for (QDoubleSpinBox *spinBox : findChildren<QDoubleSpinBox*>())
    {
        connect(spinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
                [this, spinBox](double value)
                {
                    QString name = spinBox->objectName();
                    if (qAbs(value) < 1e-10)
                    {
                        value = 0.0;
                    }

                    emit sigSetStimualteParams(name,value);
                });
    }
}

sampleParamArea::~sampleParamArea()
{
    delete ui;
}

void sampleParamArea::on_waveTypeComboBox_currentIndexChanged(int index)
{

}

void sampleParamArea::on_model_RepInt_currentIndexChanged(int index)
{
    QString text = ui->model_RepInt->currentText();
    text.remove('s');  // 移除所有的's'字符
    bool ok;
    float value = text.toFloat(&ok);
    if (ok)
    {
        value = round(value * 10) / 10;  // 保留一位小数
        qDebug() << "Processed value:" << value;
    }
    else
    {
        qDebug() << "Conversion failed";
    }

    emit sigSetStimualteParams("model_RepInt",value);
}

