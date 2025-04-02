#include "CControlWnd.h"
#include "ui_CControlWnd.h"
#include<QTabBar>
#include<QFile>
CControlWnd::CControlWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::controlWnd)
{
    ui->setupUi(this);
    QFile styleFile(":/Style/base.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    styleFile.close();

    this->setStyleSheet(styleSheet);
    setObjectName("controlWnd");

    ui->probeTabWidget->tabBar()->setUsesScrollButtons(false); // 如果不需要滚动按钮，可以设置为false
    ui->probeTabWidget->tabBar()->setExpanding(true);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QTabBar* tabBar = ui->probeTabWidget->tabBar();
    QSizePolicy sizePolicy = tabBar->sizePolicy();
    sizePolicy.setHorizontalPolicy(QSizePolicy::Expanding);
    sizePolicy.setVerticalPolicy(QSizePolicy::Preferred);
    tabBar->setSizePolicy(sizePolicy);
}

CControlWnd::~CControlWnd()
{
    delete ui;
}

CClampTabWidget* CControlWnd::getClampTab()
{
    if(ui->probe1Tab != nullptr)
    {
        return ui->probe1Tab;
    }
}

void CControlWnd::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    ui->probeTabWidget->tabBar()->setUsesScrollButtons(false); // 如果不需要滚动按钮，可以设置为false


}
