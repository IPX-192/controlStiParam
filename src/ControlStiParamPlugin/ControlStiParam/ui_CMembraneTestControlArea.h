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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MembraneTestControlArea
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTabWidget *full_tab;
    QWidget *controlWidget;
    QWidget *stiWidget;
    QWidget *paramWidget;
    QWidget *fileWidget;

    void setupUi(QWidget *MembraneTestControlArea)
    {
        if (MembraneTestControlArea->objectName().isEmpty())
            MembraneTestControlArea->setObjectName(QString::fromUtf8("MembraneTestControlArea"));
        MembraneTestControlArea->resize(259, 760);
        MembraneTestControlArea->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(MembraneTestControlArea);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(MembraneTestControlArea);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
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
        fileWidget = new QWidget();
        fileWidget->setObjectName(QString::fromUtf8("fileWidget"));
        full_tab->addTab(fileWidget, QString());

        gridLayout->addWidget(full_tab, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(MembraneTestControlArea);

        full_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MembraneTestControlArea);
    } // setupUi

    void retranslateUi(QWidget *MembraneTestControlArea)
    {
        MembraneTestControlArea->setWindowTitle(QCoreApplication::translate("MembraneTestControlArea", "Form", nullptr));
        groupBox->setTitle(QString());
        full_tab->setTabText(full_tab->indexOf(controlWidget), QCoreApplication::translate("MembraneTestControlArea", "\346\216\247\345\210\266", nullptr));
        full_tab->setTabText(full_tab->indexOf(stiWidget), QCoreApplication::translate("MembraneTestControlArea", "\345\210\272\346\277\200", nullptr));
        full_tab->setTabText(full_tab->indexOf(paramWidget), QCoreApplication::translate("MembraneTestControlArea", "\345\217\202\346\225\260", nullptr));
        full_tab->setTabText(full_tab->indexOf(fileWidget), QCoreApplication::translate("MembraneTestControlArea", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MembraneTestControlArea: public Ui_MembraneTestControlArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMEMBRANETESTCONTROLAREA_H
