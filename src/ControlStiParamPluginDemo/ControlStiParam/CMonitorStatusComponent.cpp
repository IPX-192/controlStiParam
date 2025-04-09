#include "CMonitorStatusComponent.h"

#include<QFile>
QString CMonitorStatusComponent::loadQSS()
{
    QFile file(":/Style/base_new.css");
    file.open(QFile::ReadOnly);
    QString style = file.readAll();
    file.close();
    return style;
}


CMonitorStatusComponent::CMonitorStatusComponent(Plugin::CComponentInfo &info, QWidget *parent):
    Plugin::CExpComponent(info, parent)
{
    loadLogicForm();

    discoverAllPins();

    relayoutPins();


    m_pMonitorStatusWnd =  new CMonitorWnd;

    m_pDisplayWidget = m_pMonitorStatusWnd;

//    setStyleSheet(loadQSS());
}

CMonitorStatusComponent::~CMonitorStatusComponent()
{
    delete m_pMonitorStatusWnd;
}

void CMonitorStatusComponent::onRunStatusChanged()
{

}

void CMonitorStatusComponent::onSettingExperiment(Experiment::CExperiment *pInExperiment)
{

}

void CMonitorStatusComponent::show()
{
    m_pDisplayWidget->show();
}
