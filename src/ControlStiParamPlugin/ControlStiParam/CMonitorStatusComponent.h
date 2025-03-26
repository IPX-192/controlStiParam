#ifndef CMONITORSTATUSCOMPONENT_H
#define CMONITORSTATUSCOMPONENT_H

#include "Plugin/CExpComponent.h"
#include"CMonitorWnd.h"
#include <QObject>
#include"ControlStiParam_global.h"

class CONTROLSTIPARAM_EXPORT CMonitorStatusComponent : public Plugin::CExpComponent
{
    Q_OBJECT
public:
    CMonitorStatusComponent(Plugin::CComponentInfo &info, QWidget *parent = nullptr);

    virtual ~CMonitorStatusComponent();

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

private:
    CMonitorWnd* m_pMonitorStatusWnd{nullptr};

    QString loadQSS();
};

#endif // CMONITORSTATUSCOMPONENT_H
