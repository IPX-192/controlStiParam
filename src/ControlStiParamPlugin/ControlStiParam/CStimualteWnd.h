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

private:
    Ui::stiParamWnd *ui;
};

#endif // CSTIMUALTEWND_H
