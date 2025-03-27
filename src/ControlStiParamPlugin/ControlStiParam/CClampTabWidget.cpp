#include "CClampTabWidget.h"
#include "ui_CClampTabWidget.h"

CClampTabWidget::CClampTabWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CClampTabWidget)
{
    ui->setupUi(this);
    ui->clampWidget->tabBar()->setUsesScrollButtons(false); // 如果不需要滚动按钮，可以设置为false


    //默认值设置
    ui->offsetSpinBox->setValue(0.0);
    ui->offsetSpinBox->setSingleStep(0.1);
    ui->offsetSpinBox->setRange(-250.0,250.0);

    ui->cOffsetSpinBox->setValue(0.0);
    ui->cOffsetSpinBox->setSingleStep(0.1);
    ui->cOffsetSpinBox->setRange(-250.0,250.0);

    ui->vMimDoubleSpinBox->setValue(0.0);
    ui->vMimDoubleSpinBox->setSingleStep(0.1);
    ui->vMimDoubleSpinBox->setRange(-750.0,750.0);

    ui->cMimDoubleSpinBox->setValue(0.0);
    ui->cMimDoubleSpinBox->setSingleStep(0.1);
    ui->cMimDoubleSpinBox->setRange(-750.0,750.0);

    ui->magSpinBox->setValue(5.0);
    ui->magSpinBox->setSingleStep(0.1);
    ui->magSpinBox->setRange(0,200);

    ui->TauSpinBox->setValue(4.0);
    ui->TauSpinBox->setSingleStep(0.1);
    ui->TauSpinBox->setRange(1,10);

    ui->cmSpinBox->setValue(30.0);
    ui->cmSpinBox->setSingleStep(0.1);
    ui->cmSpinBox->setRange(0.1,500);

    ui->rsSpinBox->setValue(10.0);
    ui->rsSpinBox->setSingleStep(0.1);
    ui->rsSpinBox->setRange(0.1,100);

    ui->currSpinBox->setValue(76);
    ui->currSpinBox->setRange(0,99);

    ui->lagSpinBox->setValue(10.0);
    ui->lagSpinBox->setSingleStep(0.1);
    ui->lagSpinBox->setRange(1,100);

    ui->cMagSpinBox->setValue(0.0);
    ui->cMagSpinBox->setSingleStep(0.1);
    ui->cMagSpinBox->setRange(0,20);

    ui->cPercSpinBox->setValue(100);
    ui->cPercSpinBox->setRange(0,200);

    ui->cAmplSpinBox->setRange(0,1000);
    ui->cDurSpinBox->setRange(20,1000);
}

CClampTabWidget::~CClampTabWidget()
{
    delete ui;
}
