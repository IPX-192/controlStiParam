#include "CDataMonitorPanel.h"

#include <QDebug>
#pragma execution_character_set("utf-8")


CDataMonitorPanel::CDataMonitorPanel(QWidget *parentWidget)
{
    customInit();
    displayResultData();
}

CDataMonitorPanel::~CDataMonitorPanel()
{

}

void CDataMonitorPanel::customInit()
{
    //填充表格

    QVector<QString> vecTemp;


    vecTemp << tr(u8" ")<<  tr(u8"探头1") << tr(u8"探头2");

    setHeaderText(0, 0, vecTemp);

    QColor colorBackHead(38,38,38);
    QColor colorBackOddNumberRow(83,83,83);
    QColor colorBackEvenNumberRow(74,74,74);
    QColor colorText(255,255,255);


    auto dataModel = getDataModel();

    QTableWidgetItem *pItem;

    //设置行的颜色

    //设置表头

    // auto curRow = getDataModel()->rowCount();
    // getDataModel()->setRowCount(6);
    // getDataModel()->setColumnCount(vecTemp.size());

    for(int j = 0; j < vecTemp.size(); j++)
    {
        setCellData(0, j, Qt::AlignCenter, TableView::FORM_HRADER, Qt::TextAlignmentRole);


        pItem = m_pTableHeader->item(0, j);
        if(m_pTableHeader != nullptr)
        {
            pItem->setForeground(QBrush(colorText));
            pItem->setBackground(QBrush(colorBackHead));
        }
    }


    this->setStyleSheet("#dataMonitorTableView {"
                        "   alternate-background-color: #535353;" // tableView1 双行颜色
                        "   background-color: #4a4a4a;" // tableView1 单行颜色
                        "}"
                        );



    // setCellItemType(0, 1, cell::checkBox, TableView::FORM_HRADER);

    // //针对这几列采用自己的颜色绘制
    //CTableViewBasic::customInit();
    //displayResultData();
}

void CDataMonitorPanel::displayResultData()
{
    //注：一定要先设置格子类型然后填充数据,最后设置图片等操作才会生效
    setAlternatingRowColors(true);  //设置单双行颜色不同
    setDispColNumFlag(false);       //不显示列序号
    //setResizeToContentsFlag(true);
    setColItemType(5, cell::btn);


    //setColItemType(6, cell::checkBox);  //暂时不用编辑框，用按钮
    setColItemType(6, cell::btn);



    // //removeData();
    // QVector<QString> vecTemp;
    // QString strDate, strLastDate;
    // int currentRow = 0;
    // int colIndex = 0;

    // vecTemp.clear();
    // vecTemp<<"1"<< u8"50" << "/";

    // setText(0, 0, vecTemp);


    // vecTemp.clear();
    // vecTemp<<"2"<< u8"57" << "/";

    // setText(1, 0, vecTemp);
    // vecTemp.clear();
    // vecTemp<<"3"<< u8"22" << "/";

    // setText(2, 0, vecTemp);
    // vecTemp.clear();
    // vecTemp<<"4"<< u8"56" << "/";

    // setText(3, 0, vecTemp);
    // vecTemp.clear();
    // vecTemp<<"5"<< u8"20" << "/";

    // setText(4, 0, vecTemp);
    // vecTemp.clear();
    // vecTemp<<"6"<< u8"20" << "/";

    // setText(5, 0, vecTemp);

    // vecTemp.clear();
    // vecTemp<<"7"<< u8"20" << "/";

    // setText(6, 0, vecTemp);

    // vecTemp.clear();
    // vecTemp<<"8"<< u8"20" << "/";

    // setText(7, 0, vecTemp);
}
