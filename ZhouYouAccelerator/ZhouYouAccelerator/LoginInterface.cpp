#include "LoginInterface.h"

#include "InterfaceAPI.h"
LoginInterface::LoginInterface(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//����Ҫ��������顡���ֲ��ܻ�ȡ�����顡����
	//std::string ss = "CMCC-ufxw";
	//std::string cmd = "netsh wlan show profiles " + ss + " key=clear >>1.tmp";
	//system(cmd.c_str());
	//FILE *fp;
	//if ((fp = fopen("1.tmp", "r")) == NULL)
	//{
	//	std::cout << "file open error" << std::endl;
	//}
	//char lineTxt[1024];
	//for (int i = 0; i<33; i++)
	//{
	//	fgets(lineTxt, 1024, fp);
	//}

	//std::string passwd = lineTxt;
	//int c = passwd.find(':');
	//passwd.erase(passwd.begin(), passwd.begin() + c + 2);

	//std::cout << "Wifi Password: " << passwd;

	InitInterface();
}

LoginInterface::~LoginInterface()
{
}

void LoginInterface::OnClose()
{
	close();
}

void LoginInterface::InitInterface()
{
	setWindowTitle(QString::fromLocal8Bit("��¼"));
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);

	//���õ�¼ҳ�汳��ɫ
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// �رտؼ����ͼƬ
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));

	ui.widPhone->setStyleSheet("background-color: #A4C2FF;border-radius:5px;color:#FFFFFF;");

	ui.phoneLbl->setStyleSheet("QLabel{border-image: url(:/Resources/phone.png);}");//ͼƬ����Դ�ļ���
	ui.phoneLbl->setAlignment(Qt::AlignCenter);
	//ui.phoneLbl->setStyleSheet("background-color: #A4C2FF;color:#FFFFFF;");
	ui.lbl86->setStyleSheet("background-color: #A4C2FF;color:#FFFFFF;");
	ui.phoneEdt->setStyleSheet("background-color: #A4C2FF;border-top-right-radius:5px;border-bottom-right-radius:5px;color:#FFFFFF;");
	
	ui.widVerify->setStyleSheet("background-color: #A4C2FF;border-radius:5px;color:#FFFFFF;");
	ui.verifyLbl->setStyleSheet("QLabel{border-image: url(:/Resources/password.png);}");//ͼƬ����Դ�ļ���
	ui.verifyLbl->setAlignment(Qt::AlignCenter);
	//ui.verifyLbl->setStyleSheet("background-color: #A4C2FF;color:#E7E7E7;");
	ui.verifyEdt->setStyleSheet("background-color: #A4C2FF;color:#E7E7E7;");
	ui.verifyBtn->setStyleSheet("background-color: #A4C2FF;border-top-right-radius:5px;border-bottom-right-radius:5px;color:#FFCF17");

	ui.loginBtn->setStyleSheet("background-color: #FFCF17;");

	connect(ui.loginBtn, &QPushButton::clicked, this, &LoginInterface::OnLoginBtn);
	connect(ui.closeBtn, &QPushButton::clicked, this, &LoginInterface::OnClose);
	connect(ui.verifyBtn, &QPushButton::clicked, this, &LoginInterface::OnVerifyBtn);
	
}

QByteArray LoginInterface::SendSMSToAPI()
{

	//�����Ͷ�����֤��
	// ʹ��QJsonObject��������ֵ�ԡ�
	QJsonObject jsonObjectSMS;
	jsonObjectSMS.insert("opType", "register");
	jsonObjectSMS.insert("phone", PHONENUMBER);
	// ʹ��QJsonDocument���ø�json����
	QJsonDocument jsonDocSMS;
	jsonDocSMS.setObject(jsonObjectSMS);

	//QMap<QString, QString> headMap = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlSMS, "", jsonDocSMS.toJson());

	//QString strCurTime = InterfaceAPI::get_instance().GetCurrentMSecsSinceEpoch();
	//headMap["x-ts"] = strCurTime;
	//headMap["x-trace-id"] = strCurTime;

	// �������������Ϣ
	//QNetworkRequest request;
	//request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));
	//QMap<QString, QString>::const_iterator iterHead = headMap.constBegin();
	//while (iterHead != headMap.constEnd()) {
	//	request.setRawHeader(iterHead.key().toLocal8Bit(), iterHead.value().toLocal8Bit());
	//	++iterHead;
	//}

	//QString baseUrlSMS = BASEURL + InterfaceAPI::get_instance().mUrlSMS;
	//request.setUrl(QUrl(baseUrlSMS));


	//QNetworkAccessManager manager;
	//// ��������

	//QNetworkReply *pReplaySMS = manager.post(request, jsonDocSMS.toJson());

	//// ����һ���ֲ����¼�ѭ�����ȴ���Ӧ�������˳�
	//QEventLoop eventLoopSMS;
	//QObject::connect(&manager, &QNetworkAccessManager::finished, &eventLoopSMS, &QEventLoop::quit);
	//eventLoopSMS.exec();

	//// ��ȡ��Ӧ��Ϣ
	//QByteArray bytesSMS = pReplaySMS->readAll();
	//qDebug() << bytesSMS;

	QByteArray bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlSMS, "", jsonDocSMS.toJson());
	// QByteArrayת����QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ���Žӿ���Ϣʧ��"));
	}
	return bytes;

}


