#include "InterfaceAPI.h"

InterfaceAPI::InterfaceAPI(QObject *parent)
	: QObject(parent)
{
	// 初始化接口头部信息
	std::string strUUID  = getBaseboardUuid();
	std::string strMac = getHostMacAddress();
	std::string strSystem = getSystemName();
	QRect rect = getScreenInfo();

	QJsonObject jsonObject;
	jsonObject.insert("UUID", QString::fromStdString(strUUID));
	jsonObject.insert("MAC", QString::fromStdString(strMac));
	jsonObject.insert("OS", QString::fromStdString(strSystem));

	// 使用QJsonDocument设置该json对象
	QJsonDocument jsonDocSMS;
	jsonDocSMS.setObject(jsonObject);



	mHeadMap.clear();
	mHeadMap["x-did"] = "";
	mHeadMap["x-ts"] = "";
	//mHeadMap["x-client-info"] = jsonDocSMS.toJson(); // 拼接结构体报错
	mHeadMap["x-client-info"] = QString::fromStdString(strSystem);
	mHeadMap["x-sid"] = "";
	mHeadMap["x-sign"] = "";
	mHeadMap["x-trace-id"] = "";
	mHeadMap["x-ua"] = QString::fromStdString(strSystem);
	//mHeadMap["x-uid"] = "";
	mHeadMap["x-uid"] = QString::fromStdString(strUUID);

	
}

InterfaceAPI::~InterfaceAPI()
{

}

QString InterfaceAPI::GetCurrentMSecsSinceEpoch()
{
	quint64  curTime = QDateTime::currentDateTime().toMSecsSinceEpoch();
	return  QString("%1").arg(curTime).toLocal8Bit();
}

QByteArray InterfaceAPI::RequestToServerAPI(const QString url, QMap<QString, QString> head, const QString& body)
{
	// 向服务器请求信息
	QNetworkRequest request;
	request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));
	QMap<QString, QString>::const_iterator iterHead = head.constBegin();
	while (iterHead != head.constEnd()) {
		request.setRawHeader(iterHead.key().toLocal8Bit(), iterHead.value().toLocal8Bit());
		++iterHead;
	}

	QString baseUrl = BASEURL + url;
	request.setUrl(QUrl(baseUrl));


	QNetworkAccessManager manager;
	// 发送请求

	QNetworkReply *pReplay = manager.post(request, body.toLocal8Bit());

	// 开启一个局部的事件循环，等待响应结束，退出
	QEventLoop eventLoop;
	QObject::connect(&manager, &QNetworkAccessManager::finished, &eventLoop, &QEventLoop::quit);
	eventLoop.exec();

	// 获取响应信息
	QByteArray bytes = pReplay->readAll();
	qDebug() << bytes;
	return bytes;
}

QByteArray InterfaceAPI::RequestToServerFileAPI(const QString url, QMap<QString, QString> head, const QString& body)
{
	// 向服务器请求信息
	//QNetworkRequest request;
	////	request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("multipart/form-data"));
	//QMap<QString, QString>::const_iterator iterHead = head.constBegin();
	//while (iterHead != head.constEnd()) {
	//	request.setRawHeader(iterHead.key().toLocal8Bit(), iterHead.value().toLocal8Bit());
	//	++iterHead;
	//}

	//QString baseUrl = BASEURL + url;
	//request.setUrl(QUrl(baseUrl));
	QNetworkRequest request;
	//request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));
	QFile *file = new QFile(body);
	if (!file->open(QIODevice::ReadOnly))
	{
		qDebug() << file->fileName();
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("文件打开失败!"));
	}
	//QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
	QHttpMultiPart multiPart;
	multiPart.setContentType(QHttpMultiPart::FormDataType);

	QHttpPart image_part;
	image_part.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant(QString("form-data; name=\"image\";filename=\"*.png\";")));
	QMap<QString, QString>::const_iterator iterHead = head.constBegin();
	while (iterHead != head.constEnd()) {
		qDebug() << iterHead.key() << " : " << iterHead.value();
		image_part.setRawHeader(iterHead.key().toLocal8Bit(), iterHead.value().toLocal8Bit());
		++iterHead;
	}



	image_part.setBodyDevice(file);

	multiPart.append(image_part);

	
	QString baseUrl = BASEURL + url;
	request.setUrl(QUrl(baseUrl));

	QNetworkAccessManager manager;
	// 发送请求

	QNetworkReply *pReplay = manager.post(request, &multiPart);

	// 开启一个局部的事件循环，等待响应结束，退出
	QEventLoop eventLoop;
	QObject::connect(&manager, &QNetworkAccessManager::finished, &eventLoop, &QEventLoop::quit);
	eventLoop.exec();

	// 获取响应信息
	QByteArray bytes = pReplay->readAll();
	qDebug() << bytes;
	return bytes;



}

