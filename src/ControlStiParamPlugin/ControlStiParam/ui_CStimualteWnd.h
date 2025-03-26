/********************************************************************************
** Form generated from reading UI file 'CStimualteWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSTIMUALTEWND_H
#define UI_CSTIMUALTEWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stiParamWnd
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *amplitudeDoubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *wavewidthDoubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *frequencyDoubleSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *waveTypeComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QDoubleSpinBox *frequencyDoubleSpinBox_membranes;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QDoubleSpinBox *amplitudeDoubleSpinBox_membranes;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QComboBox *waveTypeComboBox_membranes;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QDoubleSpinBox *wavewidthDoubleSpinBox_membranes;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *stiButton;

    void setupUi(QWidget *stiParamWnd)
    {
        if (stiParamWnd->objectName().isEmpty())
            stiParamWnd->setObjectName(QString::fromUtf8("stiParamWnd"));
        stiParamWnd->resize(321, 760);
        stiParamWnd->setMaximumSize(QSize(16777215, 852));
        gridLayout_3 = new QGridLayout(stiParamWnd);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(30);
        gridLayout_3->setContentsMargins(-1, -1, -1, 30);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(stiParamWnd);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(10, 25, 10, 25);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        amplitudeDoubleSpinBox = new QDoubleSpinBox(groupBox);
        amplitudeDoubleSpinBox->setObjectName(QString::fromUtf8("amplitudeDoubleSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(amplitudeDoubleSpinBox->sizePolicy().hasHeightForWidth());
        amplitudeDoubleSpinBox->setSizePolicy(sizePolicy1);
        amplitudeDoubleSpinBox->setDecimals(1);

        horizontalLayout->addWidget(amplitudeDoubleSpinBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        wavewidthDoubleSpinBox = new QDoubleSpinBox(groupBox);
        wavewidthDoubleSpinBox->setObjectName(QString::fromUtf8("wavewidthDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(wavewidthDoubleSpinBox->sizePolicy().hasHeightForWidth());
        wavewidthDoubleSpinBox->setSizePolicy(sizePolicy1);
        wavewidthDoubleSpinBox->setDecimals(1);

        horizontalLayout_2->addWidget(wavewidthDoubleSpinBox);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        frequencyDoubleSpinBox = new QDoubleSpinBox(groupBox);
        frequencyDoubleSpinBox->setObjectName(QString::fromUtf8("frequencyDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(frequencyDoubleSpinBox->sizePolicy().hasHeightForWidth());
        frequencyDoubleSpinBox->setSizePolicy(sizePolicy1);
        frequencyDoubleSpinBox->setDecimals(1);

        horizontalLayout_3->addWidget(frequencyDoubleSpinBox);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        waveTypeComboBox = new QComboBox(groupBox);
        waveTypeComboBox->addItem(QString());
        waveTypeComboBox->setObjectName(QString::fromUtf8("waveTypeComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(waveTypeComboBox->sizePolicy().hasHeightForWidth());
        waveTypeComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(waveTypeComboBox);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/resource/tool/S_mall_wave1_new.PNG")));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setRowStretch(4, 2);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(stiParamWnd);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(10, 25, 10, 25);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_9);

        frequencyDoubleSpinBox_membranes = new QDoubleSpinBox(groupBox_2);
        frequencyDoubleSpinBox_membranes->setObjectName(QString::fromUtf8("frequencyDoubleSpinBox_membranes"));
        sizePolicy1.setHeightForWidth(frequencyDoubleSpinBox_membranes->sizePolicy().hasHeightForWidth());
        frequencyDoubleSpinBox_membranes->setSizePolicy(sizePolicy1);
        frequencyDoubleSpinBox_membranes->setDecimals(1);

        horizontalLayout_8->addWidget(frequencyDoubleSpinBox_membranes);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_7);

        amplitudeDoubleSpinBox_membranes = new QDoubleSpinBox(groupBox_2);
        amplitudeDoubleSpinBox_membranes->setObjectName(QString::fromUtf8("amplitudeDoubleSpinBox_membranes"));
        sizePolicy1.setHeightForWidth(amplitudeDoubleSpinBox_membranes->sizePolicy().hasHeightForWidth());
        amplitudeDoubleSpinBox_membranes->setSizePolicy(sizePolicy1);
        amplitudeDoubleSpinBox_membranes->setDecimals(1);

        horizontalLayout_6->addWidget(amplitudeDoubleSpinBox_membranes);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_10);

        waveTypeComboBox_membranes = new QComboBox(groupBox_2);
        waveTypeComboBox_membranes->addItem(QString());
        waveTypeComboBox_membranes->setObjectName(QString::fromUtf8("waveTypeComboBox_membranes"));
        sizePolicy2.setHeightForWidth(waveTypeComboBox_membranes->sizePolicy().hasHeightForWidth());
        waveTypeComboBox_membranes->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(waveTypeComboBox_membranes);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_9, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_8);

        wavewidthDoubleSpinBox_membranes = new QDoubleSpinBox(groupBox_2);
        wavewidthDoubleSpinBox_membranes->setObjectName(QString::fromUtf8("wavewidthDoubleSpinBox_membranes"));
        sizePolicy1.setHeightForWidth(wavewidthDoubleSpinBox_membranes->sizePolicy().hasHeightForWidth());
        wavewidthDoubleSpinBox_membranes->setSizePolicy(sizePolicy1);
        wavewidthDoubleSpinBox_membranes->setDecimals(1);

        horizontalLayout_7->addWidget(wavewidthDoubleSpinBox_membranes);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_11);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/img/resource/tool/S_mall_wave1_new.PNG")));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_12);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_10, 4, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 2);

        verticalLayout->addWidget(groupBox_2);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        stiButton = new QPushButton(stiParamWnd);
        stiButton->setObjectName(QString::fromUtf8("stiButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stiButton->sizePolicy().hasHeightForWidth());
        stiButton->setSizePolicy(sizePolicy3);
        stiButton->setMinimumSize(QSize(0, 40));
        stiButton->setMaximumSize(QSize(16777215, 30));

        gridLayout_3->addWidget(stiButton, 1, 0, 1, 1);


        retranslateUi(stiParamWnd);

        QMetaObject::connectSlotsByName(stiParamWnd);
    } // setupUi

    void retranslateUi(QWidget *stiParamWnd)
    {
        stiParamWnd->setWindowTitle(QCoreApplication::translate("stiParamWnd", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("stiParamWnd", "\346\265\213\350\257\225\350\204\211\345\206\262\345\217\202\346\225\260\350\260\203\350\212\202", nullptr));
        label->setText(QCoreApplication::translate("stiParamWnd", "\345\271\205      \345\272\246", nullptr));
        amplitudeDoubleSpinBox->setSuffix(QCoreApplication::translate("stiParamWnd", " mV", nullptr));
        label_2->setText(QCoreApplication::translate("stiParamWnd", "\346\263\242      \345\256\275", nullptr));
        wavewidthDoubleSpinBox->setSuffix(QCoreApplication::translate("stiParamWnd", " ms", nullptr));
        label_3->setText(QCoreApplication::translate("stiParamWnd", "\351\242\221      \347\216\207", nullptr));
        frequencyDoubleSpinBox->setSuffix(QCoreApplication::translate("stiParamWnd", " Hz", nullptr));
        label_4->setText(QCoreApplication::translate("stiParamWnd", "\346\263\242      \345\275\242", nullptr));
        waveTypeComboBox->setItemText(0, QCoreApplication::translate("stiParamWnd", "\346\226\271\346\263\242", nullptr));

        label_5->setText(QCoreApplication::translate("stiParamWnd", "\346\263\242\345\275\242\347\244\272\346\204\217", nullptr));
        label_6->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("stiParamWnd", "\347\240\264\350\206\234\350\204\211\345\206\262\345\217\202\346\225\260\350\260\203\350\212\202", nullptr));
        label_9->setText(QCoreApplication::translate("stiParamWnd", "\351\242\221     \347\216\207", nullptr));
        frequencyDoubleSpinBox_membranes->setSuffix(QCoreApplication::translate("stiParamWnd", " Hz", nullptr));
        label_7->setText(QCoreApplication::translate("stiParamWnd", "\345\271\205     \345\272\246", nullptr));
        amplitudeDoubleSpinBox_membranes->setSuffix(QCoreApplication::translate("stiParamWnd", " V", nullptr));
        label_10->setText(QCoreApplication::translate("stiParamWnd", "\346\263\242      \345\275\242", nullptr));
        waveTypeComboBox_membranes->setItemText(0, QCoreApplication::translate("stiParamWnd", "\346\226\271\346\263\242", nullptr));

        label_8->setText(QCoreApplication::translate("stiParamWnd", "\346\263\242     \345\256\275", nullptr));
        wavewidthDoubleSpinBox_membranes->setSuffix(QCoreApplication::translate("stiParamWnd", " ms", nullptr));
        label_11->setText(QCoreApplication::translate("stiParamWnd", "\346\263\242\345\275\242\347\244\272\346\204\217", nullptr));
        label_12->setText(QString());
        stiButton->setText(QCoreApplication::translate("stiParamWnd", "\347\240\264 \350\206\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stiParamWnd: public Ui_stiParamWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSTIMUALTEWND_H
