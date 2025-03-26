#ifndef CALLTABVIEW_H
#define CALLTABVIEW_H

#include <QWidget>
#include"CControlWnd.h"
#include"CParamWnd.h"
#include"CStimualteWnd.h"
#include"CFileListWnd.h"
#include"CDataMonitorWnd.h"
#include"ui_CMembraneTestControlArea.h"

#include"CMonitorWnd.h"
namespace Ui {
class CMembraneTestControlArea;
}

class CMembraneTestControlArea : public QWidget
{
    Q_OBJECT

    enum TABAREA{
        CONTROL,
        STIMULATE,
        PARAM
    };


public:
    explicit CMembraneTestControlArea(QWidget *parent = nullptr);
    ~CMembraneTestControlArea();

private slots:

    void on_full_tab_currentChanged(int index);

protected:
    void setWidgetToFillArea(QWidget* targetWidget, QWidget* widgetToFill);
    void resizeEvent(QResizeEvent *event);

private:

    void initUI();

private:
    Ui::MembraneTestControlArea *ui;
    CControlWnd* m_wndControl{nullptr};
    Param* m_wndParam{nullptr};
    sampleParamArea* m_wndSampleArea{nullptr};
    CFileListView* m_wndFileListArea{nullptr};
    CDataMonitorWnd* m_wndDataMonitor{nullptr};
    CMonitorWnd* m_wndMonitor{nullptr};
};

#endif // CALLTABVIEW_H
