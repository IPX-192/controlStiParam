#ifndef CDATAMONITORPANEL_H
#define CDATAMONITORPANEL_H

#include <QObject>
#include <vector>
#include "TableView/CTableViewBasic.h"

class CDataMonitorPanel : public CTableViewBasic
{
    Q_OBJECT
public:
    CDataMonitorPanel(QWidget *parentWidget);

    virtual ~CDataMonitorPanel();
    /***************************************
    * \brief      用户个性化设置，子类可以继承在表格中操作
    ***************************************/
    virtual void customInit() override;
    void displayResultData();
};

#endif // CDATAMONITORPANEL_H
