#ifndef CALLTABVIEW_H
#define CALLTABVIEW_H

#include <QWidget>
#include"CControlWnd.h"
#include"CParamWnd.h"
#include"CStimualteWnd.h"
#include"CDataMonitorWnd.h"
#include"ui_CMembraneTestControlArea.h"

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

    enum STAGE{
        BATH,
        SEAL,
        CELL
    };


public:
    explicit CMembraneTestControlArea(QWidget *parent = nullptr);
    ~CMembraneTestControlArea();

private slots:

    void on_full_tab_currentChanged(int index);

    void onRadioButtonToggled(bool checked);

    void on_pushButton_clicked();

    //接收来自电压钳或者电流钳的参数值
    void onSigSetClampParams(QString name,double value);

    //接收来自参数区的设置参数值
    void onSetStimualteParams(QString name,double value);

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
    CDataMonitorWnd* m_wndDataMonitor{nullptr};
    int m_iCurStage{STAGE::BATH};
    float m_fRpValue{10.0};
    float m_fRsealValue{100.0};
    float m_fRsValue{100.0};
    float m_fRmValue{0.0};
    float m_fCmValue{0.0};
};

#endif // CALLTABVIEW_H
