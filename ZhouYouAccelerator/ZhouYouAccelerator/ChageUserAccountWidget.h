#pragma once

#include <QWidget>
#include "ui_ChageUserAccountWidget.h"
#include "InterfaceAPI.h"

class ChageUserAccountWidget : public QWidget
{
	Q_OBJECT

public:
	ChageUserAccountWidget(QWidget *parent = Q_NULLPTR);
	~ChageUserAccountWidget();
public:
	void Init();
	public slots:
	void OnClose();
	void OnOldVerifyBtn();
	void OnNewVerifyBtn();
	void OnOKBtn();
	void OnCancelBtn();
public:
	Ui::ChageUserAccountWidget ui;
};
