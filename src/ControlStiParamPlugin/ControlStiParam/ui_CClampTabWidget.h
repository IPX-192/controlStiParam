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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CClampTabWidget
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *clampWidget;
    QWidget *volTab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *basicParamGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *mode;
    QComboBox *cellComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *v_memLabel;
    QDoubleSpinBox *vMimDoubleSpinBox;
    QFrame *offsetFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *offsetLabel;
    QDoubleSpinBox *offsetSpinBox;
    QPushButton *autoBtn1;
    QGroupBox *cFastGrouBox;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *MagLabel;
    QDoubleSpinBox *magSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *TauLabel;
    QDoubleSpinBox *TauSpinBox;
    QPushButton *autoBtn2;
    QGroupBox *cSlowGroupBox;
    QHBoxLayout *horizontalLayout_21;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QSpinBox *cmSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *rs_label;
    QDoubleSpinBox *rsSpinBox;
    QPushButton *autoBtn3;
    QFrame *RsFrame;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpinBox *spinBox_2;
    QPushButton *pushButton;
    QWidget *curTab;
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
        CClampTabWidget->resize(421, 650);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CClampTabWidget->sizePolicy().hasHeightForWidth());
        CClampTabWidget->setSizePolicy(sizePolicy);
        CClampTabWidget->setMaximumSize(QSize(16777215, 650));
        verticalLayout_6 = new QVBoxLayout(CClampTabWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        clampWidget = new QTabWidget(CClampTabWidget);
        clampWidget->setObjectName(QString::fromUtf8("clampWidget"));
        volTab = new QWidget();
        volTab->setObjectName(QString::fromUtf8("volTab"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volTab->sizePolicy().hasHeightForWidth());
        volTab->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(volTab);
        verticalLayout_5->setSpacing(15);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(20, 10, 20, 10);
        basicParamGroupBox = new QGroupBox(volTab);
        basicParamGroupBox->setObjectName(QString::fromUtf8("basicParamGroupBox"));
        sizePolicy.setHeightForWidth(basicParamGroupBox->sizePolicy().hasHeightForWidth());
        basicParamGroupBox->setSizePolicy(sizePolicy);
        basicParamGroupBox->setMinimumSize(QSize(0, 133));
        basicParamGroupBox->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(10);
        basicParamGroupBox->setFont(font);
        basicParamGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_3 = new QVBoxLayout(basicParamGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mode = new QLabel(basicParamGroupBox);
        mode->setObjectName(QString::fromUtf8("mode"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mode->sizePolicy().hasHeightForWidth());
        mode->setSizePolicy(sizePolicy2);
        mode->setMinimumSize(QSize(80, 0));
        mode->setFont(font);
        mode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(mode);

        cellComboBox = new QComboBox(basicParamGroupBox);
        cellComboBox->addItem(QString());
        cellComboBox->setObjectName(QString::fromUtf8("cellComboBox"));
        sizePolicy2.setHeightForWidth(cellComboBox->sizePolicy().hasHeightForWidth());
        cellComboBox->setSizePolicy(sizePolicy2);
        cellComboBox->setMinimumSize(QSize(122, 35));
        cellComboBox->setMaximumSize(QSize(16777215, 35));
        cellComboBox->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout->addWidget(cellComboBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        v_memLabel = new QLabel(basicParamGroupBox);
        v_memLabel->setObjectName(QString::fromUtf8("v_memLabel"));
        sizePolicy2.setHeightForWidth(v_memLabel->sizePolicy().hasHeightForWidth());
        v_memLabel->setSizePolicy(sizePolicy2);
        v_memLabel->setMinimumSize(QSize(80, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font1.setPointSize(10);
        v_memLabel->setFont(font1);
        v_memLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(v_memLabel);

        vMimDoubleSpinBox = new QDoubleSpinBox(basicParamGroupBox);
        vMimDoubleSpinBox->setObjectName(QString::fromUtf8("vMimDoubleSpinBox"));
        sizePolicy2.setHeightForWidth(vMimDoubleSpinBox->sizePolicy().hasHeightForWidth());
        vMimDoubleSpinBox->setSizePolicy(sizePolicy2);
        vMimDoubleSpinBox->setMinimumSize(QSize(122, 35));
        vMimDoubleSpinBox->setMaximumSize(QSize(16777215, 16777215));
        vMimDoubleSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vMimDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(vMimDoubleSpinBox);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(basicParamGroupBox);

        offsetFrame = new QFrame(volTab);
        offsetFrame->setObjectName(QString::fromUtf8("offsetFrame"));
        offsetFrame->setMinimumSize(QSize(0, 70));
        offsetFrame->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(offsetFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(16, 10, 16, 10);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 30, -1);
        offsetLabel = new QLabel(offsetFrame);
        offsetLabel->setObjectName(QString::fromUtf8("offsetLabel"));
        sizePolicy2.setHeightForWidth(offsetLabel->sizePolicy().hasHeightForWidth());
        offsetLabel->setSizePolicy(sizePolicy2);
        offsetLabel->setMinimumSize(QSize(80, 0));
        offsetLabel->setFont(font);
        offsetLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(offsetLabel);

        offsetSpinBox = new QDoubleSpinBox(offsetFrame);
        offsetSpinBox->setObjectName(QString::fromUtf8("offsetSpinBox"));
        sizePolicy2.setHeightForWidth(offsetSpinBox->sizePolicy().hasHeightForWidth());
        offsetSpinBox->setSizePolicy(sizePolicy2);
        offsetSpinBox->setMinimumSize(QSize(122, 35));
        offsetSpinBox->setMaximumSize(QSize(16777215, 16777215));
        offsetSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSpinBox->setDecimals(1);

        horizontalLayout_3->addWidget(offsetSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        autoBtn1 = new QPushButton(offsetFrame);
        autoBtn1->setObjectName(QString::fromUtf8("autoBtn1"));
        sizePolicy1.setHeightForWidth(autoBtn1->sizePolicy().hasHeightForWidth());
        autoBtn1->setSizePolicy(sizePolicy1);
        autoBtn1->setMinimumSize(QSize(70, 30));
        autoBtn1->setMaximumSize(QSize(70, 30));
        autoBtn1->setFont(font);
        autoBtn1->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(autoBtn1);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_5->addWidget(offsetFrame);

        cFastGrouBox = new QGroupBox(volTab);
        cFastGrouBox->setObjectName(QString::fromUtf8("cFastGrouBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cFastGrouBox->sizePolicy().hasHeightForWidth());
        cFastGrouBox->setSizePolicy(sizePolicy3);
        cFastGrouBox->setMinimumSize(QSize(0, 133));
        cFastGrouBox->setMaximumSize(QSize(16777215, 16777215));
        cFastGrouBox->setFont(font);
        horizontalLayout_19 = new QHBoxLayout(cFastGrouBox);
        horizontalLayout_19->setSpacing(0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(16, 10, 16, 10);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 30, -1);
        MagLabel = new QLabel(cFastGrouBox);
        MagLabel->setObjectName(QString::fromUtf8("MagLabel"));
        sizePolicy2.setHeightForWidth(MagLabel->sizePolicy().hasHeightForWidth());
        MagLabel->setSizePolicy(sizePolicy2);
        MagLabel->setMinimumSize(QSize(80, 0));
        MagLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(MagLabel);

        magSpinBox = new QDoubleSpinBox(cFastGrouBox);
        magSpinBox->setObjectName(QString::fromUtf8("magSpinBox"));
        sizePolicy2.setHeightForWidth(magSpinBox->sizePolicy().hasHeightForWidth());
        magSpinBox->setSizePolicy(sizePolicy2);
        magSpinBox->setMinimumSize(QSize(122, 35));
        magSpinBox->setMaximumSize(QSize(16777215, 16777215));
        magSpinBox->setDecimals(1);

        horizontalLayout_4->addWidget(magSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 30, -1);
        TauLabel = new QLabel(cFastGrouBox);
        TauLabel->setObjectName(QString::fromUtf8("TauLabel"));
        sizePolicy2.setHeightForWidth(TauLabel->sizePolicy().hasHeightForWidth());
        TauLabel->setSizePolicy(sizePolicy2);
        TauLabel->setMinimumSize(QSize(80, 0));
        TauLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(TauLabel);

        TauSpinBox = new QDoubleSpinBox(cFastGrouBox);
        TauSpinBox->setObjectName(QString::fromUtf8("TauSpinBox"));
        sizePolicy2.setHeightForWidth(TauSpinBox->sizePolicy().hasHeightForWidth());
        TauSpinBox->setSizePolicy(sizePolicy2);
        TauSpinBox->setMinimumSize(QSize(122, 35));
        TauSpinBox->setMaximumSize(QSize(16777215, 16777215));
        TauSpinBox->setDecimals(1);

        horizontalLayout_5->addWidget(TauSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_17->addLayout(verticalLayout);

        autoBtn2 = new QPushButton(cFastGrouBox);
        autoBtn2->setObjectName(QString::fromUtf8("autoBtn2"));
        sizePolicy1.setHeightForWidth(autoBtn2->sizePolicy().hasHeightForWidth());
        autoBtn2->setSizePolicy(sizePolicy1);
        autoBtn2->setMinimumSize(QSize(70, 30));
        autoBtn2->setMaximumSize(QSize(70, 30));

        horizontalLayout_17->addWidget(autoBtn2);


        horizontalLayout_19->addLayout(horizontalLayout_17);


        verticalLayout_5->addWidget(cFastGrouBox);

        cSlowGroupBox = new QGroupBox(volTab);
        cSlowGroupBox->setObjectName(QString::fromUtf8("cSlowGroupBox"));
        sizePolicy2.setHeightForWidth(cSlowGroupBox->sizePolicy().hasHeightForWidth());
        cSlowGroupBox->setSizePolicy(sizePolicy2);
        cSlowGroupBox->setMinimumSize(QSize(0, 133));
        cSlowGroupBox->setMaximumSize(QSize(16777215, 16777215));
        cSlowGroupBox->setFont(font);
        horizontalLayout_21 = new QHBoxLayout(cSlowGroupBox);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(10, 10, 10, 10);
        checkBox_2 = new QCheckBox(cSlowGroupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_21->addWidget(checkBox_2);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(-1, -1, 10, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, 30, -1);
        label_2 = new QLabel(cSlowGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_2);

        cmSpinBox = new QSpinBox(cSlowGroupBox);
        cmSpinBox->setObjectName(QString::fromUtf8("cmSpinBox"));
        sizePolicy2.setHeightForWidth(cmSpinBox->sizePolicy().hasHeightForWidth());
        cmSpinBox->setSizePolicy(sizePolicy2);
        cmSpinBox->setMinimumSize(QSize(122, 35));
        cmSpinBox->setMaximumSize(QSize(16777215, 16777215));
        cmSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(cmSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 30, -1);
        rs_label = new QLabel(cSlowGroupBox);
        rs_label->setObjectName(QString::fromUtf8("rs_label"));
        sizePolicy2.setHeightForWidth(rs_label->sizePolicy().hasHeightForWidth());
        rs_label->setSizePolicy(sizePolicy2);
        rs_label->setMinimumSize(QSize(50, 0));
        rs_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(rs_label);

        rsSpinBox = new QDoubleSpinBox(cSlowGroupBox);
        rsSpinBox->setObjectName(QString::fromUtf8("rsSpinBox"));
        sizePolicy2.setHeightForWidth(rsSpinBox->sizePolicy().hasHeightForWidth());
        rsSpinBox->setSizePolicy(sizePolicy2);
        rsSpinBox->setMinimumSize(QSize(122, 35));
        rsSpinBox->setMaximumSize(QSize(16777215, 16777215));
        rsSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        rsSpinBox->setDecimals(1);

        horizontalLayout_7->addWidget(rsSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout_18->addLayout(verticalLayout_2);

        autoBtn3 = new QPushButton(cSlowGroupBox);
        autoBtn3->setObjectName(QString::fromUtf8("autoBtn3"));
        sizePolicy1.setHeightForWidth(autoBtn3->sizePolicy().hasHeightForWidth());
        autoBtn3->setSizePolicy(sizePolicy1);
        autoBtn3->setMinimumSize(QSize(70, 30));
        autoBtn3->setMaximumSize(QSize(70, 30));

        horizontalLayout_18->addWidget(autoBtn3);


        horizontalLayout_21->addLayout(horizontalLayout_18);


        verticalLayout_5->addWidget(cSlowGroupBox);

        RsFrame = new QFrame(volTab);
        RsFrame->setObjectName(QString::fromUtf8("RsFrame"));
        sizePolicy2.setHeightForWidth(RsFrame->sizePolicy().hasHeightForWidth());
        RsFrame->setSizePolicy(sizePolicy2);
        RsFrame->setMaximumSize(QSize(16777215, 16777215));
        RsFrame->setFont(font);
        horizontalLayout_22 = new QHBoxLayout(RsFrame);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(10, -1, -1, -1);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        checkBox = new QCheckBox(RsFrame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_11->addWidget(checkBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 10, -1);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, 30, -1);
        label_6 = new QLabel(RsFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(50, 0));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_6);

        spinBox_2 = new QSpinBox(RsFrame);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy2.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy2);
        spinBox_2->setMinimumSize(QSize(122, 35));
        spinBox_2->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_9->addWidget(spinBox_2);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        pushButton = new QPushButton(RsFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(70, 30));
        pushButton->setMaximumSize(QSize(70, 30));

        horizontalLayout_10->addWidget(pushButton);


        horizontalLayout_11->addLayout(horizontalLayout_10);


        horizontalLayout_22->addLayout(horizontalLayout_11);


        verticalLayout_5->addWidget(RsFrame);

        clampWidget->addTab(volTab, QString());
        curTab = new QWidget();
        curTab->setObjectName(QString::fromUtf8("curTab"));
        basicParamGroupBox_2 = new QGroupBox(curTab);
        basicParamGroupBox_2->setObjectName(QString::fromUtf8("basicParamGroupBox_2"));
        basicParamGroupBox_2->setGeometry(QRect(9, 9, 388, 111));
        sizePolicy1.setHeightForWidth(basicParamGroupBox_2->sizePolicy().hasHeightForWidth());
        basicParamGroupBox_2->setSizePolicy(sizePolicy1);
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
        sizePolicy2.setHeightForWidth(mode_2->sizePolicy().hasHeightForWidth());
        mode_2->setSizePolicy(sizePolicy2);
        mode_2->setFont(font);
        mode_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(mode_2);

        cellComboBox_2 = new QComboBox(basicParamGroupBox_2);
        cellComboBox_2->addItem(QString());
        cellComboBox_2->setObjectName(QString::fromUtf8("cellComboBox_2"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cellComboBox_2->sizePolicy().hasHeightForWidth());
        cellComboBox_2->setSizePolicy(sizePolicy4);
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
        sizePolicy2.setHeightForWidth(v_memLabel_2->sizePolicy().hasHeightForWidth());
        v_memLabel_2->setSizePolicy(sizePolicy2);
        v_memLabel_2->setFont(font1);
        v_memLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(v_memLabel_2);

        vMimDoubleSpinBox_2 = new QDoubleSpinBox(basicParamGroupBox_2);
        vMimDoubleSpinBox_2->setObjectName(QString::fromUtf8("vMimDoubleSpinBox_2"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(vMimDoubleSpinBox_2->sizePolicy().hasHeightForWidth());
        vMimDoubleSpinBox_2->setSizePolicy(sizePolicy5);
        vMimDoubleSpinBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vMimDoubleSpinBox_2->setValue(1.000000000000000);

        horizontalLayout_13->addWidget(vMimDoubleSpinBox_2);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 2);

        gridLayout_8->addLayout(horizontalLayout_13, 1, 0, 1, 1);

        gridLayout_8->setRowStretch(0, 1);
        gridLayout_8->setRowStretch(1, 1);
        offsetGroupBox_4 = new QGroupBox(curTab);
        offsetGroupBox_4->setObjectName(QString::fromUtf8("offsetGroupBox_4"));
        offsetGroupBox_4->setGeometry(QRect(10, 360, 388, 110));
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
        sizePolicy2.setHeightForWidth(offsetLabel_4->sizePolicy().hasHeightForWidth());
        offsetLabel_4->setSizePolicy(sizePolicy2);
        offsetLabel_4->setFont(font);
        offsetLabel_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(offsetLabel_4);

        offsetSpinBox_4 = new QDoubleSpinBox(offsetGroupBox_4);
        offsetSpinBox_4->setObjectName(QString::fromUtf8("offsetSpinBox_4"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(offsetSpinBox_4->sizePolicy().hasHeightForWidth());
        offsetSpinBox_4->setSizePolicy(sizePolicy6);
        offsetSpinBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSpinBox_4->setDecimals(1);

        horizontalLayout_16->addWidget(offsetSpinBox_4);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 2);

        gridLayout_11->addLayout(horizontalLayout_16, 0, 0, 1, 1);

        autoBtn1_4 = new QPushButton(offsetGroupBox_4);
        autoBtn1_4->setObjectName(QString::fromUtf8("autoBtn1_4"));
        sizePolicy1.setHeightForWidth(autoBtn1_4->sizePolicy().hasHeightForWidth());
        autoBtn1_4->setSizePolicy(sizePolicy1);
        autoBtn1_4->setFont(font);
        autoBtn1_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout_11->addWidget(autoBtn1_4, 1, 0, 1, 1);

        offsetGroupBox_3 = new QGroupBox(curTab);
        offsetGroupBox_3->setObjectName(QString::fromUtf8("offsetGroupBox_3"));
        offsetGroupBox_3->setGeometry(QRect(10, 240, 388, 101));
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
        sizePolicy2.setHeightForWidth(offsetLabel_3->sizePolicy().hasHeightForWidth());
        offsetLabel_3->setSizePolicy(sizePolicy2);
        offsetLabel_3->setFont(font);
        offsetLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(offsetLabel_3);

        offsetSpinBox_3 = new QDoubleSpinBox(offsetGroupBox_3);
        offsetSpinBox_3->setObjectName(QString::fromUtf8("offsetSpinBox_3"));
        sizePolicy6.setHeightForWidth(offsetSpinBox_3->sizePolicy().hasHeightForWidth());
        offsetSpinBox_3->setSizePolicy(sizePolicy6);
        offsetSpinBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSpinBox_3->setDecimals(1);

        horizontalLayout_15->addWidget(offsetSpinBox_3);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 2);

        gridLayout_10->addLayout(horizontalLayout_15, 0, 0, 1, 1);

        autoBtn1_3 = new QPushButton(offsetGroupBox_3);
        autoBtn1_3->setObjectName(QString::fromUtf8("autoBtn1_3"));
        sizePolicy1.setHeightForWidth(autoBtn1_3->sizePolicy().hasHeightForWidth());
        autoBtn1_3->setSizePolicy(sizePolicy1);
        autoBtn1_3->setFont(font);
        autoBtn1_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout_10->addWidget(autoBtn1_3, 1, 0, 1, 1);

        offsetGroupBox_2 = new QGroupBox(curTab);
        offsetGroupBox_2->setObjectName(QString::fromUtf8("offsetGroupBox_2"));
        offsetGroupBox_2->setGeometry(QRect(10, 120, 388, 101));
        offsetGroupBox_2->setMaximumSize(QSize(16777215, 110));
        gridLayout_9 = new QGridLayout(offsetGroupBox_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(12);
        gridLayout_9->setContentsMargins(10, 15, 10, 10);
        autoBtn1_2 = new QPushButton(offsetGroupBox_2);
        autoBtn1_2->setObjectName(QString::fromUtf8("autoBtn1_2"));
        sizePolicy1.setHeightForWidth(autoBtn1_2->sizePolicy().hasHeightForWidth());
        autoBtn1_2->setSizePolicy(sizePolicy1);
        autoBtn1_2->setFont(font);
        autoBtn1_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(autoBtn1_2, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(10);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        offsetLabel_2 = new QLabel(offsetGroupBox_2);
        offsetLabel_2->setObjectName(QString::fromUtf8("offsetLabel_2"));
        sizePolicy2.setHeightForWidth(offsetLabel_2->sizePolicy().hasHeightForWidth());
        offsetLabel_2->setSizePolicy(sizePolicy2);
        offsetLabel_2->setFont(font);
        offsetLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(offsetLabel_2);

        offsetSpinBox_2 = new QDoubleSpinBox(offsetGroupBox_2);
        offsetSpinBox_2->setObjectName(QString::fromUtf8("offsetSpinBox_2"));
        sizePolicy6.setHeightForWidth(offsetSpinBox_2->sizePolicy().hasHeightForWidth());
        offsetSpinBox_2->setSizePolicy(sizePolicy6);
        offsetSpinBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        offsetSpinBox_2->setDecimals(1);

        horizontalLayout_14->addWidget(offsetSpinBox_2);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 2);

        gridLayout_9->addLayout(horizontalLayout_14, 0, 0, 1, 1);

        clampWidget->addTab(curTab, QString());

        verticalLayout_6->addWidget(clampWidget);


        retranslateUi(CClampTabWidget);

        clampWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CClampTabWidget);
    } // setupUi

    void retranslateUi(QWidget *CClampTabWidget)
    {
        CClampTabWidget->setWindowTitle(QCoreApplication::translate("CClampTabWidget", "Form", nullptr));
        basicParamGroupBox->setTitle(QCoreApplication::translate("CClampTabWidget", "\345\237\272\346\234\254\345\217\202\346\225\260", nullptr));
        mode->setText(QCoreApplication::translate("CClampTabWidget", "\346\250\241     \345\274\217", nullptr));
        cellComboBox->setItemText(0, QCoreApplication::translate("CClampTabWidget", " \345\205\250\347\273\206\350\203\236", nullptr));

        cellComboBox->setCurrentText(QCoreApplication::translate("CClampTabWidget", " \345\205\250\347\273\206\350\203\236", nullptr));
        v_memLabel->setText(QCoreApplication::translate("CClampTabWidget", "V-mem", nullptr));
        vMimDoubleSpinBox->setPrefix(QString());
        vMimDoubleSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " mv", nullptr));
        offsetLabel->setText(QCoreApplication::translate("CClampTabWidget", "Offset", nullptr));
        offsetSpinBox->setPrefix(QString());
        offsetSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " mv", nullptr));
        autoBtn1->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        cFastGrouBox->setTitle(QCoreApplication::translate("CClampTabWidget", "Cp \350\241\245\345\201\277", nullptr));
        MagLabel->setText(QCoreApplication::translate("CClampTabWidget", "Mag", nullptr));
        magSpinBox->setPrefix(QString());
        magSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " pF", nullptr));
        TauLabel->setText(QCoreApplication::translate("CClampTabWidget", "Tau", nullptr));
        TauSpinBox->setPrefix(QString());
        TauSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " \316\274s", nullptr));
        autoBtn2->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        cSlowGroupBox->setTitle(QCoreApplication::translate("CClampTabWidget", "Cm \350\241\245\345\201\277", nullptr));
        checkBox_2->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
        label_2->setText(QCoreApplication::translate("CClampTabWidget", "Cm", nullptr));
        cmSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " pF", nullptr));
        cmSpinBox->setPrefix(QString());
        rs_label->setText(QCoreApplication::translate("CClampTabWidget", "Rs     ", nullptr));
        rsSpinBox->setPrefix(QString());
        rsSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " M\316\251", nullptr));
        autoBtn3->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        checkBox->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
        label_6->setText(QCoreApplication::translate("CClampTabWidget", "Rs\350\241\245\345\201\277", nullptr));
        spinBox_2->setSuffix(QCoreApplication::translate("CClampTabWidget", " %", nullptr));
        spinBox_2->setPrefix(QString());
        pushButton->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        clampWidget->setTabText(clampWidget->indexOf(volTab), QCoreApplication::translate("CClampTabWidget", "\347\224\265\345\216\213\351\222\2631", nullptr));
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
