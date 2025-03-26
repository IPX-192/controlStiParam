/********************************************************************************
** Form generated from reading UI file 'CControlWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCONTROLWND_H
#define UI_CCONTROLWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "CClampTabWidget.h"

QT_BEGIN_NAMESPACE

class Ui_controlWnd
{
public:
    QGridLayout *gridLayout;
    QTabWidget *probeTabWidget;
    CClampTabWidget *probe1Tab;
    CClampTabWidget *probe2Tab;

    void setupUi(QWidget *controlWnd)
    {
        if (controlWnd->objectName().isEmpty())
            controlWnd->setObjectName(QString::fromUtf8("controlWnd"));
        controlWnd->resize(256, 916);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(controlWnd->sizePolicy().hasHeightForWidth());
        controlWnd->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(controlWnd);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        probeTabWidget = new QTabWidget(controlWnd);
        probeTabWidget->setObjectName(QString::fromUtf8("probeTabWidget"));
        probeTabWidget->setLayoutDirection(Qt::LeftToRight);
        probeTabWidget->setElideMode(Qt::ElideLeft);
        probe1Tab = new CClampTabWidget();
        probe1Tab->setObjectName(QString::fromUtf8("probe1Tab"));
        probeTabWidget->addTab(probe1Tab, QString());
        probe2Tab = new CClampTabWidget();
        probe2Tab->setObjectName(QString::fromUtf8("probe2Tab"));
        probeTabWidget->addTab(probe2Tab, QString());

        gridLayout->addWidget(probeTabWidget, 0, 0, 1, 1);


        retranslateUi(controlWnd);

        probeTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(controlWnd);
    } // setupUi

    void retranslateUi(QWidget *controlWnd)
    {
        controlWnd->setWindowTitle(QCoreApplication::translate("controlWnd", "Form", nullptr));
        probeTabWidget->setTabText(probeTabWidget->indexOf(probe1Tab), QCoreApplication::translate("controlWnd", "\346\216\242\345\244\2641", nullptr));
        probeTabWidget->setTabText(probeTabWidget->indexOf(probe2Tab), QCoreApplication::translate("controlWnd", "\346\216\242\345\244\2642", nullptr));
    } // retranslateUi

};

namespace Ui {
    class controlWnd: public Ui_controlWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCONTROLWND_H