void LoginInterface::OnLoginBtn()
{

	// QByteArrayת����QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(mVerifyArray);
	QJsonObject objectSMS = documentSMS.object();

	// ���͵�¼��֤��
	
	QString result = objectSMS.value("result").toString();
		
	// ʹ��QJsonObject��������ֵ�ԡ�
	QJsonObject jsonObject;
	jsonObject.insert("code", result);
	jsonObject.insert("did", " ");
	jsonObject.insert("phone", PHONENUMBER);
	//jsonObject.insert("phone", ui.phoneEdt->text().trimmed());

	// ʹ��QJsonDocument���ø�json����
	QJsonDocument jsonDoc;
	jsonDoc.setObject(jsonObject);

	//QMap<QString, QString> headMap = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlLogin, "", jsonDoc.toJson());

	//QString strCurTime = InterfaceAPI::get_instance().GetCurrentMSecsSinceEpoch();
	//qDebug() << "InterfaceAPI::get_instance().mUrlLogin ==" << InterfaceAPI::get_instance().mUrlLogin;
	//headMap["x-ts"] = strCurTime;
	//headMap["x-trace-id"] = strCurTime;

	//// �������������Ϣ
	//QNetworkRequest request;
	//request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));

	//QMap<QString, QString>::const_iterator iterHead = headMap.constBegin();
	//while (iterHead != headMap.constEnd()) {
	//	request.setRawHeader(iterHead.key().toLocal8Bit(), iterHead.value().toLocal8Bit());
	//	++iterHead;
	//}

	//QString baseUrlSMS = BASEURL + InterfaceAPI::get_instance().mUrlLogin;
	//request.setUrl(QUrl(baseUrlSMS));

	//QNetworkAccessManager manager;
	//// ��������

	//QNetworkReply *pReplay = manager.post(request, jsonDoc.toJson());

	//// ����һ���ֲ����¼�ѭ�����ȴ���Ӧ�������˳�
	//QEventLoop eventLoop;
	//QObject::connect(&manager, &QNetworkAccessManager::finished, &eventLoop, &QEventLoop::quit);
	//eventLoop.exec();

	//// ��ȡ��Ӧ��Ϣ
	//QByteArray bytes = pReplay->readAll();
	//qDebug() << bytes;


	QByteArray bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlLogin, "", jsonDoc.toJson());

	// QByteArrayת����QJsonObject
	QJsonDocument documentResult = QJsonDocument::fromJson(bytes);
	QJsonObject objectResult = documentResult.object();
	int code = objectResult.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ��¼�ӿ���Ϣʧ��"));
		return;
	}

	// ��¼�ɹ�֮�󣬸���sid
	QJsonDocument doc = QJsonDocument::fromVariant(objectResult.value("result").toVariant());
	QByteArray jba = doc.toJson();
	QJsonObject obj = doc.object();//ȡ���������������  
	qDebug() << obj.value("sid").toString();
	qDebug() << obj.value("phone").toString();
	qDebug() << obj.value("	nickName").toString();
	InterfaceAPI::get_instance().mHeadMap["x-sid"] = obj.value("sid").toString();
	//QString jsonString = QString(jba);
	//qDebug() << QString::fromLocal8Bit("QMap<QString, QVariant>ת�����json�ַ�����n") << jsonString;



	this->hide();
	// ��¼�ɹ�֮�󣬷�����Ϣ����ҳ�棬ͷ��ɱ����
	emit SigHeadPicActive();
}

void LoginInterface::OnVerifyBtn()
{

	mVerifyArray = SendSMSToAPI();
}
