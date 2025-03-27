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
    QVBoxLayout *verticalLayout_5;
    QTabWidget *clampWidget;
    QWidget *volTab;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *basicParamGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *mode;
    QComboBox *cellComboBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_9;
    QLabel *v_memLabel;
    QDoubleSpinBox *vMimDoubleSpinBox;
    QFrame *offsetFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_8;
    QLabel *offsetLabel;
    QDoubleSpinBox *offsetSpinBox;
    QPushButton *autoBtn1;
    QGroupBox *cFastGrouBox;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *checkBox_7;
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
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpinBox *currSpinBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QDoubleSpinBox *lagSpinBox;
    QPushButton *pushButton;
    QWidget *curTab;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *basicParamGroupBox_2;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *mode_2;
    QComboBox *cellComboBox_2;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_6;
    QLabel *v_memLabel_2;
    QDoubleSpinBox *cMimDoubleSpinBox;
    QGroupBox *offsetGroupBox_2;
    QHBoxLayout *horizontalLayout_22;
    QCheckBox *checkBox_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *offsetLabel_2;
    QDoubleSpinBox *cOffsetSpinBox;
    QPushButton *autoBtn1_2;
    QGroupBox *offsetGroupBox_3;
    QHBoxLayout *horizontalLayout_23;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *offsetLabel_3;
    QDoubleSpinBox *cMagSpinBox;
    QPushButton *autoBtn1_3;
    QGroupBox *offsetGroupBox_4;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *checkBox_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_16;
    QLabel *offsetLabel_4;
    QDoubleSpinBox *cPercSpinBox;
    QHBoxLayout *horizontalLayout_24;
    QLabel *offsetLabel_5;
    QDoubleSpinBox *cAmplSpinBox;
    QHBoxLayout *horizontalLayout_25;
    QLabel *offsetLabel_6;
    QDoubleSpinBox *cDurSpinBox;
    QPushButton *autoBtn1_4;

    void setupUi(QWidget *CClampTabWidget)
    {
        if (CClampTabWidget->objectName().isEmpty())
            CClampTabWidget->setObjectName(QString::fromUtf8("CClampTabWidget"));
        CClampTabWidget->resize(672, 678);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CClampTabWidget->sizePolicy().hasHeightForWidth());
        CClampTabWidget->setSizePolicy(sizePolicy);
        CClampTabWidget->setMaximumSize(QSize(16777215, 680));
        verticalLayout_5 = new QVBoxLayout(CClampTabWidget);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        clampWidget = new QTabWidget(CClampTabWidget);
        clampWidget->setObjectName(QString::fromUtf8("clampWidget"));
        volTab = new QWidget();
        volTab->setObjectName(QString::fromUtf8("volTab"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volTab->sizePolicy().hasHeightForWidth());
        volTab->setSizePolicy(sizePolicy1);
        verticalLayout_7 = new QVBoxLayout(volTab);
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
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
        cellComboBox->setMinimumSize(QSize(122, 30));
        cellComboBox->setMaximumSize(QSize(16777215, 16777215));
        cellComboBox->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout->addWidget(cellComboBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_9 = new QCheckBox(basicParamGroupBox);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        horizontalLayout_2->addWidget(checkBox_9);

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
        vMimDoubleSpinBox->setMinimumSize(QSize(122, 30));
        vMimDoubleSpinBox->setMaximumSize(QSize(16777215, 16777215));
        vMimDoubleSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vMimDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(vMimDoubleSpinBox);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_7->addWidget(basicParamGroupBox);

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
        checkBox_8 = new QCheckBox(offsetFrame);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        horizontalLayout_3->addWidget(checkBox_8);

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
        offsetSpinBox->setMinimumSize(QSize(122, 30));
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


        verticalLayout_7->addWidget(offsetFrame);

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
        checkBox_7 = new QCheckBox(cFastGrouBox);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        horizontalLayout_19->addWidget(checkBox_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
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
        magSpinBox->setMinimumSize(QSize(122, 30));
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
        TauSpinBox->setMinimumSize(QSize(122, 30));
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


        verticalLayout_7->addWidget(cFastGrouBox);

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
        verticalLayout_2->setSpacing(5);
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
        cmSpinBox->setMinimumSize(QSize(122, 30));
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
        rsSpinBox->setMinimumSize(QSize(122, 30));
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


        verticalLayout_7->addWidget(cSlowGroupBox);

        RsFrame = new QFrame(volTab);
        RsFrame->setObjectName(QString::fromUtf8("RsFrame"));
        sizePolicy2.setHeightForWidth(RsFrame->sizePolicy().hasHeightForWidth());
        RsFrame->setSizePolicy(sizePolicy2);
        RsFrame->setMaximumSize(QSize(16777215, 16777215));
        RsFrame->setFont(font);
        horizontalLayout_20 = new QHBoxLayout(RsFrame);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        checkBox = new QCheckBox(RsFrame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_20->addWidget(checkBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 10, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
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

        currSpinBox = new QSpinBox(RsFrame);
        currSpinBox->setObjectName(QString::fromUtf8("currSpinBox"));
        sizePolicy2.setHeightForWidth(currSpinBox->sizePolicy().hasHeightForWidth());
        currSpinBox->setSizePolicy(sizePolicy2);
        currSpinBox->setMinimumSize(QSize(122, 35));
        currSpinBox->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_9->addWidget(currSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, -1, 30, -1);
        label = new QLabel(RsFrame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(50, 0));

        horizontalLayout_11->addWidget(label);

        lagSpinBox = new QDoubleSpinBox(RsFrame);
        lagSpinBox->setObjectName(QString::fromUtf8("lagSpinBox"));
        sizePolicy2.setHeightForWidth(lagSpinBox->sizePolicy().hasHeightForWidth());
        lagSpinBox->setSizePolicy(sizePolicy2);
        lagSpinBox->setMinimumSize(QSize(122, 30));

        horizontalLayout_11->addWidget(lagSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_11);


        horizontalLayout_10->addLayout(verticalLayout_6);

        pushButton = new QPushButton(RsFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(70, 30));
        pushButton->setMaximumSize(QSize(70, 30));

        horizontalLayout_10->addWidget(pushButton);


        horizontalLayout_20->addLayout(horizontalLayout_10);


        verticalLayout_7->addWidget(RsFrame);

        clampWidget->addTab(volTab, QString());
        curTab = new QWidget();
        curTab->setObjectName(QString::fromUtf8("curTab"));
        verticalLayout_9 = new QVBoxLayout(curTab);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        basicParamGroupBox_2 = new QGroupBox(curTab);
        basicParamGroupBox_2->setObjectName(QString::fromUtf8("basicParamGroupBox_2"));
        sizePolicy1.setHeightForWidth(basicParamGroupBox_2->sizePolicy().hasHeightForWidth());
        basicParamGroupBox_2->setSizePolicy(sizePolicy1);
        basicParamGroupBox_2->setMaximumSize(QSize(16777215, 16777215));
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
        sizePolicy2.setHeightForWidth(cellComboBox_2->sizePolicy().hasHeightForWidth());
        cellComboBox_2->setSizePolicy(sizePolicy2);
        cellComboBox_2->setMinimumSize(QSize(122, 30));
        cellComboBox_2->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_12->addWidget(cellComboBox_2);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 2);

        gridLayout_8->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(10);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        checkBox_6 = new QCheckBox(basicParamGroupBox_2);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        horizontalLayout_13->addWidget(checkBox_6);

        v_memLabel_2 = new QLabel(basicParamGroupBox_2);
        v_memLabel_2->setObjectName(QString::fromUtf8("v_memLabel_2"));
        sizePolicy2.setHeightForWidth(v_memLabel_2->sizePolicy().hasHeightForWidth());
        v_memLabel_2->setSizePolicy(sizePolicy2);
        v_memLabel_2->setFont(font1);
        v_memLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(v_memLabel_2);

        cMimDoubleSpinBox = new QDoubleSpinBox(basicParamGroupBox_2);
        cMimDoubleSpinBox->setObjectName(QString::fromUtf8("cMimDoubleSpinBox"));
        sizePolicy2.setHeightForWidth(cMimDoubleSpinBox->sizePolicy().hasHeightForWidth());
        cMimDoubleSpinBox->setSizePolicy(sizePolicy2);
        cMimDoubleSpinBox->setMinimumSize(QSize(122, 30));
        cMimDoubleSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cMimDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_13->addWidget(cMimDoubleSpinBox);

        horizontalLayout_13->setStretch(1, 1);
        horizontalLayout_13->setStretch(2, 2);

        gridLayout_8->addLayout(horizontalLayout_13, 1, 0, 1, 1);

        gridLayout_8->setRowStretch(0, 1);
        gridLayout_8->setRowStretch(1, 1);

        verticalLayout_9->addWidget(basicParamGroupBox_2);

        offsetGroupBox_2 = new QGroupBox(curTab);
        offsetGroupBox_2->setObjectName(QString::fromUtf8("offsetGroupBox_2"));
        offsetGroupBox_2->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_22 = new QHBoxLayout(offsetGroupBox_2);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(10, 15, 10, 10);
        checkBox_5 = new QCheckBox(offsetGroupBox_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        horizontalLayout_22->addWidget(checkBox_5);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(10);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, -1, 30, -1);
        offsetLabel_2 = new QLabel(offsetGroupBox_2);
        offsetLabel_2->setObjectName(QString::fromUtf8("offsetLabel_2"));
        sizePolicy2.setHeightForWidth(offsetLabel_2->sizePolicy().hasHeightForWidth());
        offsetLabel_2->setSizePolicy(sizePolicy2);
        offsetLabel_2->setFont(font);
        offsetLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(offsetLabel_2);

        cOffsetSpinBox = new QDoubleSpinBox(offsetGroupBox_2);
        cOffsetSpinBox->setObjectName(QString::fromUtf8("cOffsetSpinBox"));
        sizePolicy2.setHeightForWidth(cOffsetSpinBox->sizePolicy().hasHeightForWidth());
        cOffsetSpinBox->setSizePolicy(sizePolicy2);
        cOffsetSpinBox->setMinimumSize(QSize(122, 30));
        cOffsetSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cOffsetSpinBox->setDecimals(1);

        horizontalLayout_14->addWidget(cOffsetSpinBox);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 2);

        horizontalLayout_22->addLayout(horizontalLayout_14);

        autoBtn1_2 = new QPushButton(offsetGroupBox_2);
        autoBtn1_2->setObjectName(QString::fromUtf8("autoBtn1_2"));
        sizePolicy1.setHeightForWidth(autoBtn1_2->sizePolicy().hasHeightForWidth());
        autoBtn1_2->setSizePolicy(sizePolicy1);
        autoBtn1_2->setMinimumSize(QSize(70, 30));
        autoBtn1_2->setMaximumSize(QSize(70, 30));
        autoBtn1_2->setFont(font);
        autoBtn1_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_22->addWidget(autoBtn1_2);


        verticalLayout_9->addWidget(offsetGroupBox_2);

        offsetGroupBox_3 = new QGroupBox(curTab);
        offsetGroupBox_3->setObjectName(QString::fromUtf8("offsetGroupBox_3"));
        offsetGroupBox_3->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_23 = new QHBoxLayout(offsetGroupBox_3);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(10, 15, 10, 10);
        checkBox_4 = new QCheckBox(offsetGroupBox_3);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        horizontalLayout_23->addWidget(checkBox_4);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(10);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(-1, -1, 30, -1);
        offsetLabel_3 = new QLabel(offsetGroupBox_3);
        offsetLabel_3->setObjectName(QString::fromUtf8("offsetLabel_3"));
        sizePolicy2.setHeightForWidth(offsetLabel_3->sizePolicy().hasHeightForWidth());
        offsetLabel_3->setSizePolicy(sizePolicy2);
        offsetLabel_3->setFont(font);
        offsetLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(offsetLabel_3);

        cMagSpinBox = new QDoubleSpinBox(offsetGroupBox_3);
        cMagSpinBox->setObjectName(QString::fromUtf8("cMagSpinBox"));
        sizePolicy2.setHeightForWidth(cMagSpinBox->sizePolicy().hasHeightForWidth());
        cMagSpinBox->setSizePolicy(sizePolicy2);
        cMagSpinBox->setMinimumSize(QSize(122, 30));
        cMagSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cMagSpinBox->setDecimals(1);

        horizontalLayout_15->addWidget(cMagSpinBox);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 2);

        horizontalLayout_23->addLayout(horizontalLayout_15);

        autoBtn1_3 = new QPushButton(offsetGroupBox_3);
        autoBtn1_3->setObjectName(QString::fromUtf8("autoBtn1_3"));
        sizePolicy1.setHeightForWidth(autoBtn1_3->sizePolicy().hasHeightForWidth());
        autoBtn1_3->setSizePolicy(sizePolicy1);
        autoBtn1_3->setMinimumSize(QSize(70, 30));
        autoBtn1_3->setMaximumSize(QSize(70, 30));
        autoBtn1_3->setFont(font);
        autoBtn1_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_23->addWidget(autoBtn1_3);


        verticalLayout_9->addWidget(offsetGroupBox_3);

        offsetGroupBox_4 = new QGroupBox(curTab);
        offsetGroupBox_4->setObjectName(QString::fromUtf8("offsetGroupBox_4"));
        offsetGroupBox_4->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_26 = new QHBoxLayout(offsetGroupBox_4);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        checkBox_3 = new QCheckBox(offsetGroupBox_4);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_26->addWidget(checkBox_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(10);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(10);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, -1, 30, -1);
        offsetLabel_4 = new QLabel(offsetGroupBox_4);
        offsetLabel_4->setObjectName(QString::fromUtf8("offsetLabel_4"));
        sizePolicy2.setHeightForWidth(offsetLabel_4->sizePolicy().hasHeightForWidth());
        offsetLabel_4->setSizePolicy(sizePolicy2);
        offsetLabel_4->setFont(font);
        offsetLabel_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(offsetLabel_4);

        cPercSpinBox = new QDoubleSpinBox(offsetGroupBox_4);
        cPercSpinBox->setObjectName(QString::fromUtf8("cPercSpinBox"));
        sizePolicy2.setHeightForWidth(cPercSpinBox->sizePolicy().hasHeightForWidth());
        cPercSpinBox->setSizePolicy(sizePolicy2);
        cPercSpinBox->setMinimumSize(QSize(122, 30));
        cPercSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cPercSpinBox->setDecimals(1);

        horizontalLayout_16->addWidget(cPercSpinBox);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 2);

        verticalLayout_8->addLayout(horizontalLayout_16);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(10);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(-1, -1, 30, -1);
        offsetLabel_5 = new QLabel(offsetGroupBox_4);
        offsetLabel_5->setObjectName(QString::fromUtf8("offsetLabel_5"));
        sizePolicy2.setHeightForWidth(offsetLabel_5->sizePolicy().hasHeightForWidth());
        offsetLabel_5->setSizePolicy(sizePolicy2);
        offsetLabel_5->setMinimumSize(QSize(120, 0));
        offsetLabel_5->setFont(font);
        offsetLabel_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_24->addWidget(offsetLabel_5);

        cAmplSpinBox = new QDoubleSpinBox(offsetGroupBox_4);
        cAmplSpinBox->setObjectName(QString::fromUtf8("cAmplSpinBox"));
        sizePolicy2.setHeightForWidth(cAmplSpinBox->sizePolicy().hasHeightForWidth());
        cAmplSpinBox->setSizePolicy(sizePolicy2);
        cAmplSpinBox->setMinimumSize(QSize(122, 30));
        cAmplSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cAmplSpinBox->setDecimals(1);

        horizontalLayout_24->addWidget(cAmplSpinBox);

        horizontalLayout_24->setStretch(0, 1);
        horizontalLayout_24->setStretch(1, 2);

        verticalLayout_8->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(10);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(-1, -1, 30, -1);
        offsetLabel_6 = new QLabel(offsetGroupBox_4);
        offsetLabel_6->setObjectName(QString::fromUtf8("offsetLabel_6"));
        sizePolicy2.setHeightForWidth(offsetLabel_6->sizePolicy().hasHeightForWidth());
        offsetLabel_6->setSizePolicy(sizePolicy2);
        offsetLabel_6->setMinimumSize(QSize(120, 0));
        offsetLabel_6->setFont(font);
        offsetLabel_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_25->addWidget(offsetLabel_6);

        cDurSpinBox = new QDoubleSpinBox(offsetGroupBox_4);
        cDurSpinBox->setObjectName(QString::fromUtf8("cDurSpinBox"));
        sizePolicy2.setHeightForWidth(cDurSpinBox->sizePolicy().hasHeightForWidth());
        cDurSpinBox->setSizePolicy(sizePolicy2);
        cDurSpinBox->setMinimumSize(QSize(122, 30));
        cDurSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cDurSpinBox->setDecimals(1);

        horizontalLayout_25->addWidget(cDurSpinBox);

        horizontalLayout_25->setStretch(0, 1);
        horizontalLayout_25->setStretch(1, 2);

        verticalLayout_8->addLayout(horizontalLayout_25);


        horizontalLayout_26->addLayout(verticalLayout_8);

        autoBtn1_4 = new QPushButton(offsetGroupBox_4);
        autoBtn1_4->setObjectName(QString::fromUtf8("autoBtn1_4"));
        sizePolicy1.setHeightForWidth(autoBtn1_4->sizePolicy().hasHeightForWidth());
        autoBtn1_4->setSizePolicy(sizePolicy1);
        autoBtn1_4->setMinimumSize(QSize(70, 30));
        autoBtn1_4->setMaximumSize(QSize(70, 30));
        autoBtn1_4->setFont(font);
        autoBtn1_4->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_26->addWidget(autoBtn1_4);


        verticalLayout_9->addWidget(offsetGroupBox_4);

        clampWidget->addTab(curTab, QString());

        verticalLayout_5->addWidget(clampWidget);


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
        checkBox_9->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
        v_memLabel->setText(QCoreApplication::translate("CClampTabWidget", "V-mem", nullptr));
        vMimDoubleSpinBox->setPrefix(QString());
        vMimDoubleSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " mv", nullptr));
        checkBox_8->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
        offsetLabel->setText(QCoreApplication::translate("CClampTabWidget", "Offset", nullptr));
        offsetSpinBox->setPrefix(QString());
        offsetSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " mv", nullptr));
        autoBtn1->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        cFastGrouBox->setTitle(QCoreApplication::translate("CClampTabWidget", "Cp \350\241\245\345\201\277", nullptr));
        checkBox_7->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
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
        currSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " %", nullptr));
        currSpinBox->setPrefix(QString());
        label->setText(QCoreApplication::translate("CClampTabWidget", "Lag", nullptr));
        lagSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " \316\274s", nullptr));
        pushButton->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        clampWidget->setTabText(clampWidget->indexOf(volTab), QCoreApplication::translate("CClampTabWidget", "\347\224\265\345\216\213\351\222\263", nullptr));
        basicParamGroupBox_2->setTitle(QCoreApplication::translate("CClampTabWidget", "\345\237\272\346\234\254\345\217\202\346\225\260", nullptr));
        mode_2->setText(QCoreApplication::translate("CClampTabWidget", "\346\250\241     \345\274\217", nullptr));
        cellComboBox_2->setItemText(0, QCoreApplication::translate("CClampTabWidget", " \345\205\250\347\273\206\350\203\236", nullptr));

        cellComboBox_2->setCurrentText(QCoreApplication::translate("CClampTabWidget", " \345\205\250\347\273\206\350\203\236", nullptr));
        checkBox_6->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
        v_memLabel_2->setText(QCoreApplication::translate("CClampTabWidget", "l-mem", nullptr));
        cMimDoubleSpinBox->setPrefix(QString());
        cMimDoubleSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", " mv", nullptr));
        offsetGroupBox_2->setTitle(QString());
        checkBox_5->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
        offsetLabel_2->setText(QCoreApplication::translate("CClampTabWidget", "Offset", nullptr));
        cOffsetSpinBox->setPrefix(QString());
        cOffsetSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", "mv", nullptr));
        autoBtn1_2->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        offsetGroupBox_3->setTitle(QCoreApplication::translate("CClampTabWidget", "Cp\350\241\245\345\201\277", nullptr));
        checkBox_4->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
        offsetLabel_3->setText(QCoreApplication::translate("CClampTabWidget", "Mag", nullptr));
        cMagSpinBox->setPrefix(QString());
        cMagSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", "pF", nullptr));
        autoBtn1_3->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        offsetGroupBox_4->setTitle(QCoreApplication::translate("CClampTabWidget", "\346\241\245\345\271\263\350\241\241\346\240\241\346\255\243", nullptr));
        checkBox_3->setText(QCoreApplication::translate("CClampTabWidget", "\345\220\257\347\224\250", nullptr));
        offsetLabel_4->setText(QCoreApplication::translate("CClampTabWidget", "\347\231\276\345\210\206\346\257\224", nullptr));
        cPercSpinBox->setPrefix(QString());
        cPercSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", "%", nullptr));
        offsetLabel_5->setText(QCoreApplication::translate("CClampTabWidget", "Auto Bridge Ampl", nullptr));
        cAmplSpinBox->setPrefix(QString());
        cAmplSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", "pA", nullptr));
        offsetLabel_6->setText(QCoreApplication::translate("CClampTabWidget", "Auto Bridge Dur", nullptr));
        cDurSpinBox->setPrefix(QString());
        cDurSpinBox->setSuffix(QCoreApplication::translate("CClampTabWidget", "ms", nullptr));
        autoBtn1_4->setText(QCoreApplication::translate("CClampTabWidget", "Auto", nullptr));
        clampWidget->setTabText(clampWidget->indexOf(curTab), QCoreApplication::translate("CClampTabWidget", "\347\224\265\346\265\201\351\222\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CClampTabWidget: public Ui_CClampTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCLAMPTABWIDGET_H
