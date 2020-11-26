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
	void SigAutoStartClicked(bool); // ���Զ��������μ������������
	void SigTrayClicked(bool);// �����̰�ť��ѡ��ʱ
	void SigExitCLicked(bool);// ���Ƴ�����ť��ѡ��ʱ
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
