#ifndef CFILELISTWND_H
#define CFILELISTWND_H

#include <QWidget>
#include"ui_CFileListWnd.h"
namespace Ui {
class CFileListView;
}

class CFileListView : public QWidget
{
    Q_OBJECT

public:
    explicit CFileListView(QWidget *parent = nullptr);
    ~CFileListView();

private:
    Ui::fileListWnd *ui;
};

#endif // CFILELISTWND_H
