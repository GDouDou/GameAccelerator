#include "ChageUserAccountWidget.h"

ChageUserAccountWidget::ChageUserAccountWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

ChageUserAccountWidget::~ChageUserAccountWidget()
{
}

void ChageUserAccountWidget::Init()
{
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//�����޸��û��˻����汳��ɫ
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// �������屳��ɫ
	ui.verifySrcphoneLbl->setStyleSheet("color:#FFFFFF");
	ui.verifyDstPhoneLbl->setStyleSheet("color:#FFFFFF");
	ui.telPhoneLbl->setStyleSheet("color:#FFFFFF");

	ui.label_5->setStyleSheet("QLabel{border-image: url(:/Resources/phone.png);}");//ͼƬ����Դ�ļ���
	ui.label_5->setAlignment(Qt::AlignCenter);

	ui.label_3->setStyleSheet("QLabel{border-image: url(:/Resources/password.png);}");//ͼƬ����Դ�ļ���
	ui.label_3->setAlignment(Qt::AlignCenter);

	ui.label_7->setStyleSheet("QLabel{border-image: url(:/Resources/password.png);}");//ͼƬ����Դ�ļ���
	ui.label_7->setAlignment(Qt::AlignCenter);


	ui.widget->setStyleSheet("background-color:#A4C2FF;border-radius:6px;");
	ui.oldVerifyEdt->setStyleSheet("background-color:#A4C2FF;color:#E7E7E7");
	ui.oldVerifyBtn->setStyleSheet("background-color:#A4C2FF;color:#FFD54B");

	ui.widget_2->setStyleSheet("background-color:#A4C2FF;border-radius:6px;");
	ui.lbl86->setStyleSheet("background-color:#A4C2FF;color:#E7E7E7");
	ui.newPhoneEdt->setStyleSheet("background-color:#A4C2FF;color:#FFFFFF");

	ui.widget_3->setStyleSheet("background-color:#A4C2FF;border-radius:6px;");
	ui.newVerifyEdt->setStyleSheet("background-color:#A4C2FF;color:#E7E7E7");
	ui.newVerifyBtn->setStyleSheet("background-color:#A4C2FF;color:#FFD54B");
	

	// �رտؼ����ͼƬ
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));


	ui.cancelBtn->setStyleSheet("background-color:#38394E;border-radius:6px;color:#FFFFFF;");
	ui.OKBtn->setStyleSheet("background-color:#FFD54B;border-radius:6px;;color:#FFFFFF;");


	
	connect(ui.closeBtn, &QPushButton::clicked, this, &ChageUserAccountWidget::OnClose);
	connect(ui.oldVerifyBtn, &QPushButton::clicked, this, &ChageUserAccountWidget::OnOldVerifyBtn);
	connect(ui.OKBtn, &QPushButton::clicked, this, &ChageUserAccountWidget::OnOKBtn);
	connect(ui.cancelBtn, &QPushButton::clicked, this, &ChageUserAccountWidget::OnCancelBtn);
	
}

void ChageUserAccountWidget::OnOldVerifyBtn()
{
	//������ԭ�ֻ��Ŷ�����֤��
	QString phone = ui.telPhoneLbl->text().trimmed();
	// ʹ��QJsonObject��������ֵ�ԡ�
	QJsonObject jsonObjectSMS;
	jsonObjectSMS.insert("opType", "check");
	jsonObjectSMS.insert("phone", phone);
	// ʹ��QJsonDocument���ø�json����
	QJsonDocument jsonDocSMS;
	jsonDocSMS.setObject(jsonObjectSMS);

	QByteArray bytes;
	bytes.clear();
		 bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlSrcPhoneSend, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDocSMS.toJson());
	// QByteArrayת����QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ���Žӿ���Ϣʧ��"));
		return;
	}
	
	ui.oldVerifyEdt->setText(objectSMS.value("result").toString());
	return ;


}

