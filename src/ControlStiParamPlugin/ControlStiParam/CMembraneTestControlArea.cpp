#include "CMembraneTestControlArea.h"
#include <QFile>
#include <QDebug>
#pragma execution_character_set("utf-8")
CMembraneTestControlArea::CMembraneTestControlArea(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MembraneTestControlArea)
{

    ui->setupUi(this);

    QFile styleFile(":/Style/base.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    styleFile.close();

    this->setStyleSheet(styleSheet);

    initUI();

}


CMembraneTestControlArea::~CMembraneTestControlArea()
{
    delete ui;
}

void CMembraneTestControlArea::updateChannelSFR(unsigned int addr, float value)
{
    qDebug()<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< updateChannelSFR addr  " << addr << "<<< " << value;
    //1.更新表格
    if(addr == 0x20)
    {
        m_fRpValue = value;
        updateDataMonitor();
    }
    else if(addr == 0x22)
    {
        m_fRsealValue = value;
        updateDataMonitor();
    }

    else
    {
        QString strKey;  // 存储找到的 key
        if(m_wndControl != nullptr)
        {
            for (auto it = m_mapRecvSFR.begin(); it != m_mapRecvSFR.end(); ++it) {
                if (it.value() == addr) {
                    strKey = it.key();
                    break;
                }
            }

            if(!strKey.isEmpty())
            {
                m_wndControl->getClampTab()->updateClampParams(strKey,value);
            }
        }
    }
}

void CMembraneTestControlArea::setWidgetToFillArea(QWidget* targetWidget, QWidget* widgetToFill)
{
    if (!targetWidget || !widgetToFill)
    {
        return;
    }

    // widgetToFill没有被其他父控件管理
    if (widgetToFill->parent() != targetWidget)
    {
        widgetToFill->setParent(targetWidget);
    }

    // 确保targetWidget有一个布局管理器，并且没有重复设置
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(targetWidget->layout());
    if (!layout)
    {
        layout = new QVBoxLayout(targetWidget);
        targetWidget->setLayout(layout);
    } else
    {
        // 清除布局中的所有旧widget
        QLayoutItem* item;
        while ((item = layout->takeAt(0)) != nullptr)
        {
            if (item->widget())
            {
                item->widget()->setParent(nullptr); // 移除widget的父控件
            }
        }
    }

    // 设置布局的边距为0
    layout->setContentsMargins(0, 0, 0, 0);

    // 布局中组件之间的间隔为0
    layout->setSpacing(0);

    // 将widgetToFill添加到布局中，并设置其填充整个空间
    layout->addWidget(widgetToFill);

    // 设置widgetToFill的拉伸因子
    layout->setStretchFactor(widgetToFill, 1);

    // 设置widgetToFill的大小策略，使其能够填满父控件
    widgetToFill->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}


void CMembraneTestControlArea::initUI()
{
    if (nullptr == m_wndControl)
    {
        m_wndControl = new CControlWnd(this); // 创建Control实例
    }
    this->setWindowTitle(u8"膜测试控制区");

    ui->controlWidget = m_wndControl;

    setWidgetToFillArea(ui->full_tab->currentWidget(), ui->controlWidget);

    ui->full_tab->tabBar()->setCurrentIndex(0);

    ui->model_Range->addItems(QStringList() << "20nA/500M"<<"200nA/50M");

    // 连接所有 RadioButton 的信号槽
    connect(ui->radioBtnBath, &QRadioButton::toggled, this, &CMembraneTestControlArea::onRadioButtonToggled);
    connect(ui->radioBtnSeal, &QRadioButton::toggled, this, &CMembraneTestControlArea::onRadioButtonToggled);
    connect(ui->radioBtnCell, &QRadioButton::toggled, this, &CMembraneTestControlArea::onRadioButtonToggled);

    //填充下发命令容器
    m_mapSendSFR.insert("vOffsetAuto",0x02);
    m_mapSendSFR.insert("offsetSpinBox",0x03);
    m_mapSendSFR.insert("vCpAuto",0x04);
    m_mapSendSFR.insert("vCmAuto",0x09);
    m_mapSendSFR.insert("vRsAuto",0x16);


    m_mapSendSFR.insert("cOffsetAuto",0x02);
    m_mapSendSFR.insert("cOffsetSpinBox",0x03);
    // m_mapSendSFR.insert("cCpAuto",0x04);
    m_mapSendSFR.insert("cBridgeCheckAuto",0x33);

    m_mapSendSFR.insert("magSpinBox",0x05);
    m_mapSendSFR.insert("TauSpinBox",0x06);
    m_mapSendSFR.insert("rsSpinBox",0x10);
    m_mapSendSFR.insert("cmDoubleSpinBox",0x11);
    m_mapSendSFR.insert("currSpinBox",0x17);
    m_mapSendSFR.insert("lagSpinBox",0x18);

    m_mapSendSFR.insert("cPercSpinBox",0x32);
    m_mapSendSFR.insert("vLiquidSpinBox",0x34);


    //填充上传命令容器
    m_mapRecvSFR.insert("offsetSpinBox",0x03);
    m_mapRecvSFR.insert("magSpinBox",0x05);
    m_mapRecvSFR.insert("TauSpinBox",0x06);
    m_mapRecvSFR.insert("rsSpinBox",0x10);
    m_mapRecvSFR.insert("rsSpinBox",0x12);
    m_mapRecvSFR.insert("cmDoubleSpinBox",0x11);
    m_mapRecvSFR.insert("cmDoubleSpinBox",0x13);
    m_mapRecvSFR.insert("currSpinBox",0x17);
    m_mapRecvSFR.insert("lagSpinBox",0x18);
    m_mapRecvSFR.insert("cPercSpinBox",0x32);
}

void CMembraneTestControlArea::sendControlChannelSFR(unsigned int addr, float value)
{
    std::map<unsigned int,float> mapParams;
    mapParams.insert(std::make_pair(addr, value));  // 正确插入方式
    emit sigControlChannelSFR(mapParams);
}

void CMembraneTestControlArea::updateDataMonitor()
{
    QVector<QString> vecTemp;
    if(m_iCurStage == STAGE::BATH)
    {
        vecTemp<<u8"Rp\n(MΩ)"<<QString::number(m_fRpValue, 'f', 1);
        ui->dataMonitorWidget->setText(0,0,vecTemp);
        vecTemp.clear();
        vecTemp<<u8"Rm\n(MΩ)"<<"OFF";
        ui->dataMonitorWidget->setText(1,0,vecTemp);
        vecTemp.clear();
        vecTemp<<u8"Cm\n(pF)"<<"OFF";
        ui->dataMonitorWidget->setText(2,0,vecTemp);
    }
    else if(m_iCurStage == STAGE::SEAL)
    {
        vecTemp<<u8"Rseal\n(MΩ)"<<QString::number(m_fRsealValue, 'f', 1);
        ui->dataMonitorWidget->setText(0,0,vecTemp);
        vecTemp.clear();
        vecTemp<<u8"Rm\n(MΩ)"<<"OFF";
        ui->dataMonitorWidget->setText(1,0,vecTemp);
        vecTemp.clear();
        vecTemp<<u8"Cm\n(pF)"<<"OFF";
        ui->dataMonitorWidget->setText(2,0,vecTemp);
    }
    else
    {
        vecTemp<<u8"Rs\n(MΩ)"<<QString::number(m_fRsValue, 'f', 1);
        ui->dataMonitorWidget->setText(0,0,vecTemp);
        vecTemp.clear();
        vecTemp<<u8"Rm\n(MΩ)"<<QString::number(m_fRmValue, 'f', 1);
        ui->dataMonitorWidget->setText(1,0,vecTemp);
        vecTemp.clear();
        vecTemp<<u8"Cm\n(pF)"<<QString::number(m_fCmValue, 'f', 1);
        ui->dataMonitorWidget->setText(2,0,vecTemp);
    }
}

void CMembraneTestControlArea::on_full_tab_currentChanged(int index)
{
    switch(index)
    {
    case CONTROL:
        if (nullptr == m_wndControl)
        {
            m_wndControl = new CControlWnd(this); // 创建Control实例
        }
        this->setWindowTitle(u8"膜测试控制区");
        ui->controlWidget = m_wndControl;
        setWidgetToFillArea(ui->full_tab->currentWidget(), ui->controlWidget);
        connect(m_wndControl->getClampTab(),&CClampTabWidget::sigSetClampParams,this,&CMembraneTestControlArea::onSigSetClampParams);
        break;

    case STIMULATE:
        if(nullptr == m_wndSampleArea)
        {
            m_wndSampleArea = new sampleParamArea(this);
        }
        // 调用通用方法来设置m_wndControl填满ui->widget
        this->setWindowTitle(u8"采样参数区");
        ui->stiWidget = m_wndSampleArea;
        setWidgetToFillArea(ui->full_tab->currentWidget(), ui->stiWidget);
        connect(m_wndSampleArea,&sampleParamArea::sigSetStimualteParams,this,&CMembraneTestControlArea::onSetStimualteParams);
        break;

    case PARAM:
        if(nullptr == m_wndParam)
        {
            m_wndParam = new Param(this);
        }
        this->setWindowTitle(u8"采样参数区");
        ui->paramWidget=m_wndParam;
        setWidgetToFillArea(ui->full_tab->currentWidget(), ui->paramWidget);
        break;
    }
}

void CMembraneTestControlArea::onRadioButtonToggled(bool checked)
{
    QRadioButton *senderRadio = qobject_cast<QRadioButton*>(sender());
    if (checked && senderRadio) {
        qDebug() << "选中了：" << senderRadio->text();
        if(senderRadio->text() == "BATH")
        {
            m_iCurStage = STAGE::BATH;
        }
        else if(senderRadio->text() == "SEAL")
        {
            m_iCurStage = STAGE::SEAL;
        }
        else
        {
            m_iCurStage = STAGE::CELL;
        }
    }
}

void CMembraneTestControlArea::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    ui->full_tab->tabBar()->setExpanding(true);
    ui->full_tab->tabBar()->setUsesScrollButtons(false); // 如果不需要滚动按钮，可以设置为false
}