QByteArray InterfaceAPI::Generate_Headers(const QString& url, const QString& sid, const QString& body)
{
	QString signStr = GenerateSign(url, sid, body);
	mHeadMap["x-sid"] = sid;
	mHeadMap["x-sign"] = signStr;

	QString strCurTime = GetCurrentMSecsSinceEpoch();
	mHeadMap["x-ts"] = strCurTime;
	mHeadMap["x-trace-id"] = strCurTime;

	return RequestToServerAPI(url, mHeadMap, body);
}

QByteArray InterfaceAPI::Send_API(const QString& url, const QString& sid, const QString& body)
{
	//QString  baseUrl = "http://172.172.172.112:8083";
	//QMap<QString, QString> temMap = Generate_Headers(url, sid, body);
	return Generate_Headers(url, sid, body);
}

QString InterfaceAPI::GenerateSign(const QString& url, const QString& sid, const QString& body)
{
	//md5( url+ sid + jsonbody + salt)
	QString tempStr = url + sid + body +mSalt ;
	QByteArray bamd5 = QCryptographicHash::hash(tempStr.toLocal8Bit(), QCryptographicHash::Md5).toHex();
	return QString::fromStdString(bamd5.toStdString());
}

QByteArray  InterfaceAPI::SendAPIFile(const QString& url, const QString& sid, const QString& files)
{

	
	QString signStr = GenerateSign(url, sid, "");
	mHeadMap["x-sid"] = sid;
	mHeadMap["x-sign"] = signStr;

	QString strCurTime = GetCurrentMSecsSinceEpoch();
	mHeadMap["x-ts"] = strCurTime;
	mHeadMap["x-trace-id"] = strCurTime;

	return RequestToServerFileAPI(url, mHeadMap, files);
}

bool InterfaceAPI::VerfiyCodeAPI(const int & code)
{
	switch (code) {
	case 200:
		qDebug() << "OK";
		break;
	case 10200:
		qDebug() << QString::fromLocal8Bit("请求成功");
		return true;
		break;
	case 10400:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("客户端请求错误!"));
		//qDebug() << QString::fromLocal8Bit("客户端请求错误");
		break;
	case 10401:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("客户端绑定信息错误!"));
		//qDebug() << QString::fromLocal8Bit("客户端绑定信息错误");
		break;
	case 10402:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("验证码错误!"));
		//qDebug() << QString::fromLocal8Bit("验证码错误");
		break;
	case 10403:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("参数错误!"));
		//qDebug() << QString::fromLocal8Bit("参数错误");
		break;
	case 10404:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("请求失效!"));
		//qDebug() << QString::fromLocal8Bit("请求失效");
		break;
	case 10405:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("签名错误!"));
		//qDebug() << QString::fromLocal8Bit("签名错误");
		break;
	case 10406:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("绑定已达设备上线!"));
		//qDebug() << QString::fromLocal8Bit("绑定已达设备上线");
		break;
	case 10407:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("请先验证原始手机号!"));
		//qDebug() << QString::fromLocal8Bit("请先验证原始手机号");
		break;
	case 10500:
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("服务器繁忙,请稍后再试!"));
		//qDebug() << QString::fromLocal8Bit("服务器繁忙,请稍后再试");
		break;
	default:
		break;
	}
	return false;
}

