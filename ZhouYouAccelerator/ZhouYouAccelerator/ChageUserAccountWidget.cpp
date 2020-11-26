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
	//隐藏或者删除QT窗体自带的标题栏 https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//设置修改用户账户界面背景色
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// 设置字体背景色
	ui.verifySrcphoneLbl->setStyleSheet("color:#FFFFFF");
	ui.verifyDstPhoneLbl->setStyleSheet("color:#FFFFFF");
	ui.telPhoneLbl->setStyleSheet("color:#FFFFFF");

	ui.label_5->setStyleSheet("QLabel{border-image: url(:/Resources/phone.png);}");//图片在资源文件中
	ui.label_5->setAlignment(Qt::AlignCenter);

	ui.label_3->setStyleSheet("QLabel{border-image: url(:/Resources/password.png);}");//图片在资源文件中
	ui.label_3->setAlignment(Qt::AlignCenter);

	ui.label_7->setStyleSheet("QLabel{border-image: url(:/Resources/password.png);}");//图片在资源文件中
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
	

	// 关闭控件添加图片
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
	//　发送原手机号短信验证码
	QString phone = ui.telPhoneLbl->text().trimmed();
	// 使用QJsonObject对象插入键值对。
	QJsonObject jsonObjectSMS;
	jsonObjectSMS.insert("opType", "check");
	jsonObjectSMS.insert("phone", phone);
	// 使用QJsonDocument设置该json对象
	QJsonDocument jsonDocSMS;
	jsonDocSMS.setObject(jsonObjectSMS);

	QByteArray bytes;
	bytes.clear();
		 bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlSrcPhoneSend, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDocSMS.toJson());
	// QByteArray转换成QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("登录中==> 获取短信接口信息失败"));
		return;
	}
	
	ui.oldVerifyEdt->setText(objectSMS.value("result").toString());
	return ;


}

void ChageUserAccountWidget::OnNewVerifyBtn()
{
	//　发送新手机号短信验证码
	// 使用QJsonObject对象插入键值对。
	QJsonObject jsonObjectSMS;
	jsonObjectSMS.insert("opType", "change");
	jsonObjectSMS.insert("phone", NEW_PHONENUMBER);
	// 使用QJsonDocument设置该json对象
	QJsonDocument jsonDocSMS;
	jsonDocSMS.setObject(jsonObjectSMS);

	QByteArray bytes;
	bytes.clear();
	bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangePhoneSend, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDocSMS.toJson());
	// QByteArray转换成QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("登录中==> 获取短信接口信息失败"));
		return;
	}
	
	ui.newVerifyEdt->setText(objectSMS.value("result").toString());

	////校验新手机验证码

	//// 使用QJsonObject对象插入键值对。
	//QJsonObject jsonObject;
	//jsonObject.insert("code", QString(code));
	//jsonObject.insert("did", " ");
	//jsonObject.insert("phone", NEW_PHONENUMBER);
	////jsonObject.insert("phone", ui.phoneEdt->text().trimmed());

	//// 使用QJsonDocument设置该json对象
	//QJsonDocument jsonDoc;
	//jsonDoc.setObject(jsonObject);

	//bytes.clear();
	//bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangePhone, "", jsonDoc.toJson());

	//// QByteArray转换成QJsonObject
	//QJsonDocument documentResult = QJsonDocument::fromJson(bytes);
	//QJsonObject objectResult = documentResult.object();
	//int code = objectResult.value("code").toInt();
	//if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	//{
	//	QMessageBox::information(this, "info", QString::fromLocal8Bit("登录中==> 获取登录接口信息失败"));
	//	return;
	//}

}

void ChageUserAccountWidget::OnOKBtn()
{
	
	//校验原手机验证码
	QString oldCode = ui.oldVerifyEdt->text().trimmed();
	QString oldPhone = ui.telPhoneLbl->text().trimmed();
	// 使用QJsonObject对象插入键值对。
	QJsonObject jsonObjectOld;
	jsonObjectOld.insert("code", oldCode);
	jsonObjectOld.insert("did", " ");
	jsonObjectOld.insert("phone", oldPhone);
	//jsonObject.insert("phone", ui.phoneEdt->text().trimmed());

	// 使用QJsonDocument设置该json对象
	QJsonDocument jsonDocOld;
	jsonDocOld.setObject(jsonObjectOld);

	QByteArray bytes;
	bytes.clear();
	bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlCheckSrcPhone, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDocOld.toJson());

	// QByteArray转换成QJsonObject
	QJsonDocument documentResultOld = QJsonDocument::fromJson(bytes);
	QJsonObject objectResultOld = documentResultOld.object();
	int code = objectResultOld.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("登录中==> 获取登录接口信息失败"));
		return;
	}



	//校验新手机验证码
	QString newCode = ui.newVerifyEdt->text().trimmed();

	// 使用QJsonObject对象插入键值对。
	QJsonObject jsonObject;
	jsonObject.insert("code", newCode);
	jsonObject.insert("did", " ");
	jsonObject.insert("phone", NEW_PHONENUMBER);
	//jsonObject.insert("phone", ui.phoneEdt->text().trimmed());

	// 使用QJsonDocument设置该json对象
	QJsonDocument jsonDoc;
	jsonDoc.setObject(jsonObject);

	bytes.clear();
	bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangePhone, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDoc.toJson());

	// QByteArray转换成QJsonObject
	QJsonDocument documentResult = QJsonDocument::fromJson(bytes);
	QJsonObject objectResult = documentResult.object();
	 code = objectResult.value("code").toInt();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("登录中==> 获取登录接口信息失败"));
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