void CMembraneTestControlArea::onSigSetClampParams(QString name, double value)
{
    qDebug()<<"dddddd1"<<m_mapSendSFR.value(name) << "sssssssssrrr1 "<<value;
    sendControlChannelSFR(m_mapSendSFR.value(name),value);

}

void CMembraneTestControlArea::onSetStimualteParams(QString name, double value)
{
    qDebug()<<"dddddd2  "<<name << "sssssssssrrr2 "<<value;
}

void CMembraneTestControlArea::on_model_Range_currentIndexChanged(int index)
{
    m_iCurRange = index;

    if(m_iCurRange == RANGE_500M)
    {
        m_mapSendSFR["rsSpinBox"] = 0x10;
        m_mapSendSFR["cmDoubleSpinBox"] = 0x11;

    }
    else
    {
        m_mapSendSFR["rsSpinBox"] = 0x12;
        m_mapSendSFR["cmDoubleSpinBox"] = 0x13;
    }
}

void CMembraneTestControlArea::on_StartBtn_clicked()
{
    sendControlChannelSFR(0x26,1);
}

void CMembraneTestControlArea::on_StopBtn_clicked()
{
    sendControlChannelSFR(0x26,1);
}

void CMembraneTestControlArea::on_ResetBtn_clicked()
{
    sendControlChannelSFR(0x01,1);
}

