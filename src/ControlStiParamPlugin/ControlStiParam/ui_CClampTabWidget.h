/********************************************************************************
** Form generated from reading UI file 'CClampTabWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCLAMPTABWIDGET_H
#define UI_CCLAMPTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CClampTabWidget
{
public:
    QGridLayout *gridLayout_13;
    QTabWidget *clampWidget;
    QWidget *volTab;
    QGridLayout *gridLayout_6;
    QGroupBox *offsetGroupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *offsetLabel;
    QDoubleSpinBox *offsetSpinBox;
    QPushButton *autoBtn1;
    QGroupBox *basicParamGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *mode;
    QComboBox *cellComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *v_memLabel;
    QDoubleSpinBox *vMimDoubleSpinBox;
    QGroupBox *cFastGrouBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *MagLabel;
    QDoubleSpinBox *magSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *TauLabel;
    QDoubleSpinBox *TauSpinBox;
    QPushButton *autoBtn2;
    QGroupBox *cSlowGroupBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QSpinBox *cmSpinBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *rs_label;
    QDoubleSpinBox *rsSpinBox;
    QPushButton *autoBtn3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpinBox *spinBox_2;
    QPushButton *pushButton;
    QWidget *curTab;
    QGridLayout *gridLayout_7;
    QGroupBox *basicParamGroupBox_2;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *mode_2;
    QComboBox *cellComboBox_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *v_memLabel_2;
    QDoubleSpinBox *vMimDoubleSpinBox_2;
    QGroupBox *offsetGroupBox_4;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_16;
    QLabel *offsetLabel_4;
    QDoubleSpinBox *offsetSpinBox_4;
    QPushButton *autoBtn1_4;
    QGroupBox *offsetGroupBox_3;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_15;
    QLabel *offsetLabel_3;
    QDoubleSpinBox *offsetSpinBox_3;
    QPushButton *autoBtn1_3;
    QGroupBox *offsetGroupBox_2;
    QGridLayout *gridLayout_9;
    QPushButton *autoBtn1_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *offsetLabel_2;
    QDoubleSpinBox *offsetSpinBox_2;

    void setupUi(QWidget *CClampTabWidget)
    {
        if (CClampTabWidget->objectName().isEmpty())
            CClampTabWidget->setObjectName(QString::fromUtf8("CClampTabWidget"));
        CClampTabWidget->resize(256, 914);
        gridLayout_13 = new QGridLayout(CClampTabWidget);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 20, -1, -1);
        clampWidget = new QTabWidget(CClampTabWidget);
        clampWidget->setObjectName(QString::fromUtf8("clampWidget"));
        volTab = new QWidget();
        volTab->setObjectName(QString::fromUtf8("volTab"));
        gridLayout_6 = new QGridLayout(volTab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setVerticalSpacing(20);
        offsetGroupBox = new QGroupBox(volTab);
        offsetGroupBox->setObjectName(QString::fromUtf8("offsetGroupBox"));
        offsetGroupBox->setMaximumSize(QSize(16777215, 100));
        gridLayout_3 = new QGridLayout(offsetGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(10, 15, 10, 10);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        offsetLabel = new QLabel(offsetGroupBox);
        offsetLabel->setObjectName(QString::fromUtf8("offsetLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(offsetLabel->sizePolicy().hasHeightForWidth());
        offsetLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        offsetLabel->setFont(font);
        offsetLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(offsetLabel);

        offsetSpinBox = new QDoubleSpinBox(offsetGroupBox);
        offsetSpinBox->setObjectName(QString::fromUtf8("offsetSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(offsetSpinBox->sizePolicy().hasHeightForWidth());
        offsetSpinBox->setSizePolicy(sizePolicy1);
        offsetSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSpinBox->setDecimals(1);

        horizontalLayout_3->addWidget(offsetSpinBox);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        autoBtn1 = new QPushButton(offsetGroupBox);
        autoBtn1->setObjectName(QString::fromUtf8("autoBtn1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(autoBtn1->sizePolicy().hasHeightForWidth());
        autoBtn1->setSizePolicy(sizePolicy2);
        autoBtn1->setFont(font);
        autoBtn1->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(autoBtn1, 1, 0, 1, 1);


        gridLayout_6->addWidget(offsetGroupBox, 1, 0, 1, 1);

        basicParamGroupBox = new QGroupBox(volTab);
        basicParamGroupBox->setObjectName(QString::fromUtf8("basicParamGroupBox"));
        sizePolicy2.setHeightForWidth(basicParamGroupBox->sizePolicy().hasHeightForWidth());
        basicParamGroupBox->setSizePolicy(sizePolicy2);
        basicParamGroupBox->setMaximumSize(QSize(16777215, 112));
        basicParamGroupBox->setFont(font);
        basicParamGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_2 = new QGridLayout(basicParamGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(10, 15, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mode = new QLabel(basicParamGroupBox);
        mode->setObjectName(QString::fromUtf8("mode"));
        sizePolicy.setHeightForWidth(mode->sizePolicy().hasHeightForWidth());
        mode->setSizePolicy(sizePolicy);
        mode->setFont(font);
        mode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(mode);

        cellComboBox = new QComboBox(basicParamGroupBox);
        cellComboBox->addItem(QString());
        cellComboBox->setObjectName(QString::fromUtf8("cellComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cellComboBox->sizePolicy().hasHeightForWidth());
        cellComboBox->setSizePolicy(sizePolicy3);
        cellComboBox->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout->addWidget(cellComboBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        v_memLabel = new QLabel(basicParamGroupBox);
        v_memLabel->setObjectName(QString::fromUtf8("v_memLabel"));
        sizePolicy.setHeightForWidth(v_memLabel->sizePolicy().hasHeightForWidth());
        v_memLabel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font1.setPointSize(10);
        v_memLabel->setFont(font1);
        v_memLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(v_memLabel);

        vMimDoubleSpinBox = new QDoubleSpinBox(basicParamGroupBox);
        vMimDoubleSpinBox->setObjectName(QString::fromUtf8("vMimDoubleSpinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(vMimDoubleSpinBox->sizePolicy().hasHeightForWidth());
        vMimDoubleSpinBox->setSizePolicy(sizePolicy4);
        vMimDoubleSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vMimDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(vMimDoubleSpinBox);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);

        gridLayout_6->addWidget(basicParamGroupBox, 0, 0, 1, 1);

        cFastGrouBox = new QGroupBox(volTab);
        cFastGrouBox->setObjectName(QString::fromUtf8("cFastGrouBox"));
        cFastGrouBox->setMaximumSize(QSize(16777215, 152));
        cFastGrouBox->setFont(font);
        gridLayout_4 = new QGridLayout(cFastGrouBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(10);
        gridLayout_4->setContentsMargins(10, 15, 10, 10);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        MagLabel = new QLabel(cFastGrouBox);
        MagLabel->setObjectName(QString::fromUtf8("MagLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(MagLabel->sizePolicy().hasHeightForWidth());
        MagLabel->setSizePolicy(sizePolicy5);
        MagLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(MagLabel);

        magSpinBox = new QDoubleSpinBox(cFastGrouBox);
        magSpinBox->setObjectName(QString::fromUtf8("magSpinBox"));
        sizePolicy1.setHeightForWidth(magSpinBox->sizePolicy().hasHeightForWidth());
        magSpinBox->setSizePolicy(sizePolicy1);
        magSpinBox->setDecimals(1);

        horizontalLayout_4->addWidget(magSpinBox);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        TauLabel = new QLabel(cFastGrouBox);
        TauLabel->setObjectName(QString::fromUtf8("TauLabel"));
        sizePolicy.setHeightForWidth(TauLabel->sizePolicy().hasHeightForWidth());
        TauLabel->setSizePolicy(sizePolicy);
        TauLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(TauLabel);

        TauSpinBox = new QDoubleSpinBox(cFastGrouBox);
        TauSpinBox->setObjectName(QString::fromUtf8("TauSpinBox"));
        sizePolicy1.setHeightForWidth(TauSpinBox->sizePolicy().hasHeightForWidth());
        TauSpinBox->setSizePolicy(sizePolicy1);
        TauSpinBox->setDecimals(1);

        horizontalLayout_5->addWidget(TauSpinBox);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        autoBtn2 = new QPushButton(cFastGrouBox);
        autoBtn2->setObjectName(QString::fromUtf8("autoBtn2"));
        sizePolicy2.setHeightForWidth(autoBtn2->sizePolicy().hasHeightForWidth());
        autoBtn2->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(autoBtn2, 2, 0, 1, 1);


        gridLayout_6->addWidget(cFastGrouBox, 2, 0, 1, 1);

        cSlowGroupBox = new QGroupBox(volTab);
        cSlowGroupBox->setObjectName(QString::fromUtf8("cSlowGroupBox"));
        cSlowGroupBox->setMaximumSize(QSize(16777215, 151));
        cSlowGroupBox->setFont(font);
        gridLayout_5 = new QGridLayout(cSlowGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(10);
        gridLayout_5->setContentsMargins(10, 15, 10, 10);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(cSlowGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_2);

        cmSpinBox = new QSpinBox(cSlowGroupBox);
        cmSpinBox->setObjectName(QString::fromUtf8("cmSpinBox"));
        sizePolicy1.setHeightForWidth(cmSpinBox->sizePolicy().hasHeightForWidth());
        cmSpinBox->setSizePolicy(sizePolicy1);
        cmSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(cmSpinBox);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        rs_label = new QLabel(cSlowGroupBox);
        rs_label->setObjectName(QString::fromUtf8("rs_label"));
        sizePolicy2.setHeightForWidth(rs_label->sizePolicy().hasHeightForWidth());
        rs_label->setSizePolicy(sizePolicy2);
        rs_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(rs_label);

        rsSpinBox = new QDoubleSpinBox(cSlowGroupBox);
        rsSpinBox->setObjectName(QString::fromUtf8("rsSpinBox"));
        sizePolicy1.setHeightForWidth(rsSpinBox->sizePolicy().hasHeightForWidth());
        rsSpinBox->setSizePolicy(sizePolicy1);
        rsSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        rsSpinBox->setDecimals(1);

        horizontalLayout_8->addWidget(rsSpinBox);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        autoBtn3 = new QPushButton(cSlowGroupBox);
        autoBtn3->setObjectName(QString::fromUtf8("autoBtn3"));
        sizePolicy2.setHeightForWidth(autoBtn3->sizePolicy().hasHeightForWidth());
        autoBtn3->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(autoBtn3, 2, 0, 1, 1);


        gridLayout_6->addWidget(cSlowGroupBox, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(volTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 100));
        groupBox_3->setFont(font);
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_6);

        spinBox_2 = new QSpinBox(groupBox_3);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy1.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(spinBox_2);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);

        gridLayout_6->addWidget(groupBox_3, 4, 0, 1, 1);

        clampWidget->addTab(volTab, QString());
        curTab = new QWidget();
        curTab->setObjectName(QString::fromUtf8("curTab"));
        gridLayout_7 = new QGridLayout(curTab);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(20);
        gridLayout_7->setContentsMargins(-1, -1, -1, 200);
        basicParamGroupBox_2 = new QGroupBox(curTab);
        basicParamGroupBox_2->setObjectName(QString::fromUtf8("basicParamGroupBox_2"));
        sizePolicy2.setHeightForWidth(basicParamGroupBox_2->sizePolicy().hasHeightForWidth());
        basicParamGroupBox_2->setSizePolicy(sizePolicy2);
        basicParamGroupBox_2->setMaximumSize(QSize(16777215, 135));
        basicParamGroupBox_2->setFont(font);
        basicParamGroupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_8 = new QGridLayout(basicParamGroupBox_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(0);
        gridLayout_8->setVerticalSpacing(15);
        gridLayout_8->setContentsMargins(10, 15, 10, 10);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(10);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mode_2 = new QLabel(basicParamGroupBox_2);
        mode_2->setObjectName(QString::fromUtf8("mode_2"));
        sizePolicy.setHeightForWidth(mode_2->sizePolicy().hasHeightForWidth());
        mode_2->setSizePolicy(sizePolicy);
        mode_2->setFont(font);
        mode_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(mode_2);

        cellComboBox_2 = new QComboBox(basicParamGroupBox_2);
        cellComboBox_2->addItem(QString());
        cellComboBox_2->setObjectName(QString::fromUtf8("cellComboBox_2"));
        sizePolicy3.setHeightForWidth(cellComboBox_2->sizePolicy().hasHeightForWidth());
        cellComboBox_2->setSizePolicy(sizePolicy3);
        cellComboBox_2->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_12->addWidget(cellComboBox_2);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 2);

        gridLayout_8->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(10);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        v_memLabel_2 = new QLabel(basicParamGroupBox_2);
        v_memLabel_2->setObjectName(QString::fromUtf8("v_memLabel_2"));
        sizePolicy.setHeightForWidth(v_memLabel_2->sizePolicy().hasHeightForWidth());
        v_memLabel_2->setSizePolicy(sizePolicy);
        v_memLabel_2->setFont(font1);
        v_memLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(v_memLabel_2);

        vMimDoubleSpinBox_2 = new QDoubleSpinBox(basicParamGroupBox_2);
        vMimDoubleSpinBox_2->setObjectName(QString::fromUtf8("vMimDoubleSpinBox_2"));
        sizePolicy4.setHeightForWidth(vMimDoubleSpinBox_2->sizePolicy().hasHeightForWidth());
        vMimDoubleSpinBox_2->setSizePolicy(sizePolicy4);
        vMimDoubleSpinBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vMimDoubleSpinBox_2->setValue(1.000000000000000);

        horizontalLayout_13->addWidget(vMimDoubleSpinBox_2);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 2);

        gridLayout_8->addLayout(horizontalLayout_13, 1, 0, 1, 1);

        gridLayout_8->setRowStretch(0, 1);
        gridLayout_8->setRowStretch(1, 1);

        gridLayout_7->addWidget(basicParamGroupBox_2, 0, 0, 1, 1);

        offsetGroupBox_4 = new QGroupBox(curTab);
        offsetGroupBox_4->setObjectName(QString::fromUtf8("offsetGroupBox_4"));
        offsetGroupBox_4->setMaximumSize(QSize(16777215, 110));
        gridLayout_11 = new QGridLayout(offsetGroupBox_4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setVerticalSpacing(8);
        gridLayout_11->setContentsMargins(10, 15, 10, 10);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(10);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        offsetLabel_4 = new QLabel(offsetGroupBox_4);
        offsetLabel_4->setObjectName(QString::fromUtf8("offsetLabel_4"));
        sizePolicy.setHeightForWidth(offsetLabel_4->sizePolicy().hasHeightForWidth());
        offsetLabel_4->setSizePolicy(sizePolicy);
        offsetLabel_4->setFont(font);
        offsetLabel_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(offsetLabel_4);

        offsetSpinBox_4 = new QDoubleSpinBox(offsetGroupBox_4);
        offsetSpinBox_4->setObjectName(QString::fromUtf8("offsetSpinBox_4"));
        sizePolicy1.setHeightForWidth(offsetSpinBox_4->sizePolicy().hasHeightForWidth());
        offsetSpinBox_4->setSizePolicy(sizePolicy1);
        offsetSpinBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSpinBox_4->setDecimals(1);

        horizontalLayout_16->addWidget(offsetSpinBox_4);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 2);

        gridLayout_11->addLayout(horizontalLayout_16, 0, 0, 1, 1);

        autoBtn1_4 = new QPushButton(offsetGroupBox_4);
        autoBtn1_4->setObjectName(QString::fromUtf8("autoBtn1_4"));
        sizePolicy2.setHeightForWidth(autoBtn1_4->sizePolicy().hasHeightForWidth());
        autoBtn1_4->setSizePolicy(sizePolicy2);
        autoBtn1_4->setFont(font);
        autoBtn1_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout_11->addWidget(autoBtn1_4, 1, 0, 1, 1);


        gridLayout_7->addWidget(offsetGroupBox_4, 3, 0, 1, 1);

        offsetGroupBox_3 = new QGroupBox(curTab);
        offsetGroupBox_3->setObjectName(QString::fromUtf8("offsetGroupBox_3"));
        offsetGroupBox_3->setMaximumSize(QSize(16777215, 120));
        gridLayout_10 = new QGridLayout(offsetGroupBox_3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setVerticalSpacing(10);
        gridLayout_10->setContentsMargins(10, 15, 10, 10);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(10);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        offsetLabel_3 = new QLabel(offsetGroupBox_3);
        offsetLabel_3->setObjectName(QString::fromUtf8("offsetLabel_3"));
        sizePolicy.setHeightForWidth(offsetLabel_3->sizePolicy().hasHeightForWidth());
        offsetLabel_3->setSizePolicy(sizePolicy);
        offsetLabel_3->setFont(font);
        offsetLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(offsetLabel_3);

        offsetSpinBox_3 = new QDoubleSpinBox(offsetGroupBox_3);
        offsetSpinBox_3->setObjectName(QString::fromUtf8("offsetSpinBox_3"));
        sizePolicy1.setHeightForWidth(offsetSpinBox_3->sizePolicy().hasHeightForWidth());
        offsetSpinBox_3->setSizePolicy(sizePolicy1);
        offsetSpinBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSpinBox_3->setDecimals(1);

        horizontalLayout_15->addWidget(offsetSpinBox_3);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 2);

        gridLayout_10->addLayout(horizontalLayout_15, 0, 0, 1, 1);

        autoBtn1_3 = new QPushButton(offsetGroupBox_3);
        autoBtn1_3->setObjectName(QString::fromUtf8("autoBtn1_3"));
        sizePolicy2.setHeightForWidth(autoBtn1_3->sizePolicy().hasHeightForWidth());
        autoBtn1_3->setSizePolicy(sizePolicy2);
        autoBtn1_3->setFont(font);
        autoBtn1_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout_10->addWidget(autoBtn1_3, 1, 0, 1, 1);


        gridLayout_7->addWidget(offsetGroupBox_3, 2, 0, 1, 1);

        offsetGroupBox_2 = new QGroupBox(curTab);
        offsetGroupBox_2->setObjectName(QString::fromUtf8("offsetGroupBox_2"));
        offsetGroupBox_2->setMaximumSize(QSize(16777215, 110));
        gridLayout_9 = new QGridLayout(offsetGroupBox_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(12);
        gridLayout_9->setContentsMargins(10, 15, 10, 10);
        autoBtn1_2 = new QPushButton(offsetGroupBox_2);
        autoBtn1_2->setObjectName(QString::fromUtf8("autoBtn1_2"));
        sizePolicy2.setHeightForWidth(autoBtn1_2->sizePolicy().hasHeightForWidth());
        autoBtn1_2->setSizePolicy(sizePolicy2);
        autoBtn1_2->setFont(font);
        autoBtn1_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(autoBtn1_2, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(10);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        offsetLabel_2 = new QLabel(offsetGroupBox_2);
        offsetLabel_2->setObjectName(QString::fromUtf8("offsetLabel_2"));
        sizePolicy.setHeightForWidth(offsetLabel_2->sizePolicy().hasHeightForWidth());
        offsetLabel_2->setSizePolicy(sizePolicy);
        offsetLabel_2->setFont(font);
        offsetLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(offsetLabel_2);

        offsetSpinBox_2 = new QDoubleSpinBox(offsetGroupBox_2);
        offsetSpinBox_2->setObjectName(QString::fromUtf8("offsetSpinBox_2"));
        sizePolicy1.setHeightForWidth(offsetSpinBox_2->sizePolicy().hasHeightForWidth());
        offsetSpinBox_2->setSizePolicy(sizePolicy1);
        offsetSpinBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSpinBox_2->setDecimals(1);

        horizontalLayout_14->addWidget(offsetSpinBox_2);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 2);

        gridLayout_9->addLayout(horizontalLayout_14, 0, 0, 1, 1);


        gridLayout_7->addWidget(offsetGroupBox_2, 1, 0, 1, 1);

        clampWidget->addTab(curTab, QString());

        gridLayout_13->addWidget(clampWidget, 0, 0, 1, 1);


        retranslateUi(CClampTabWidget);

        clampWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CClampTabWidget);
    } // setupUi

    void retranslateUi(QWidget *CClampTabWidget)
    {
        CClampTabWidget->setWindowTitle(QCoreApplication::translate("CClampTabWidget", "Form", nullptr));
        offsetGroupBox->setTitle(QString());
        offsetLabel->setText(QCoreApplication::translate("CClampTabWidget", "Offset", nullptr));
        offsetSpinBox->setPrefix(QString());
        offsetSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " mv", nullptr));
        autoBtn1->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        basicParamGroupBox->setTitle(QCoreApplication::translate("CClampTabWidget", "\345\237\272\346\234\254\345\217\202\346\225\260", nullptr));
        mode->setText(QCoreApplication::translate("CClampTabWidget", "\346\250\241     \345\274\217", nullptr));
        cellComboBox->setItemText(0, QCoreApplication::translate("CClampTabWidget", " \345\205\250\347\273\206\350\203\236", nullptr));

        cellComboBox->setCurrentText(QCoreApplication::translate("CClampTabWidget", " \345\205\250\347\273\206\350\203\236", nullptr));
        v_memLabel->setText(QCoreApplication::translate("CClampTabWidget", "V-mem", nullptr));
        vMimDoubleSpinBox->setPrefix(QString());
        vMimDoubleSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " mv", nullptr));
        cFastGrouBox->setTitle(QCoreApplication::translate("CClampTabWidget", "Cp \350\241\245\345\201\277", nullptr));
        MagLabel->setText(QCoreApplication::translate("CClampTabWidget", "Mag", nullptr));
        magSpinBox->setPrefix(QString());
        magSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " pF", nullptr));
        TauLabel->setText(QCoreApplication::translate("CClampTabWidget", "Tau", nullptr));
        TauSpinBox->setPrefix(QString());
        TauSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " \316\274s", nullptr));
        autoBtn2->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        cSlowGroupBox->setTitle(QCoreApplication::translate("CClampTabWidget", "Cm \350\241\245\345\201\277", nullptr));
        label_2->setText(QCoreApplication::translate("CClampTabWidget", "Cm", nullptr));
        cmSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " pF", nullptr));
        cmSpinBox->setPrefix(QString());
        rs_label->setText(QCoreApplication::translate("CClampTabWidget", "Rs     ", nullptr));
        rsSpinBox->setPrefix(QString());
        rsSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " M\316\251", nullptr));
        autoBtn3->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        groupBox_3->setTitle(QString());
        label_6->setText(QCoreApplication::translate("CClampTabWidget", "Rs\350\241\245\345\201\277", nullptr));
        spinBox_2->setSuffix(QCoreApplication::translate("CClampTabWidget", " %", nullptr));
        spinBox_2->setPrefix(QString());
        pushButton->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        clampWidget->setTabText(clampWidget->indexOf(volTab), QCoreApplication::translate("CClampTabWidget", "\347\224\265\345\216\213\351\222\263", nullptr));
        basicParamGroupBox_2->setTitle(QCoreApplication::translate("CClampTabWidget", "\345\237\272\346\234\254\345\217\202\346\225\260", nullptr));
        mode_2->setText(QCoreApplication::translate("CClampTabWidget", "\346\250\241     \345\274\217", nullptr));
        cellComboBox_2->setItemText(0, QCoreApplication::translate("CClampTabWidget", " \345\205\250\347\273\206\350\203\236", nullptr));

        cellComboBox_2->setCurrentText(QCoreApplication::translate("CClampTabWidget", " \345\205\250\347\273\206\350\203\236", nullptr));
        v_memLabel_2->setText(QCoreApplication::translate("CClampTabWidget", "l-mem", nullptr));
        vMimDoubleSpinBox_2->setPrefix(QString());
        vMimDoubleSpinBox_2->setSuffix(QCoreApplication::translate("CClampTabWidget", " mv", nullptr));
        offsetGroupBox_4->setTitle(QCoreApplication::translate("CClampTabWidget", "\346\241\245\345\271\263\350\241\241\346\240\241\346\255\243", nullptr));
        offsetLabel_4->setText(QCoreApplication::translate("CClampTabWidget", "\347\231\276\345\210\206\346\257\224", nullptr));
        offsetSpinBox_4->setPrefix(QString());
        offsetSpinBox_4->setSuffix(QCoreApplication::translate("CClampTabWidget", "%", nullptr));
        autoBtn1_4->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        offsetGroupBox_3->setTitle(QCoreApplication::translate("CClampTabWidget", "Cp\350\241\245\345\201\277", nullptr));
        offsetLabel_3->setText(QCoreApplication::translate("CClampTabWidget", "Mag", nullptr));
        offsetSpinBox_3->setPrefix(QString());
        offsetSpinBox_3->setSuffix(QCoreApplication::translate("CClampTabWidget", "pF", nullptr));
        autoBtn1_3->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        offsetGroupBox_2->setTitle(QString());
        autoBtn1_2->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        offsetLabel_2->setText(QCoreApplication::translate("CClampTabWidget", "Offset", nullptr));
        offsetSpinBox_2->setPrefix(QString());
        clampWidget->setTabText(clampWidget->indexOf(curTab), QCoreApplication::translate("CClampTabWidget", "\347\224\265\346\265\201\351\222\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CClampTabWidget: public Ui_CClampTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCLAMPTABWIDGET_H
