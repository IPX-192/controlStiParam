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

    connect(m_pControlParamWnd,&CMembraneTestControlArea::sigControlChannelSFR,this,&CControlStiParamComponent::sigControlChannelSFR);

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
    m_pExperiment = pInExperiment;
}

void CControlStiParamComponent::show()
{
    m_pDisplayWidget->show();
}

void CControlStiParamComponent::onUpdateChannelSFR(std::map<unsigned int, float> mapParams)
{
    for (const auto& pair : mapParams)
    {
        m_pControlParamWnd->updateChannelSFR(pair.first,pair.second);
    }
}

void CControlStiParamComponent::setExperimentPara(QVariantMap varParams)
{
    if(m_pExperiment != nullptr)
    {
        m_pExperiment->setStimulateParameter(CExpStimulateParameter::create(varParams));
    }
}
