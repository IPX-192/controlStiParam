/********************************************************************************
** Form generated from reading UI file 'CParamWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPARAMWND_H
#define UI_CPARAMWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chaParamWnd
{
public:
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_channel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QCheckBox *checkBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QComboBox *comboBox_6;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *chaParamWnd)
    {
        if (chaParamWnd->objectName().isEmpty())
            chaParamWnd->setObjectName(QString::fromUtf8("chaParamWnd"));
        chaParamWnd->resize(296, 914);
        gridLayout_5 = new QGridLayout(chaParamWnd);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(10);
        gridLayout_5->setContentsMargins(20, 15, 15, 125);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(chaParamWnd);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, 10, 20, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        comboBox_channel = new QComboBox(groupBox);
        comboBox_channel->addItem(QString());
        comboBox_channel->setObjectName(QString::fromUtf8("comboBox_channel"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_channel->sizePolicy().hasHeightForWidth());
        comboBox_channel->setSizePolicy(sizePolicy1);
        comboBox_channel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(comboBox_channel);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(chaParamWnd);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(16);
        gridLayout_2->setContentsMargins(20, 25, 20, 25);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        comboBox_4 = new QComboBox(groupBox_2);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(comboBox_4);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy2.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(comboBox_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_6);

        comboBox_5 = new QComboBox(groupBox_2);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        sizePolicy2.setHeightForWidth(comboBox_5->sizePolicy().hasHeightForWidth());
        comboBox_5->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(comboBox_5);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(lineEdit);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        sizePolicy2.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(comboBox_3);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(70);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(label_7);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setToolTipDuration(1);

        horizontalLayout_7->addWidget(checkBox);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_7, 5, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(chaParamWnd);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(20, 10, 20, 10);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_8);

        comboBox_6 = new QComboBox(groupBox_3);
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        sizePolicy2.setHeightForWidth(comboBox_6->sizePolicy().hasHeightForWidth());
        comboBox_6->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(comboBox_6);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 2);

        gridLayout_3->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(chaParamWnd);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(16);
        gridLayout_4->setContentsMargins(20, 25, 20, 25);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_9);

        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy3.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(lineEdit_2);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 2);

        gridLayout_4->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_10);

        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy3.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(lineEdit_3);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);

        gridLayout_4->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(10);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_11);

        lineEdit_4 = new QLineEdit(groupBox_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy3.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy3);

        horizontalLayout_11->addWidget(lineEdit_4);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 2);

        gridLayout_4->addLayout(horizontalLayout_11, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 3);

        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(chaParamWnd);

        QMetaObject::connectSlotsByName(chaParamWnd);
    } // setupUi

    void retranslateUi(QWidget *chaParamWnd)
    {
        chaParamWnd->setWindowTitle(QCoreApplication::translate("chaParamWnd", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("chaParamWnd", "\350\276\223\345\205\245\351\200\232\351\201\223", nullptr));
        comboBox_channel->setItemText(0, QCoreApplication::translate("chaParamWnd", "1\351\200\232\351\201\223", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("chaParamWnd", "\350\276\223\345\205\245\351\200\232\351\201\223\345\217\202\346\225\260", nullptr));
        label_5->setText(QCoreApplication::translate("chaParamWnd", "\346\273\244     \346\263\242", nullptr));
        label_3->setText(QCoreApplication::translate("chaParamWnd", "\351\207\207 \346\240\267 \347\216\207", nullptr));
        label_6->setText(QCoreApplication::translate("chaParamWnd", "\346\211\253\346\217\217\351\200\237\345\272\246", nullptr));
        label_2->setText(QCoreApplication::translate("chaParamWnd", "\347\261\273     \345\236\213", nullptr));
        label_4->setText(QCoreApplication::translate("chaParamWnd", "\345\242\236     \347\233\212", nullptr));
        label_7->setText(QString());
        checkBox->setText(QCoreApplication::translate("chaParamWnd", "\345\267\245\351\242\221\345\271\262\346\211\260", "2"));
        groupBox_3->setTitle(QString());
        label_8->setText(QCoreApplication::translate("chaParamWnd", "\350\276\223\345\207\272\351\200\232\351\201\223", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("chaParamWnd", "1\351\200\232\351\201\223", nullptr));

        groupBox_4->setTitle(QCoreApplication::translate("chaParamWnd", "\350\276\223\345\207\272\351\200\232\351\201\223\344\277\241\346\201\257", nullptr));
        label_9->setText(QCoreApplication::translate("chaParamWnd", "\347\261\273      \345\236\213", nullptr));
        label_10->setText(QCoreApplication::translate("chaParamWnd", "\346\250\241      \345\274\217", nullptr));
        label_11->setText(QCoreApplication::translate("chaParamWnd", "\350\214\203      \345\233\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chaParamWnd: public Ui_chaParamWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPARAMWND_H
