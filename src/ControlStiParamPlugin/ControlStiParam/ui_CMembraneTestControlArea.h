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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "CDataMonitorWnd.h"

QT_BEGIN_NAMESPACE

class Ui_MembraneTestControlArea
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioBtnBath;
    QRadioButton *radioBtnSeal;
    QRadioButton *radioBtnCell;
    QPushButton *pushButton;
    QLabel *label;
    QComboBox *model_Range;
    CDataMonitorWnd *dataMonitorWidget;
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
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 5, 10, 10);
        groupBox = new QGroupBox(MembraneTestControlArea);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 5, 10, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioBtnBath = new QRadioButton(widget_2);
        radioBtnBath->setObjectName(QString::fromUtf8("radioBtnBath"));
        radioBtnBath->setChecked(true);

        verticalLayout_3->addWidget(radioBtnBath);

        radioBtnSeal = new QRadioButton(widget_2);
        radioBtnSeal->setObjectName(QString::fromUtf8("radioBtnSeal"));

        verticalLayout_3->addWidget(radioBtnSeal);

        radioBtnCell = new QRadioButton(widget_2);
        radioBtnCell->setObjectName(QString::fromUtf8("radioBtnCell"));

        verticalLayout_3->addWidget(radioBtnCell);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_3->addWidget(label);

        model_Range = new QComboBox(widget_2);
        model_Range->setObjectName(QString::fromUtf8("model_Range"));
        model_Range->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(model_Range);


        horizontalLayout->addWidget(widget_2);

        dataMonitorWidget = new CDataMonitorWnd(groupBox);
        dataMonitorWidget->setObjectName(QString::fromUtf8("dataMonitorWidget"));
        dataMonitorWidget->setMinimumSize(QSize(0, 240));

        horizontalLayout->addWidget(dataMonitorWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout);

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
        radioBtnBath->setText(QCoreApplication::translate("MembraneTestControlArea", "BATH", nullptr));
        radioBtnSeal->setText(QCoreApplication::translate("MembraneTestControlArea", "SEAL", nullptr));
        radioBtnCell->setText(QCoreApplication::translate("MembraneTestControlArea", "CELL", nullptr));
        pushButton->setText(QCoreApplication::translate("MembraneTestControlArea", "\350\260\203\350\257\225", nullptr));
        label->setText(QCoreApplication::translate("MembraneTestControlArea", "Range:", nullptr));
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