std::string  InterfaceAPI::getSystemName()
{
	QSysInfo::WinVersion ver = QSysInfo::windowsVersion();
	std::string str = "";
	switch (ver)
	{
	case QSysInfo::WV_None:
		break;
	case QSysInfo::WV_32s:
		break;
	case QSysInfo::WV_95:
		break;
	case QSysInfo::WV_98:
		break;
	case QSysInfo::WV_Me:
		break;
	case QSysInfo::WV_DOS_based:
		break;
	case QSysInfo::WV_NT:
		break;
	case QSysInfo::WV_2000:
		break;
	case QSysInfo::WV_XP:
		break;
	case QSysInfo::WV_2003:
		break;
	case QSysInfo::WV_VISTA:
		break;
	case QSysInfo::WV_WINDOWS7:
		break;
	case QSysInfo::WV_WINDOWS8:
		break;
	case QSysInfo::WV_WINDOWS8_1:
		break;
	case QSysInfo::WV_WINDOWS10:
		str = "win 10";
		break;
	case QSysInfo::WV_NT_based:
		break;
		//case QSysInfo::WV_4_0:
		//	break;
		//case QSysInfo::WV_5_0:
		//	break;
		//case QSysInfo::WV_5_1:
		//	break;
		//case QSysInfo::WV_5_2:
		//	break;
		//case QSysInfo::WV_6_0:
		//	break;
		//case QSysInfo::WV_6_1:
		//	break;
		//case QSysInfo::WV_6_2:
		//	break;
		//case QSysInfo::WV_6_3:
		//	break;
		//case QSysInfo::WV_10_0:
		//	break;
	case QSysInfo::WV_CE:
		break;
	case QSysInfo::WV_CENET:
		break;
	case QSysInfo::WV_CE_5:
		break;
	case QSysInfo::WV_CE_6:
		break;
	case QSysInfo::WV_CE_based:
		break;
	default:
		break;
	}
	return str;
}

std::string InterfaceAPI::getHostMacAddress()
{
	QList<QNetworkInterface> nets = QNetworkInterface::allInterfaces();// 获取所有网络接口列表
	int nCnt = nets.count();
	QString strMacAddr = "";
	for (int i = 0; i < nCnt; i++)
	{
		// 如果此网络接口被激活并且正在运行并且不是回环地址，则就是我们需要找的Mac地址
		if (nets[i].flags().testFlag(QNetworkInterface::IsUp) && nets[i].flags().testFlag(QNetworkInterface::IsRunning) && !nets[i].flags().testFlag(QNetworkInterface::IsLoopBack))
		{
			strMacAddr = nets[i].hardwareAddress();
			break;
		}
	}
	return strMacAddr.toStdString();
}

std::string InterfaceAPI::getHostIpAddress()
{
	QString strIpAddress;
	QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
	// 获取第一个本主机的IPv4地址
	int nListSize = ipAddressesList.size();
	for (int i = 0; i < nListSize; ++i)
	{
		if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
			ipAddressesList.at(i).toIPv4Address()) {
			strIpAddress = ipAddressesList.at(i).toString();
			break;
		}
	}
	// 如果没有找到，则以本地IP地址为IP
	if (strIpAddress.isEmpty())
		strIpAddress = QHostAddress(QHostAddress::LocalHost).toString();
	return strIpAddress.toStdString();
}

std::string InterfaceAPI::getInfo(const QString &cmd)
{
	QProcess p;				//启动外部程序
	p.start(cmd);			//一体式启动，不分离，主程序退出则启动程序退出,使用close关闭
							//p.startDetached(cmd)	//分离式启动，主程序退出后，外部程序继续运行。
	p.waitForFinished(-1);	//超时等待，设置为-1，直到执行完成。
	QString result = QString::fromLocal8Bit(p.readAllStandardOutput());
	QStringList list = cmd.split(" ");
	result = result.remove(list.last(), Qt::CaseInsensitive);
	result = result.replace("\r", "");
	result = result.replace("\n", "");
	result = result.simplified();
	p.close();
	return result.toStdString();
}

