#include "CClampTabWidget.h"
#include "ui_CClampTabWidget.h"

CClampTabWidget::CClampTabWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CClampTabWidget)
{
    ui->setupUi(this);
    ui->clampWidget->tabBar()->setUsesScrollButtons(false); // 如果不需要滚动按钮，可以设置为false
}

CClampTabWidget::~CClampTabWidget()
{
    delete ui;
}
