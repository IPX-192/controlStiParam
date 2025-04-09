#ifndef CPARAMWND_H
#define CPARAMWND_H

#include <QWidget>
#include"ui_CParamWnd.h"
namespace Ui {
class Param;
}

class Param : public QWidget
{
    Q_OBJECT

public:
    explicit Param(QWidget *parent = nullptr);
    ~Param();

private:
    Ui::chaParamWnd *ui;
};

#endif // CPARAMWND_H
