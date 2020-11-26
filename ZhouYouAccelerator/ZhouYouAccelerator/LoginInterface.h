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
#include <QCryptographicHash>  //md5���ܵĿ� //�ο���ַ��https://blog.csdn.net/rong11417/article/details/87804471
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
	// ��ȡ��֤����Ϣ������
	QByteArray mVerifyArray;
signals:
	// �����źţ�������ҳ��ͷ��ť
	void SigHeadPicActive();

	
public slots:
	void OnLoginBtn();
	void OnClose();
	// ��ȡ��¼��֤��
	void OnVerifyBtn();
private:
	Ui::LoginInterface ui;
};
