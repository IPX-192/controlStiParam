/********************************************************************************
** Form generated from reading UI file 'CDataMonitorWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDATAMONITORWND_H
#define UI_CDATAMONITORWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "CDataMonitorPanel.h"

QT_BEGIN_NAMESPACE

class Ui_dataMonitorWnd
{
public:
    QGridLayout *gridLayout;
    CDataMonitorPanel *dataMonitorTableView;

    void setupUi(QWidget *dataMonitorWnd)
    {
        if (dataMonitorWnd->objectName().isEmpty())
            dataMonitorWnd->setObjectName(QString::fromUtf8("dataMonitorWnd"));
        dataMonitorWnd->resize(343, 220);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dataMonitorWnd->sizePolicy().hasHeightForWidth());
        dataMonitorWnd->setSizePolicy(sizePolicy);
        dataMonitorWnd->setMinimumSize(QSize(0, 0));
        dataMonitorWnd->setMaximumSize(QSize(16777215, 220));
        gridLayout = new QGridLayout(dataMonitorWnd);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(15, 15, 15, 15);
        dataMonitorTableView = new CDataMonitorPanel(dataMonitorWnd);
        dataMonitorTableView->setObjectName(QString::fromUtf8("dataMonitorTableView"));
        dataMonitorTableView->setMaximumSize(QSize(16777215, 195));
        dataMonitorTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(dataMonitorTableView, 0, 0, 1, 1);


        retranslateUi(dataMonitorWnd);

        QMetaObject::connectSlotsByName(dataMonitorWnd);
    } // setupUi

    void retranslateUi(QWidget *dataMonitorWnd)
    {
        dataMonitorWnd->setWindowTitle(QCoreApplication::translate("dataMonitorWnd", "\346\225\260\346\215\256\347\233\221\350\247\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataMonitorWnd: public Ui_dataMonitorWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDATAMONITORWND_H
