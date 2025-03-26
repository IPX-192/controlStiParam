#ifndef CCONTROLSTIPARAMPLUGIN_H
#define CCONTROLSTIPARAMPLUGIN_H

#include "Plugin/IPlugin.h"

using namespace Plugin;

QT_BEGIN_NAMESPACE

#define pluginInterface_iid "tme.com.soft.controlstiparamplugin"

Q_DECLARE_INTERFACE(IPlugin, pluginInterface_iid)

QT_END_NAMESPACE

class CControlStiParamPlugin : public IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID pluginInterface_iid FILE "controlstiparamplugin.json")
    Q_INTERFACES(IPlugin)
public:
    CControlStiParamPlugin();

public:
    bool registerComponentInfo();
};

#endif // CCONTROLSTIPARAMPLUGIN_H
