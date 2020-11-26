#include "PersonalCenterWidget.h"

PersonalCenterWidget::PersonalCenterWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	Init();
}

PersonalCenterWidget::~PersonalCenterWidget()
{
}

void PersonalCenterWidget::Init()
{
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);

	//���ø������ı���ɫ
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// �رտؼ����ͼƬ
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));

	// ���ÿؼ�����ɫ
	ui.userNameEdt->setStyleSheet("background-color: #FFFFFF;border-radius:5px;");
	ui.phoneEdt->setStyleSheet("background-color: #FFFFFF;border-top-left-radius:5px;border-bottom-left-radius:5px;");
	ui.changePhoneBtn->setStyleSheet("background-color: #FFFFFF;border-top-right-radius:5px;border-bottom-right-radius:5px;color:#FFF04B");
	ui.saveChangeBtn->setStyleSheet("background-color: #FFD54B;border-radius:8px;color:#FFFFFF");
	
	
	// ���ź����
	connect(ui.closeBtn, &QPushButton::clicked, this, &PersonalCenterWidget::OnClose);
	connect(ui.saveChangeBtn, &QPushButton::clicked, this, &PersonalCenterWidget::OnSaveChangeBtn);
	connect(ui.changePhoneBtn, &QPushButton::clicked, this, &PersonalCenterWidget::OnChangePhoneBtn);
	connect(ui.changeHeadPicBtn, &QPushButton::clicked, this, &PersonalCenterWidget::OnChangeHeadPicBtn);
	//
}

bool PersonalCenterWidget::SendChangeHeadImgAPI()
{
	
	// ʹ��QJsonObject��������ֵ�ԡ�
	QJsonObject jsonObject;
	jsonObject.insert("file", mFilePath);
	QJsonDocument jsonDoc;
	jsonDoc.setObject(jsonObject);

	qDebug() << "InterfaceAPI::get_instance().mHeadMap[""x-sid""] = " << InterfaceAPI::get_instance().mHeadMap["x-sid"];
	//QByteArray bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangeHeadImg, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDoc.toJson());
	//QByteArray bytes = InterfaceAPI::get_instance().SendAPIFile(InterfaceAPI::get_instance().mUrlChangeHeadImg, InterfaceAPI::get_instance().mHeadMap["x-sid"], mFilePath);
	//QByteArray bytes = InterfaceAPI::get_instance().SendAPIFile(InterfaceAPI::get_instance().mUrlChangeHeadImg, "eyJhbGciOiJIUzI1NiJ9.eyJ4LXVpZCI6MjMsImV4cCI6MTYwNjk2NTIxNiwiaWF0IjoxNjA2MzYwNDE2fQ.67bMLxKw4SC5cwBPYBzJhh8fvHB3fXMWPdSrnjFXYQc", mFilePath);
	QByteArray bytes = InterfaceAPI::get_instance().SendAPIFile(InterfaceAPI::get_instance().mUrlChangeHeadImg, "eyJhbGciOiJIUzI1NiJ9.eyJ4LXVpZCI6MjMsImV4cCI6MTYwNjk2NTIxNiwiaWF0IjoxNjA2MzYwNDE2fQ.67bMLxKw4SC5cwBPYBzJhh8fvHB3fXMWPdSrnjFXYQc", mFilePath);

	// QByteArrayת����QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	QString ss = objectSMS.value("message").toString();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ���Žӿ���Ϣʧ��"));
		return false;
	}


	return true;
}


bool PersonalCenterWidget::SendChangeNickNameAPI()
{
	//// ʹ��QJsonObject��������ֵ�ԡ�
	//QJsonObject jsonObject;
	//jsonObject.insert("file", mFilePath);
	//QJsonDocument jsonDoc;
	//jsonDoc.setObject(jsonObject);


	//QByteArray bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangeHeadImg, "", jsonDoc.toJson());
	//// QByteArrayת����QJsonObject
	//QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	//QJsonObject objectSMS = documentSMS.object();
	//int code = objectSMS.value("code").toInt();
	//if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	//{
	//	QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ���Žӿ���Ϣʧ��"));
	//	return false;
	//}


	return true;

}

void PersonalCenterWidget::OnSaveChangeBtn()
{
	QMessageBox::information(this, "info", QString::fromLocal8Bit("�����޸���Ϣ�߼������"));
	// ����������͸���ͷ��֪ͨ
	SendChangeHeadImgAPI();
}



void PersonalCenterWidget::OnChangePhoneBtn()
{
	QMessageBox::information(this, "info", QString::fromLocal8Bit("�����ֻ����߼������"));
	emit SigChangeAccount(PHONENUMBER);
}

void PersonalCenterWidget::OnChangeHeadPicBtn()
{
	QMessageBox::information(this, "info", QString::fromLocal8Bit("����ͷ���߼������"));
	QString filePath = QFileDialog::getOpenFileName(this,
		"Please choose an image file",
		"",
		"Image Files(*.jpg *.png);;All(*.*)");

	// �ж��ļ�·���Ƿ���Ч
	QFile file;
	file.setFileName(filePath);
	if (!file.open( QIODevice::ReadOnly))
	{
		file.close();
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("ѡ�е�ͼƬ��Ч��������ѡ��"));
		return;
	}
	file.close();
	mFilePath = filePath;

	// ���ظ���ͷ��
	ui.changeHeadPicBtn->setIcon(QIcon(filePath));
	return ;




}

void PersonalCenterWidget::OnClose()
{
	close();

}
