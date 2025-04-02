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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "CDataMonitorPanel.h"

QT_BEGIN_NAMESPACE

class Ui_dataMonitorWnd
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    CDataMonitorPanel *dataMonitorTableView;

    void setupUi(QWidget *dataMonitorWnd)
    {
        if (dataMonitorWnd->objectName().isEmpty())
            dataMonitorWnd->setObjectName(QString::fromUtf8("dataMonitorWnd"));
        dataMonitorWnd->resize(280, 220);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dataMonitorWnd->sizePolicy().hasHeightForWidth());
        dataMonitorWnd->setSizePolicy(sizePolicy);
        dataMonitorWnd->setMinimumSize(QSize(0, 0));
        dataMonitorWnd->setMaximumSize(QSize(16777215, 220));
        gridLayout = new QGridLayout(dataMonitorWnd);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(dataMonitorWnd);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        dataMonitorTableView = new CDataMonitorPanel(groupBox);
        dataMonitorTableView->setObjectName(QString::fromUtf8("dataMonitorTableView"));
        dataMonitorTableView->setMaximumSize(QSize(16777215, 220));
        dataMonitorTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_2->addWidget(dataMonitorTableView, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(dataMonitorWnd);

        QMetaObject::connectSlotsByName(dataMonitorWnd);
    } // setupUi

    void retranslateUi(QWidget *dataMonitorWnd)
    {
        dataMonitorWnd->setWindowTitle(QCoreApplication::translate("dataMonitorWnd", "\346\225\260\346\215\256\347\233\221\350\247\206", nullptr));
        groupBox->setTitle(QCoreApplication::translate("dataMonitorWnd", "\346\225\260\346\215\256\347\233\221\350\247\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataMonitorWnd: public Ui_dataMonitorWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDATAMONITORWND_H
