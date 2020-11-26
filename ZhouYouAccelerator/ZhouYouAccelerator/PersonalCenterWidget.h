#pragma once

#include <QWidget>
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include <QFile>

#include "ui_PersonalCenterWidget.h"
#include "InterfaceAPI.h"

class PersonalCenterWidget : public QWidget
{
	Q_OBJECT

public:
	PersonalCenterWidget(QWidget *parent = Q_NULLPTR);
	~PersonalCenterWidget();
public:
	// 头像路径
	QString mFilePath;
public:
	bool SendChangeHeadImgAPI();
	bool SendChangeNickNameAPI();
public:
	void Init();
signals:
	// 更改手机号
	void SigChangeAccount(QString phone);
public slots:
	void OnClose();
	void OnSaveChangeBtn();
	void OnChangePhoneBtn();
	void OnChangeHeadPicBtn();
private:
	Ui::PersonalCenterWidget ui;
};
