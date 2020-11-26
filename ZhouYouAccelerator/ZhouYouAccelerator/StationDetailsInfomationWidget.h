#pragma once

#include <QWidget>
#include "ui_StationDetailsInfomationWidget.h"

class StationDetailsInfomationWidget : public QWidget
{
	Q_OBJECT

public:
	StationDetailsInfomationWidget(QWidget *parent = Q_NULLPTR);
	~StationDetailsInfomationWidget();
public:
	void ShowDetailsInfomation(const QString &textTilte, const QString &text);
public slots:
void OnClose();

private:
	Ui::StationDetailsInfomationWidget ui;
};
