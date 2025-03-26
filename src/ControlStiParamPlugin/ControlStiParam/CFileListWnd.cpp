#include "CFileListWnd.h"
#include "ui_CFileListWnd.h"
#include<QFile>
CFileListView::CFileListView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fileListWnd)
{
    ui->setupUi(this);
    QFile styleFile(":/Style/base.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    styleFile.close();

    this->setStyleSheet(styleSheet);
}

CFileListView::~CFileListView()
{
    delete ui;
}