void ChageUserAccountWidget::OnNewVerifyBtn()
{
	//���������ֻ��Ŷ�����֤��
	// ʹ��QJsonObject��������ֵ�ԡ�
	QJsonObject jsonObjectSMS;
	jsonObjectSMS.insert("opType", "change");
	jsonObjectSMS.insert("phone", NEW_PHONENUMBER);
	// ʹ��QJsonDocument���ø�json����
	QJsonDocument jsonDocSMS;
	jsonDocSMS.setObject(jsonObjectSMS);

	QByteArray bytes;
	bytes.clear();
	bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangePhoneSend, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDocSMS.toJson());
	// QByteArrayת����QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ���Žӿ���Ϣʧ��"));
		return;
	}
	
	ui.newVerifyEdt->setText(objectSMS.value("result").toString());

	////У�����ֻ���֤��

	//// ʹ��QJsonObject��������ֵ�ԡ�
	//QJsonObject jsonObject;
	//jsonObject.insert("code", QString(code));
	//jsonObject.insert("did", " ");
	//jsonObject.insert("phone", NEW_PHONENUMBER);
	////jsonObject.insert("phone", ui.phoneEdt->text().trimmed());

	//// ʹ��QJsonDocument���ø�json����
	//QJsonDocument jsonDoc;
	//jsonDoc.setObject(jsonObject);

	//bytes.clear();
	//bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangePhone, "", jsonDoc.toJson());

	//// QByteArrayת����QJsonObject
	//QJsonDocument documentResult = QJsonDocument::fromJson(bytes);
	//QJsonObject objectResult = documentResult.object();
	//int code = objectResult.value("code").toInt();
	//if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	//{
	//	QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ��¼�ӿ���Ϣʧ��"));
	//	return;
	//}

}

void ChageUserAccountWidget::OnOKBtn()
{
	
	//У��ԭ�ֻ���֤��
	QString oldCode = ui.oldVerifyEdt->text().trimmed();
	QString oldPhone = ui.telPhoneLbl->text().trimmed();
	// ʹ��QJsonObject��������ֵ�ԡ�
	QJsonObject jsonObjectOld;
	jsonObjectOld.insert("code", oldCode);
	jsonObjectOld.insert("did", " ");
	jsonObjectOld.insert("phone", oldPhone);
	//jsonObject.insert("phone", ui.phoneEdt->text().trimmed());

	// ʹ��QJsonDocument���ø�json����
	QJsonDocument jsonDocOld;
	jsonDocOld.setObject(jsonObjectOld);

	QByteArray bytes;
	bytes.clear();
	bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlCheckSrcPhone, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDocOld.toJson());

	// QByteArrayת����QJsonObject
	QJsonDocument documentResultOld = QJsonDocument::fromJson(bytes);
	QJsonObject objectResultOld = documentResultOld.object();
	int code = objectResultOld.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ��¼�ӿ���Ϣʧ��"));
		return;
	}



	//У�����ֻ���֤��
	QString newCode = ui.newVerifyEdt->text().trimmed();

	// ʹ��QJsonObject��������ֵ�ԡ�
	QJsonObject jsonObject;
	jsonObject.insert("code", newCode);
	jsonObject.insert("did", " ");
	jsonObject.insert("phone", NEW_PHONENUMBER);
	//jsonObject.insert("phone", ui.phoneEdt->text().trimmed());

	// ʹ��QJsonDocument���ø�json����
	QJsonDocument jsonDoc;
	jsonDoc.setObject(jsonObject);

	bytes.clear();
	bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangePhone, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDoc.toJson());

	// QByteArrayת����QJsonObject
	QJsonDocument documentResult = QJsonDocument::fromJson(bytes);
	QJsonObject objectResult = documentResult.object();
	 code = objectResult.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ��¼�ӿ���Ϣʧ��"));
		return;
	}


			
}

void ChageUserAccountWidget::OnCancelBtn()
{

}

void ChageUserAccountWidget::OnClose()
{
	close();
}