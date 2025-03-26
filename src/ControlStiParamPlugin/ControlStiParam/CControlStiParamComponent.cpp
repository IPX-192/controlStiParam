#include "CControlStiParamComponent.h"
#include<QFile>
QString CControlStiParamComponent::loadQSS()
{
    QFile file(":/Style/base_new.css");
    file.open(QFile::ReadOnly);
    QString style = file.readAll();
    file.close();
    return style;
}

CControlStiParamComponent::CControlStiParamComponent(Plugin::CComponentInfo &info, QWidget *parent):
    Plugin::CExpComponent(info, parent)
{
    loadLogicForm();

    discoverAllPins();

    relayoutPins();


    m_pControlParamWnd =  new CMembraneTestControlArea();

    m_pDisplayWidget = m_pControlParamWnd;

//    setStyleSheet(loadQSS());
}


CControlStiParamComponent::~CControlStiParamComponent()
{
    delete m_pControlParamWnd;
}

void CControlStiParamComponent::onRunStatusChanged()
{

}

void CControlStiParamComponent::onSettingExperiment(Experiment::CExperiment *pInExperiment)
{

}

void CControlStiParamComponent::show()
{
    m_pDisplayWidget->show();
}
