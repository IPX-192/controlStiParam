#ifndef CALLTABVIEW_H
#define CALLTABVIEW_H

#include <QWidget>
#include <QMap>
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

    enum RANGE{
        RANGE_500M,
        RANGE_50M
    };


public:
    explicit CMembraneTestControlArea(QWidget *parent = nullptr);
    ~CMembraneTestControlArea();


    void updateChannelSFR(unsigned int addr,float value);

private slots:

    void on_full_tab_currentChanged(int index);

    void onRadioButtonToggled(bool checked);

    //接收来自电压钳或者电流钳的参数值
    void onSigSetClampParams(QString name,double value);

    //接收来自参数区的设置参数值
    void onSetStimualteParams(QString name,double value);

    void on_model_Range_currentIndexChanged(int index);

    void on_StartBtn_clicked();

    void on_StopBtn_clicked();

    void on_ResetBtn_clicked();

protected:
    void setWidgetToFillArea(QWidget* targetWidget, QWidget* widgetToFill);
    void resizeEvent(QResizeEvent *event);

signals:
    void sigControlChannelSFR(std::map<unsigned int,float> mapParams);

private:

    void initUI();

    void sendControlChannelSFR(unsigned int addr,float value);

    void updateDataMonitor();

private:
    Ui::MembraneTestControlArea *ui;
    CControlWnd* m_wndControl{nullptr};
    Param* m_wndParam{nullptr};
    sampleParamArea* m_wndSampleArea{nullptr};
    CDataMonitorWnd* m_wndDataMonitor{nullptr};
    int m_iCurStage{STAGE::BATH};
    int m_iCurRange{RANGE::RANGE_500M};
    float m_fRpValue{10.0};
    float m_fRsealValue{100.0};
    float m_fRsValue{100.0};
    float m_fRmValue{0.0};
    float m_fCmValue{0.0};
    QMap<QString, unsigned int> m_mapSendSFR;

    QMultiMap<QString, unsigned int> m_mapRecvSFR;  //存储设置的参数是否有效
};

#endif // CALLTABVIEW_H
