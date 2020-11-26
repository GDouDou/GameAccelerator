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

#include <QCryptographicHash>  //md5���ܵĿ� //�ο���ַ��https://blog.csdn.net/rong11417/article/details/87804471
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QHttpMultiPart>
#include <QFile>

// �ӿڵ�ַ
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
	// ��ȡ��ǰ��ʱ�䣨���룩
	QString GetCurrentMSecsSinceEpoch();
	// ��֤API ���ص�code ֵ
	bool VerfiyCodeAPI(const int & code);
	// ���ͷ�ṹ��
	QByteArray Generate_Headers(const QString& url, const QString& sid, const QString& body);
	
	QByteArray Send_API(const QString& url, const QString& sid, const QString& body);

	QString GenerateSign(const QString& url, const QString& sid, const QString& body);

	QByteArray  SendAPIFile(const QString& url, const QString& sid, const QString& files);
public:
	// �û��������ݵ���Ϣ�ӿ�api
	// ���̵�ʹ�����飬�����̵���������ʣ��������ʣ�����������
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

	// ���Ͷ��Žӿڵ�ͷ����Ϣ
	QMap<QString, QString> mHeadMap;
	// ��¼
	QString mUrlSMS = "/api/v1/sms/sendsms";
	QString mUrlLogin = "/api/v1/user/login";

	// �޸�ͷ��
	QString mUrlChangeHeadImg = "/api/v1/user/changeHeadImg";
	// �޸��ֻ���
	QString mUrlSrcPhoneSend = "/api/v1/user/orignalSend";
	QString mUrlCheckSrcPhone = "/api/v1/user/checkOrignalPhone";
	QString mUrlChangePhoneSend = "/api/v1/user/changeSend";
	QString mUrlChangePhone = "/api/v1/user/changePhone";
	// �ϴ�����ͼ��
	QString mUrlUploadFeedbackImg = "/api/v1/user/uploadFeedbackImg";
	QString mUrlFeedback = "/api/v1/user/feedback";

	QString mSalt = "*Ka*L&^lj)23xv";

public:
	// ��¼API
	QByteArray RequestToServerAPI(const QString url, QMap<QString, QString> head, const QString& body);
	// ����ͷ��API
	QByteArray RequestToServerFileAPI(const QString url, QMap<QString, QString> head, const QString& body);
public:
	// ��ȡ�����Ĳ���ϵͳ
	std::string getSystemName();
	// ��ȡ����mac��ַ
	std::string getHostMacAddress();
	// ��ȡ������ ip��ַ
	std::string getHostIpAddress(); // δ����
									// ��ȡ�����Ψһ��ʶ //�ο���ַ https://blog.csdn.net/guanxiaozhi/article/details/103991820
	std::string getInfo(const QString &cmd);
	std::string getBaseboardUuid();

	//��ѯCPU�ͺ�
	std::string getCpuName();
	//��ѯCPU������
	std::string getCpuCore();
	//��ѯCPU�߳���
	std::string getCpuProcessors();
	//��ѯCPU���к�
	std::string getCpuProcessorid();
	//��ѯӲ�����к�
	std::string getDiskSerialnumber();
	//��ѯ�����ڴ� https://blog.csdn.net/yhd619/article/details/37988935
	bool GetSysMemory(int& nMemTotal, int& nMemUsed);
	// ��ȡ��Ļ��Ϣ
	QRect getScreenInfo();
	// ��ȡ�����Ӳ����Ϣ

	// ��ȡ���б��ش��̵�ʹ������ https://blog.csdn.net/u013001137/article/details/101040733
	void get_Local_Drive_Info();

private:
	InterfaceAPI(QObject *parent=nullptr);
};
