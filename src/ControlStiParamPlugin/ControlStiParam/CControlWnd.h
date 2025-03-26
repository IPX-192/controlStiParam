#ifndef CCONTROLWND_H
#define CCONTROLWND_H

#include <QWidget>
#include"ui_CControlWnd.h"
namespace Ui {
class CControlWnd;
}

class CControlWnd : public QWidget
{
    Q_OBJECT

public:
    explicit CControlWnd(QWidget *parent = nullptr);
    ~CControlWnd();
protected:
    void resizeEvent(QResizeEvent *event);
private:
    Ui::controlWnd *ui;
};

#endif // CCONTROLWND_H
