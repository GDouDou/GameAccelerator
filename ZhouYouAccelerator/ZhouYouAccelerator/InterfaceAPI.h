#pragma once

#include <QObject>
#include <QDebug>
#include <winsock2.h>
#include <winbase.h>
#include <windows.h>
#include <tchar.h>
#include <QProcess>
#include <QDesktopWidget>
#include <QScreen>
#include <QVector>
#include <QHostInfo>
#include <stdio.h>
#include <QSysInfo>
#include <QMessageBox>
#include <QtNetwork/QNetworkInterface>
#include <QApplication>
#include <QString>
#include <QDateTime>
#include <QMap>


#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>
#include <QCryptographicHash>

#include <QCryptographicHash>  //md5加密的库 //参考网址：https://blog.csdn.net/rong11417/article/details/87804471
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QHttpMultiPart>
#include <QFile>

// 接口地址
#ifndef BASEURL
#define BASEURL "http://172.172.172.112:8083"
#endif // !BASEURL

#define PHONENUMBER "18811223349"
#define NEW_PHONENUMBER "18811223345"

class InterfaceAPI : public QObject
{
	Q_OBJECT

public:
	~InterfaceAPI();
	InterfaceAPI& operator=(const InterfaceAPI&) = delete;

	static InterfaceAPI& get_instance() {
		static InterfaceAPI instance;
		return instance;

	}

public:
	// 获取当前的时间（毫秒）
	QString GetCurrentMSecsSinceEpoch();
	// 验证API 返回的code 值
	bool VerfiyCodeAPI(const int & code);
	// 组成头结构体
	QByteArray Generate_Headers(const QString& url, const QString& sid, const QString& body);
	
	QByteArray Send_API(const QString& url, const QString& sid, const QString& body);

	QString GenerateSign(const QString& url, const QString& sid, const QString& body);

	QByteArray  SendAPIFile(const QString& url, const QString& sid, const QString& files);
public:
	// 用户请求数据的信息接口api
	// 磁盘的使用详情，及磁盘的总容量、剩余容量和剩余可用容量。
	struct DriveInfo
	{
		QString sDriName;
		quint64 uiTotal;
		quint64 uiFree;
		quint64 uiFree2Caller;

		DriveInfo()
		{
			sDriName = "";
			uiTotal = 0;
			uiFree = 0;
			uiFree2Caller = 0;
		}
	};

	// 发送短信接口的头部信息
	QMap<QString, QString> mHeadMap;
	// 登录
	QString mUrlSMS = "/api/v1/sms/sendsms";
	QString mUrlLogin = "/api/v1/user/login";

	// 修改头像
	QString mUrlChangeHeadImg = "/api/v1/user/changeHeadImg";
	// 修改手机号
	QString mUrlSrcPhoneSend = "/api/v1/user/orignalSend";
	QString mUrlCheckSrcPhone = "/api/v1/user/checkOrignalPhone";
	QString mUrlChangePhoneSend = "/api/v1/user/changeSend";
	QString mUrlChangePhone = "/api/v1/user/changePhone";
	// 上传反馈图像
	QString mUrlUploadFeedbackImg = "/api/v1/user/uploadFeedbackImg";
	QString mUrlFeedback = "/api/v1/user/feedback";

	QString mSalt = "*Ka*L&^lj)23xv";

public:
	// 登录API
	QByteArray RequestToServerAPI(const QString url, QMap<QString, QString> head, const QString& body);
	// 更改头像API
	QByteArray RequestToServerFileAPI(const QString url, QMap<QString, QString> head, const QString& body);
public:
	// 获取本机的操作系统
	std::string getSystemName();
	// 获取本机mac地址
	std::string getHostMacAddress();
	// 获取本机的 ip地址
	std::string getHostIpAddress(); // 未测试
									// 获取主板的唯一标识 //参考网址 https://blog.csdn.net/guanxiaozhi/article/details/103991820
	std::string getInfo(const QString &cmd);
	std::string getBaseboardUuid();

	//查询CPU型号
	std::string getCpuName();
	//查询CPU核心数
	std::string getCpuCore();
	//查询CPU线程数
	std::string getCpuProcessors();
	//查询CPU序列号
	std::string getCpuProcessorid();
	//查询硬盘序列号
	std::string getDiskSerialnumber();
	//查询本机内存 https://blog.csdn.net/yhd619/article/details/37988935
	bool GetSysMemory(int& nMemTotal, int& nMemUsed);
	// 获取屏幕信息
	QRect getScreenInfo();
	// 获取计算机硬盘信息

	// 获取所有本地磁盘的使用详情 https://blog.csdn.net/u013001137/article/details/101040733
	void get_Local_Drive_Info();

private:
	InterfaceAPI(QObject *parent=nullptr);
};
