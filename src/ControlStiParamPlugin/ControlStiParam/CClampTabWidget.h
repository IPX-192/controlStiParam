#ifndef CCLAMPTABWIDGET_H
#define CCLAMPTABWIDGET_H

#include <QWidget>

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

private:
    Ui::CClampTabWidget *ui;
};

#endif // CCLAMPTABWIDGET_H
