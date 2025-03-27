/********************************************************************************
** Form generated from reading UI file 'CMembraneTestControlArea.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMEMBRANETESTCONTROLAREA_H
#define UI_CMEMBRANETESTCONTROLAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "CDataMonitorPanel.h"

QT_BEGIN_NAMESPACE

class Ui_MembraneTestControlArea
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    CDataMonitorPanel *dataMonitorTableView;
    QTabWidget *full_tab;
    QWidget *controlWidget;
    QWidget *stiWidget;
    QWidget *paramWidget;

    void setupUi(QWidget *MembraneTestControlArea)
    {
        if (MembraneTestControlArea->objectName().isEmpty())
            MembraneTestControlArea->setObjectName(QString::fromUtf8("MembraneTestControlArea"));
        MembraneTestControlArea->resize(402, 760);
        MembraneTestControlArea->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(MembraneTestControlArea);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        groupBox = new QGroupBox(MembraneTestControlArea);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dataMonitorTableView = new CDataMonitorPanel(groupBox);
        dataMonitorTableView->setObjectName(QString::fromUtf8("dataMonitorTableView"));
        dataMonitorTableView->setMinimumSize(QSize(0, 200));
        dataMonitorTableView->setMaximumSize(QSize(16777215, 195));
        dataMonitorTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(dataMonitorTableView);

        full_tab = new QTabWidget(groupBox);
        full_tab->setObjectName(QString::fromUtf8("full_tab"));
        full_tab->setTabPosition(QTabWidget::South);
        full_tab->setTabShape(QTabWidget::Rounded);
        controlWidget = new QWidget();
        controlWidget->setObjectName(QString::fromUtf8("controlWidget"));
        full_tab->addTab(controlWidget, QString());
        stiWidget = new QWidget();
        stiWidget->setObjectName(QString::fromUtf8("stiWidget"));
        full_tab->addTab(stiWidget, QString());
        paramWidget = new QWidget();
        paramWidget->setObjectName(QString::fromUtf8("paramWidget"));
        full_tab->addTab(paramWidget, QString());

        verticalLayout->addWidget(full_tab);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(MembraneTestControlArea);

        full_tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MembraneTestControlArea);
    } // setupUi

    void retranslateUi(QWidget *MembraneTestControlArea)
    {
        MembraneTestControlArea->setWindowTitle(QCoreApplication::translate("MembraneTestControlArea", "Form", nullptr));
        groupBox->setTitle(QString());
        full_tab->setTabText(full_tab->indexOf(controlWidget), QCoreApplication::translate("MembraneTestControlArea", "\346\216\247\345\210\266", nullptr));
        full_tab->setTabText(full_tab->indexOf(stiWidget), QCoreApplication::translate("MembraneTestControlArea", "\345\210\272\346\277\200", nullptr));
        full_tab->setTabText(full_tab->indexOf(paramWidget), QCoreApplication::translate("MembraneTestControlArea", "\345\217\202\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MembraneTestControlArea: public Ui_MembraneTestControlArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMEMBRANETESTCONTROLAREA_H
