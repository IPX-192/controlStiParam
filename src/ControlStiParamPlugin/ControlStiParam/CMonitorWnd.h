#ifndef CMONITORWND_H
#define CMONITORWND_H

#include <QWidget>
#include"ui_CMonitorWnd.h"


namespace Ui {
class CMonitorWnd;
}

class CMonitorWnd : public QWidget
{
    Q_OBJECT

public:
    explicit CMonitorWnd(QWidget *parent = nullptr);
    ~CMonitorWnd();

private:
    Ui::monitorWnd *ui;
};

#endif // CMONITORWND_H
