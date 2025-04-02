#ifndef CDATAMONITORWND_H
#define CDATAMONITORWND_H

#include <QWidget>
#include"ui_CDataMonitorWnd.h"
namespace Ui {
class CDataMonitorWnd;
}

class CDataMonitorWnd : public QWidget
{
    Q_OBJECT

public:
    explicit CDataMonitorWnd(QWidget *parent = nullptr);
    ~CDataMonitorWnd();

public:
    void setHeaderText(const int &row, const int &col, const QVector<QString> &vecConetent, bool bHorizontal);

    void setText(const int &row, const int &col, const QVector<QString> &vecData);

    void test();

protected:

private:
    Ui::dataMonitorWnd *ui;
};

#endif // CDATAMONITORWND_H
