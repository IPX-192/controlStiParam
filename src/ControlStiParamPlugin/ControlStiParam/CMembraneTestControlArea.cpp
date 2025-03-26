#include "CMembraneTestControlArea.h"
#include<QFile>
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

void CMembraneTestControlArea::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    ui->full_tab->tabBar()->setExpanding(true);
    ui->full_tab->tabBar()->setUsesScrollButtons(false); // 如果不需要滚动按钮，可以设置为false
}

