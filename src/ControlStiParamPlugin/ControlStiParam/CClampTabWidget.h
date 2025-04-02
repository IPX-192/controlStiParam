#ifndef CCLAMPTABWIDGET_H
#define CCLAMPTABWIDGET_H

#include <QWidget>
#include <QMap>
#include <QMultiMap>

namespace Ui {
class CClampTabWidget;
}

//电流钳、电压钳界面
class CClampTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CClampTabWidget(QWidget *parent = nullptr);
    ~CClampTabWidget();

    void initialize();

signals:
    void sigSetClampParams(QString name,double value);

    void sigSetClampAutoParams(QString name);

private slots:


    void on_vOffsetAuto_clicked();

    void on_vCpAuto_clicked();

    void on_vCmAuto_clicked();

    void on_vRsAuto_clicked();

    void on_cOffsetAuto_clicked();

    void on_cCpAuto_clicked();

    void on_cBridgeCheckAuto_clicked();


private:
    Ui::CClampTabWidget *ui;

    QMap<QString, bool> m_mapEnabledStates;  //存储启用状态

    QMap<QString, double> m_mapClampControlParams;  //存储控制区更改的参数

    QMultiMap<QString, QString> m_mapValidValueFlags;  //存储设置的参数是否有效

};

#endif // CCLAMPTABWIDGET_H
