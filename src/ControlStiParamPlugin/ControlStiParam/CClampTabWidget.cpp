#include "CClampTabWidget.h"
#include "ui_CClampTabWidget.h"
#include <QDebug>

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

    ui->cmDoubleSpinBox->setValue(35.0);
    ui->cmDoubleSpinBox->setSingleStep(0.1);
    ui->cmDoubleSpinBox->setRange(0.1,500.0);

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

    initialize();

}

CClampTabWidget::~CClampTabWidget()
{
    delete ui;
}

void CClampTabWidget::initialize()
{
    //值变化
    m_mapValidValueFlags.insert("vMimDoubleSpinBox","vMenCheckBox");
    m_mapValidValueFlags.insert("offsetSpinBox","vOffsetCheckBox");
    m_mapValidValueFlags.insert("magSpinBox","vCpCheckBox");
    m_mapValidValueFlags.insert("TauSpinBox","vCpCheckBox");
    m_mapValidValueFlags.insert("cmDoubleSpinBox","vCmCheckBox");
    m_mapValidValueFlags.insert("rsSpinBox","vCmCheckBox");
    m_mapValidValueFlags.insert("currSpinBox","vRsCheckBox");
    m_mapValidValueFlags.insert("lagSpinBox","vRsCheckBox");
    m_mapValidValueFlags.insert("cMimDoubleSpinBox","cMenCheckBox");
    m_mapValidValueFlags.insert("cOffsetSpinBox","cOffsetCheckBox");
    m_mapValidValueFlags.insert("cMagSpinBox","cCpCheckBox");
    m_mapValidValueFlags.insert("cPercSpinBox","cBridgeCheckBox");
    m_mapValidValueFlags.insert("cAmplSpinBox","cBridgeCheckBox");
    m_mapValidValueFlags.insert("cDurSpinBox","cBridgeCheckBox");


    //查找所有参数的启用状态
    for (QCheckBox *checkbox : findChildren<QCheckBox*>())
    {
        connect(checkbox, &QCheckBox::stateChanged, [=](int state)
                {
                    bool isChecked = (state == Qt::Checked);

                    QString name = checkbox->objectName();
                    m_mapEnabledStates[name] = (state == Qt::Checked); // 更新状态
                    //如果取消启用，则下发0
                    if(!isChecked)
                    {
                        QList<QString> keys = m_mapValidValueFlags.keys(name);
                        for (const QString &key : keys)
                        {
                            emit sigSetClampParams(key,0);
                        }
                    }
                });
    }

    //查找所有控制区的参数设置
    for (QDoubleSpinBox *spinBox : findChildren<QDoubleSpinBox*>())
    {
        connect(spinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
                [this, spinBox](double value)
                {
                    QString name = spinBox->objectName();

                    //判断是否是更改的有效值下发
                    if(m_mapEnabledStates.value(m_mapValidValueFlags.value(name)))
                    {
                        if (qAbs(value) < 1e-10)
                        {
                            value = 0.0;
                        }
                        m_mapClampControlParams[name] = value;

                        emit sigSetClampParams(name,value);
                    }
                    else
                    {
                        qDebug()<<u8"没启用";
                    }
                });
    }

    //查找所有auto的参数
    for (QPushButton *pushBtn : findChildren<QPushButton*>())
    {
        // 检查按钮文本是否包含 "auto"（不区分大小写）
        if (pushBtn->text().contains("Auto", Qt::CaseInsensitive))
        {
            connect(pushBtn, &QPushButton::clicked, [this, pushBtn]()
                    {
                        // 在这里处理点击事件
                        qDebug() << "Auto button clicked!" << pushBtn->objectName();;
                    });
        }
    }
}

//点击auto之后首先是启用
void CClampTabWidget::on_vOffsetAuto_clicked()
{
    ui->vOffsetCheckBox->setChecked(true);
}

void CClampTabWidget::on_vCpAuto_clicked()
{
    ui->vCpCheckBox->setChecked(true);
}

void CClampTabWidget::on_vCmAuto_clicked()
{
    ui->vCmCheckBox->setChecked(true);
}

void CClampTabWidget::on_vRsAuto_clicked()
{
    ui->vRsCheckBox->setChecked(true);
}

void CClampTabWidget::on_cOffsetAuto_clicked()
{
    ui->cOffsetCheckBox->setChecked(true);
}

void CClampTabWidget::on_cCpAuto_clicked()
{
    ui->cCpCheckBox->setChecked(true);
}

void CClampTabWidget::on_cBridgeCheckAuto_clicked()
{
    ui->cBridgeCheckBox->setChecked(true);
}

