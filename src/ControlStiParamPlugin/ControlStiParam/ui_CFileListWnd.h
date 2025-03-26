/********************************************************************************
** Form generated from reading UI file 'CFileListWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFILELISTWND_H
#define UI_CFILELISTWND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileListWnd
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEdit_3;
    QPushButton *searchBtn;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QTreeWidget *fileTreeWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit_2;
    QPushButton *fileDirBtn;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *fileListWnd)
    {
        if (fileListWnd->objectName().isEmpty())
            fileListWnd->setObjectName(QString::fromUtf8("fileListWnd"));
        fileListWnd->resize(287, 914);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileListWnd->sizePolicy().hasHeightForWidth());
        fileListWnd->setSizePolicy(sizePolicy);
        fileListWnd->setMinimumSize(QSize(256, 35));
        gridLayout_3 = new QGridLayout(fileListWnd);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(15);
        gridLayout_3->setContentsMargins(21, -1, 21, 45);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_5 = new QGroupBox(fileListWnd);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(16, 15, 16, 15);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        textEdit_3 = new QTextEdit(groupBox_5);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        sizePolicy.setHeightForWidth(textEdit_3->sizePolicy().hasHeightForWidth());
        textEdit_3->setSizePolicy(sizePolicy);
        textEdit_3->setMinimumSize(QSize(0, 0));
        textEdit_3->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(13);
        textEdit_3->setFont(font);

        horizontalLayout_4->addWidget(textEdit_3);

        searchBtn = new QPushButton(groupBox_5);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchBtn->sizePolicy().hasHeightForWidth());
        searchBtn->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/resource/tool/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchBtn->setIcon(icon);

        horizontalLayout_4->addWidget(searchBtn);

        horizontalLayout_4->setStretch(0, 6);
        horizontalLayout_4->setStretch(1, 1);

        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(fileListWnd);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setMinimumSize(QSize(0, 0));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(16, 25, 16, 25);
        fileTreeWidget = new QTreeWidget(groupBox_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(fileTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem7);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(fileTreeWidget);
        new QTreeWidgetItem(__qtreewidgetitem8);
        fileTreeWidget->setObjectName(QString::fromUtf8("fileTreeWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fileTreeWidget->sizePolicy().hasHeightForWidth());
        fileTreeWidget->setSizePolicy(sizePolicy3);
        fileTreeWidget->setMinimumSize(QSize(0, 0));
        fileTreeWidget->setBaseSize(QSize(0, 400));

        gridLayout_4->addWidget(fileTreeWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(fileListWnd);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(16, 15, 16, 15);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        sizePolicy.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy);
        textEdit_2->setMinimumSize(QSize(0, 0));
        textEdit_2->setMaximumSize(QSize(16777215, 40));
        textEdit_2->setFont(font);

        horizontalLayout_2->addWidget(textEdit_2);

        fileDirBtn = new QPushButton(groupBox_2);
        fileDirBtn->setObjectName(QString::fromUtf8("fileDirBtn"));
        sizePolicy.setHeightForWidth(fileDirBtn->sizePolicy().hasHeightForWidth());
        fileDirBtn->setSizePolicy(sizePolicy);
        fileDirBtn->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(fileDirBtn);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(fileListWnd);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(16, -1, 16, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 30, -1);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/resource/tool/Tips.png")));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        label_5 = new QLabel(fileListWnd);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 20);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 1);

        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(fileListWnd);

        QMetaObject::connectSlotsByName(fileListWnd);
    } // setupUi

    void retranslateUi(QWidget *fileListWnd)
    {
        fileListWnd->setWindowTitle(QCoreApplication::translate("fileListWnd", "Form", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("fileListWnd", "\346\220\234\347\264\242\357\274\210\350\257\267\350\276\223\345\205\245\351\241\271\347\233\256\345\220\215\357\274\211", nullptr));
        searchBtn->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("fileListWnd", "\346\225\260\346\215\256\347\233\256\345\275\225", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = fileTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("fileListWnd", "Data", nullptr));

        const bool __sortingEnabled = fileTreeWidget->isSortingEnabled();
        fileTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = fileTreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("fileListWnd", "\345\270\225\351\207\221\346\243\256\347\245\236\347\273\217\346\234\272\345\210\266\347\263\273\347\273\237", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("fileListWnd", "2025-6-30", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2371", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2372", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem2->child(2);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2373", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem2->child(3);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2374", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("fileListWnd", "2025-7-1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2371", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2372", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem7->child(2);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2373", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("fileListWnd", "2025-7-2", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem11->child(0);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2372", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem11->child(1);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2371", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem11->child(2);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2373", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("fileListWnd", "2025-7-3", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem15->child(0);
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2371", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem15->child(1);
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2372", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem15->child(2);
        ___qtreewidgetitem18->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2373", nullptr));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem15->child(3);
        ___qtreewidgetitem19->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2374", nullptr));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem20->setText(0, QCoreApplication::translate("fileListWnd", "2025-7-4", nullptr));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem20->child(0);
        ___qtreewidgetitem21->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2371", nullptr));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem1->child(5);
        ___qtreewidgetitem22->setText(0, QCoreApplication::translate("fileListWnd", "2025-7-5", nullptr));
        QTreeWidgetItem *___qtreewidgetitem23 = ___qtreewidgetitem22->child(0);
        ___qtreewidgetitem23->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2371", nullptr));
        QTreeWidgetItem *___qtreewidgetitem24 = ___qtreewidgetitem1->child(6);
        ___qtreewidgetitem24->setText(0, QCoreApplication::translate("fileListWnd", "2025-7-6", nullptr));
        QTreeWidgetItem *___qtreewidgetitem25 = ___qtreewidgetitem24->child(0);
        ___qtreewidgetitem25->setText(0, QCoreApplication::translate("fileListWnd", "\351\222\276\351\200\232\351\201\223\345\273\266\350\277\2371", nullptr));
        QTreeWidgetItem *___qtreewidgetitem26 = fileTreeWidget->topLevelItem(1);
        ___qtreewidgetitem26->setText(0, QCoreApplication::translate("fileListWnd", "\350\226\204\350\206\234\350\277\207\346\273\244\345\231\250\347\232\204\346\227\240\350\217\214\350\257\225\351\252\214", nullptr));
        QTreeWidgetItem *___qtreewidgetitem27 = ___qtreewidgetitem26->child(0);
        ___qtreewidgetitem27->setText(0, QCoreApplication::translate("fileListWnd", "2025-6-30", nullptr));
        fileTreeWidget->setSortingEnabled(__sortingEnabled);

        groupBox_2->setTitle(QCoreApplication::translate("fileListWnd", "\345\275\223\345\211\215\347\233\256\345\275\225", nullptr));
        fileDirBtn->setText(QCoreApplication::translate("fileListWnd", "...", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("fileListWnd", "\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\346\226\207\344\273\266\345\220\215\345\220\257\345\212\250\345\217\215\346\274\224\357\274\201", nullptr));
        label_5->setText(QCoreApplication::translate("fileListWnd", "\345\275\223\345\211\215\345\211\251\344\275\231\347\243\201\347\233\230\347\251\272\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fileListWnd: public Ui_fileListWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFILELISTWND_H
