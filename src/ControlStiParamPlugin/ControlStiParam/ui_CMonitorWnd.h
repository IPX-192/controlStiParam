/********************************************************************************
** Form generated from reading UI file 'CMonitorWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMONITORWND_H
#define UI_CMONITORWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QWidget>
#include "CDataMonitorWnd.h"
#include "CPatchTestWnd.h"

QT_BEGIN_NAMESPACE

class Ui_monitorWnd
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    CDataMonitorWnd *dataMonitorWnd;
    CPatchTestWnd *patchTestWnd;

    void setupUi(QWidget *monitorWnd)
    {
        if (monitorWnd->objectName().isEmpty())
            monitorWnd->setObjectName(QString::fromUtf8("monitorWnd"));
        monitorWnd->resize(312, 760);
        monitorWnd->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(monitorWnd);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(monitorWnd);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        dataMonitorWnd = new CDataMonitorWnd(groupBox);
        dataMonitorWnd->setObjectName(QString::fromUtf8("dataMonitorWnd"));

        gridLayout_2->addWidget(dataMonitorWnd, 0, 0, 1, 1);

        patchTestWnd = new CPatchTestWnd(groupBox);
        patchTestWnd->setObjectName(QString::fromUtf8("patchTestWnd"));

        gridLayout_2->addWidget(patchTestWnd, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 3);

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(monitorWnd);

        QMetaObject::connectSlotsByName(monitorWnd);
    } // setupUi

    void retranslateUi(QWidget *monitorWnd)
    {
        monitorWnd->setWindowTitle(QCoreApplication::translate("monitorWnd", "\347\233\221\350\247\206", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class monitorWnd: public Ui_monitorWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMONITORWND_H
