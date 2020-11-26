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
	// ��վ���ſؼ������ʱ
	void OnStationInfo();
	// ���رհ�ť�����ʱ
	void OnClose();
	// ������Ѷ���ť�����ʱ
	void OnTagRead();

	// ���ؼ���˫�����ʱ
	void OnDoubleClicked(const QModelIndex &index);

private:
	Ui::StationInformationWidget ui;
};
