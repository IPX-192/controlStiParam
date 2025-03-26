#include"CMembraneTestControlArea.h"
#include"CDataMonitorWnd.h"
#include"CMonitorWnd.h"
#include<QApplication>
#include<QFile>
#include<QString>

QString loadQSS()
{
    QFile file(":/Style/base.css");
    file.open(QFile::ReadOnly);
    QString style = file.readAll();
    file.close();
    return style;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(loadQSS());
    // CMembraneTestControlArea* p =new CMembraneTestControlArea;
    // p->show();
    CMonitorWnd* p =new CMonitorWnd;
    p->show();

    return a.exec();

}
