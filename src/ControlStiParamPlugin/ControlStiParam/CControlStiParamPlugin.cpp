#include "CControlStiParamPlugin.h"
#include"CControlStiParamComponent.h"
//#include"CMonitorStatusComponent.h"
#include "Plugin/CComponentBuilder.h"

#include<QFile>

CControlStiParamPlugin::CControlStiParamPlugin()
{
    registerComponentInfo();

}

bool CControlStiParamPlugin::registerComponentInfo()
{
    bool bSuccess = true;

    bSuccess &= CComponentBuilder::registerClass<CControlStiParamComponent>(":/icon/resource/icon/Thumbnail.JPG", CComponentInfo::Category::Wnd, tr(u8"控制刺激参数测试版"));
    //bSuccess &= CComponentBuilder::registerClass<CMonitorStatusComponent>(":/icon/resource/icon/Thumbnail.JPG", CComponentInfo::Category::Wnd, tr(u8"状态监控"));

    return bSuccess;
}
