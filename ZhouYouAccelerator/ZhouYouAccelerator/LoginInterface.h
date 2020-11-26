#pragma once

#include <QWidget>
#include "ui_LoginInterface.h"

#include <winsock2.h>
#include <winbase.h>
#include <windows.h>
#include <tchar.h>
#include <QtNetwork/QNetworkInterface>
#include <QList>
#include <QProcess>
#include <QDesktopWidget>
#include <QScreen>
#include <QVector>
#include <QHostInfo>
#include <QNetworkConfigurationManager> 
//#include <json/json.h>
#include <stdio.h>
#include <QSysInfo>
#include <QMessageBox>
#include <QCryptographicHash>  //md5加密的库 //参考网址：https://blog.csdn.net/rong11417/article/details/87804471
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMap>
#include <QString>

class LoginInterface : public QWidget
{
	Q_OBJECT




public:
	LoginInterface(QWidget *parent = Q_NULLPTR);
	~LoginInterface();
public:
	void InitInterface();
public:
	QByteArray SendSMSToAPI();

public:
	// 获取验证码信息的数组
	QByteArray mVerifyArray;
signals:
	// 发送信号，激活主页面头像按钮
	void SigHeadPicActive();

	
public slots:
	void OnLoginBtn();
	void OnClose();
	// 获取登录验证码
	void OnVerifyBtn();
private:
	Ui::LoginInterface ui;
};
