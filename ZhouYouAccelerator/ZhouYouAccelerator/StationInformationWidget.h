#pragma once

#include <QWidget>
#include "ui_StationInformationWidget.h"
#include <QStandardItemModel> 
#include <QMessageBox> 
#include <QStandardItem>
#include "StationDetailsInfomationWidget.h"

class StationInformationWidget : public QWidget
{
	Q_OBJECT

public:
	StationInformationWidget(QWidget *parent = Q_NULLPTR);
	~StationInformationWidget();

public:
	StationDetailsInfomationWidget mStationDetailsInfomationWid;
	QStandardItemModel mStationListViewMod;
public:
	void AddItemOnListView(const QString &strText,const QIcon & icon);
public slots:
	// 当站内信控件被点击时
	void OnStationInfo();
	// 当关闭按钮被点击时
	void OnClose();
	// 当标记已读按钮被点击时
	void OnTagRead();

	// 当控件被双击点击时
	void OnDoubleClicked(const QModelIndex &index);

private:
	Ui::StationInformationWidget ui;
};
