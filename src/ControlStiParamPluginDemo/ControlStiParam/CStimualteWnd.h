#ifndef CSTIMUALTEWND_H
#define CSTIMUALTEWND_H

#include <QWidget>
#include"ui_CStimualteWnd.h"
namespace Ui {
class sampleParamArea;
}

class sampleParamArea : public QWidget
{
    Q_OBJECT

public:
    explicit sampleParamArea(QWidget *parent = nullptr);
    ~sampleParamArea();

signals:
    //发送刺激界面的参数
    void sigSetStimualteParams(QString name,double value);

private slots:


    void on_waveTypeComboBox_currentIndexChanged(int index);

    void on_model_RepInt_currentIndexChanged(int index);



private:
    Ui::stiParamWnd *ui;
};

#endif // CSTIMUALTEWND_H
