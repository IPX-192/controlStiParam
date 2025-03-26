#ifndef CCONTROLSTIPARAMCOMPONENT_H
#define CCONTROLSTIPARAMCOMPONENT_H

#include "Plugin/CExpComponent.h"
#include"ControlStiParam_global.h"
#include"CMembraneTestControlArea.h"

class   CONTROLSTIPARAM_EXPORT CControlStiParamComponent : public Plugin::CExpComponent
{
    Q_OBJECT
public:
    CControlStiParamComponent(Plugin::CComponentInfo &info, QWidget *parent = nullptr);
    virtual ~CControlStiParamComponent();

    /***************************************
     * \brief	响应实验状态变化：开始，暂停，停止
     *
     ***************************************/
    void onRunStatusChanged() override;

public slots:
    /***************************************
     * \brief	接受信号选择，实验模块或文件中的实验信息进行保存
     *
     ***************************************/
    void onSettingExperiment(Experiment::CExperiment *pInExperiment) override;

    void show();

protected:
    QString loadQSS();

private:
    CMembraneTestControlArea* m_pControlParamWnd{nullptr};
};

#endif // CCONTROLSTIPARAMCOMPONENT_H
