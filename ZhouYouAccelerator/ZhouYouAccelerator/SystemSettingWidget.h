#pragma once

#include <QWidget>
#include "ui_SystemSettingWidget.h"
#include <QIcon>
#include <QMessageBox>
#include <QSettings>
#include <QString>
#include <QDebug>
#include <QDir>

class SystemSettingWidget : public QWidget
{
	Q_OBJECT

public:
	SystemSettingWidget(QWidget *parent = Q_NULLPTR);
	~SystemSettingWidget();
signals:
	void SigAutoStartClicked(bool); // 当自动启动周游加上器被点击是
	void SigTrayClicked(bool);// 当托盘按钮被选中时
	void SigExitCLicked(bool);// 当推出程序按钮被选中时
public slots:
void OnStateChanged(int state);
void OnTrayBtnClicked();
void OnClose();
void OnExit();

void OnSigChangeAutoStartStatus(bool);
void OnSigChangeExitOrTrayStatus(bool);

private:
	Ui::SystemSettingWidget ui;
};