// 获取主板的唯一标识
std::string InterfaceAPI::getBaseboardUuid()
{
	return getInfo("wmic csproduct get uuid");
}

//查询CPU型号
std::string InterfaceAPI::getCpuName()
{
	return getInfo("wmic cpu get Name");
}

//查询CPU核心数
std::string InterfaceAPI::getCpuCore()
{
	return getInfo("wmic cpu get NumberOfCores");
}

//查询CPU线程数
std::string InterfaceAPI::getCpuProcessors()
{
	return getInfo("wmic cpu get NumberOfLogicalProcessors");
}

//查询CPU序列号
std::string InterfaceAPI::getCpuProcessorid()
{
	return getInfo("wmic cpu get processorid");
}

//查询硬盘序列号
std::string InterfaceAPI::getDiskSerialnumber()
{
	return getInfo("wmic diskdrive get serialnumber");
}

/************************************************************************/
/*函数说明：获取系统内存信息
/*函数参数：nMemTotal->内存总共大小,(MB)；nMemUsed->内存已使用大小,(MB)
/*返回结果：返回结果状态
/************************************************************************/
bool InterfaceAPI::GetSysMemory(int& nMemTotal, int& nMemUsed)
{
	MEMORYSTATUSEX memsStat;
	memsStat.dwLength = sizeof(memsStat);
	if (!GlobalMemoryStatusEx(&memsStat))//如果获取系统内存信息不成功，就直接返回
	{
		nMemTotal = -1;
		nMemUsed = -1;
		return false;
	}
	int nMemFree = memsStat.ullAvailPhys / (1024.0*1024.0);
	nMemTotal = memsStat.ullTotalPhys / (1024.0*1024.0);
	nMemUsed = nMemTotal - nMemFree;
	return true;
}

// 获取屏幕信息
QRect InterfaceAPI::getScreenInfo()
{
	QDesktopWidget* desktopWidget = QApplication::desktop();
	//获取可用桌面大小
	QRect deskRect = desktopWidget->availableGeometry();
	int   ScreenX = deskRect.width();
	int   ScreenY = deskRect.height();
	//获取设备屏幕大小
	QRect screenRect = desktopWidget->screenGeometry();
	int   ScreenXX = screenRect.width();
	int   ScreenYY = screenRect.height();

	return screenRect;
}

void InterfaceAPI::get_Local_Drive_Info()
{
	QVector<DriveInfo> vecDriInfo;

	DWORD diskCntArr = GetLogicalDrives();
	int diskCnt = 0;
	while (diskCntArr)
	{
		if (diskCntArr & 1)
		{
			diskCnt++;
		}
		diskCntArr = diskCntArr >> 1;
	}

	int DSLength = GetLogicalDriveStrings(0, NULL);
	TCHAR* DStr = new TCHAR[DSLength];
	GetLogicalDriveStrings(DSLength, (LPTSTR)DStr);

	int dri_type;
	BOOL fResult;
	quint64 iFree2Caller = 0;
	quint64 iTotalBytes = 0;
	quint64 iFreeBytes = 0;
	TCHAR *lpDriveStr = DStr;

	for (int i = 0; i < diskCnt; ++i)
	{
		dri_type = GetDriveType(lpDriveStr);
		if (dri_type == DRIVE_FIXED)
		{
			fResult = GetDiskFreeSpaceEx(lpDriveStr, (PULARGE_INTEGER)&iFree2Caller, (PULARGE_INTEGER)&iTotalBytes, (PULARGE_INTEGER)&iFreeBytes);
			if (fResult)
			{
				DriveInfo info;
				info.sDriName = QString::fromStdWString(lpDriveStr);
				info.uiFree2Caller = iFree2Caller;
				info.uiTotal = iTotalBytes;
				info.uiFree = iFreeBytes;

				vecDriInfo << info;
			}
			else
			{
				// 打印日志 megloglib
				qDebug() << "读取硬盘{0}使用情况时错误";
			}

			lpDriveStr += 4;
		}
		else
		{
			lpDriveStr += 4;
		}
	}

	delete[] DStr;
	DStr = NULL;

	return;
}
