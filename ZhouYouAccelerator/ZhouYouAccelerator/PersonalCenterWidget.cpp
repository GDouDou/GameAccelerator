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
	//隐藏或者删除QT窗体自带的标题栏 https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);

	//设置个人中心背景色
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// 关闭控件添加图片
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));

	// 设置控件背景色
	ui.userNameEdt->setStyleSheet("background-color: #FFFFFF;border-radius:5px;");
	ui.phoneEdt->setStyleSheet("background-color: #FFFFFF;border-top-left-radius:5px;border-bottom-left-radius:5px;");
	ui.changePhoneBtn->setStyleSheet("background-color: #FFFFFF;border-top-right-radius:5px;border-bottom-right-radius:5px;color:#FFF04B");
	ui.saveChangeBtn->setStyleSheet("background-color: #FFD54B;border-radius:8px;color:#FFFFFF");
	
	
	// 绑定信号与槽
	connect(ui.closeBtn, &QPushButton::clicked, this, &PersonalCenterWidget::OnClose);
	connect(ui.saveChangeBtn, &QPushButton::clicked, this, &PersonalCenterWidget::OnSaveChangeBtn);
	connect(ui.changePhoneBtn, &QPushButton::clicked, this, &PersonalCenterWidget::OnChangePhoneBtn);
	connect(ui.changeHeadPicBtn, &QPushButton::clicked, this, &PersonalCenterWidget::OnChangeHeadPicBtn);
	//
}

bool PersonalCenterWidget::SendChangeHeadImgAPI()
{
	
	// 使用QJsonObject对象插入键值对。
	QJsonObject jsonObject;
	jsonObject.insert("file", mFilePath);
	QJsonDocument jsonDoc;
	jsonDoc.setObject(jsonObject);

	qDebug() << "InterfaceAPI::get_instance().mHeadMap[""x-sid""] = " << InterfaceAPI::get_instance().mHeadMap["x-sid"];
	//QByteArray bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangeHeadImg, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDoc.toJson());
	//QByteArray bytes = InterfaceAPI::get_instance().SendAPIFile(InterfaceAPI::get_instance().mUrlChangeHeadImg, InterfaceAPI::get_instance().mHeadMap["x-sid"], mFilePath);
	//QByteArray bytes = InterfaceAPI::get_instance().SendAPIFile(InterfaceAPI::get_instance().mUrlChangeHeadImg, "eyJhbGciOiJIUzI1NiJ9.eyJ4LXVpZCI6MjMsImV4cCI6MTYwNjk2NTIxNiwiaWF0IjoxNjA2MzYwNDE2fQ.67bMLxKw4SC5cwBPYBzJhh8fvHB3fXMWPdSrnjFXYQc", mFilePath);
	QByteArray bytes = InterfaceAPI::get_instance().SendAPIFile(InterfaceAPI::get_instance().mUrlChangeHeadImg, "eyJhbGciOiJIUzI1NiJ9.eyJ4LXVpZCI6MjMsImV4cCI6MTYwNjk2NTIxNiwiaWF0IjoxNjA2MzYwNDE2fQ.67bMLxKw4SC5cwBPYBzJhh8fvHB3fXMWPdSrnjFXYQc", mFilePath);

	// QByteArray转换成QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	QString ss = objectSMS.value("message").toString();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("登录中==> 获取短信接口信息失败"));
		return false;
	}


	return true;
}


bool PersonalCenterWidget::SendChangeNickNameAPI()
{
	//// 使用QJsonObject对象插入键值对。
	//QJsonObject jsonObject;
	//jsonObject.insert("file", mFilePath);
	//QJsonDocument jsonDoc;
	//jsonDoc.setObject(jsonObject);


	//QByteArray bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlChangeHeadImg, "", jsonDoc.toJson());
	//// QByteArray转换成QJsonObject
	//QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	//QJsonObject objectSMS = documentSMS.object();
	//int code = objectSMS.value("code").toInt();
	//if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	//{
	//	QMessageBox::information(this, "info", QString::fromLocal8Bit("登录中==> 获取短信接口信息失败"));
	//	return false;
	//}


	return true;

}

void PersonalCenterWidget::OnSaveChangeBtn()
{
	QMessageBox::information(this, "info", QString::fromLocal8Bit("保存修改信息逻辑待完成"));
	// 向服务器发送更改头像通知
	SendChangeHeadImgAPI();
}



void PersonalCenterWidget::OnChangePhoneBtn()
{
	QMessageBox::information(this, "info", QString::fromLocal8Bit("更改手机号逻辑待完成"));
	emit SigChangeAccount(PHONENUMBER);
}

void PersonalCenterWidget::OnChangeHeadPicBtn()
{
	QMessageBox::information(this, "info", QString::fromLocal8Bit("更改头像逻辑待完成"));
	QString filePath = QFileDialog::getOpenFileName(this,
		"Please choose an image file",
		"",
		"Image Files(*.jpg *.png);;All(*.*)");

	// 判断文件路径是否有效
	QFile file;
	file.setFileName(filePath);
	if (!file.open( QIODevice::ReadOnly))
	{
		file.close();
		QMessageBox::information(NULL, "info", QString::fromLocal8Bit("选中的图片无效，请重新选择！"));
		return;
	}
	file.close();
	mFilePath = filePath;

	// 本地更换头像
	ui.changeHeadPicBtn->setIcon(QIcon(filePath));
	return ;




}

void PersonalCenterWidget::OnClose()
{
	close();

}
