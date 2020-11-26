#include "FeedBackWidget.h"

FeedBackWidget::FeedBackWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("用户反馈"));
	//隐藏或者删除QT窗体自带的标题栏 https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//设置反馈背景色
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// 关闭控件添加图片
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));
	//设备textEdit 背景色
	ui.textEdit->setStyleSheet("background-color: #A4C2FF;border-top-left-radius:10px;border-top-right-radius:10px;color:#FFFFFF;");

	// 设置图片描述背景色
	ui.pictureLbl->setStyleSheet("background-color: #A4C2FF;border-bottom-left-radius:10px;color:#FFFFFF;");
	ui.listWidget->setStyleSheet("background-color: #A4C2FF;border-bottom-right-radius:10px;");
	ui.listWidget->setViewMode(QListView::IconMode);
	//ui.listWidget->setFlow(QListView::TopToBottom);//这个是关键，qt给的demo中configdialog的例子中默认是竖向的  
	ui.listWidget->setFlow(QListView::LeftToRight);//这个是关键，qt给的demo中configdialog的例子中默认是竖向的  
	QListWidgetItem *item = new QListWidgetItem(QIcon(":/Resources/add.png"), NULL);
	ui.listWidget->addItem(item);
	ui.listWidget->setIconSize(QSize(80,80)); // 设置图片大小
	ui.listWidget->setLayoutMode(QListView::SinglePass); // 设置单向显示

	// 联系方式输入框背景颜色
	
	ui.qqWeChatLbl->setStyleSheet("color:#FFFFFF;");
	ui.qqWeChatEdt->setStyleSheet("background-color: #A4C2FF;border-radius:5px;color:#FFFFFF;");

	// 设置提交控件背景色 #FFD54B
	ui.submitBtn->setStyleSheet("background-color: #FFD54B;border-radius:8px;color:#FFFFFF;");

	connect(ui.listWidget, &QListWidget::currentRowChanged, this, &FeedBackWidget::OnCurrentRowChanged);
	connect(ui.submitBtn, &QPushButton::clicked, this, &FeedBackWidget::SubmitBtnClicked);
	connect(ui.closeBtn, &QPushButton::clicked, this, &FeedBackWidget::OnClose);

}

FeedBackWidget::~FeedBackWidget()
{
}

void FeedBackWidget::FeedBackBtnClicked()
{
	this->show();
	
}
void FeedBackWidget::SubmitBtnClicked()
{
	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("此处需要添加提交用户反馈逻辑"));
	//QString txt = ui.textEdit->toPlainText();

	//QVector<QIcon> vecIcon;
	//for (int nx = 0; nx < ui.listWidget->count(); nx++)
	//{
	//	vecIcon.append(ui.listWidget->item(nx)->icon());
	//}
	//QString qqWeXin = ui.qqWeChatEdt->text();


	//QString txt = ui.textEdit->toPlainText();
	//if (txt.trimmed().isEmpty())
	//{
	//	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("请描述你在使用过程中遇到的问题!"));
	//	return;
	//}
	//QString qqWeXin = ui.qqWeChatEdt->text();
	//if (qqWeXin.trimmed().isEmpty())
	//{
	//	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("请填写联系方式!"));
	//	return;
	//}

	// 向服务器提交反馈
	// 使用QJsonObject对象插入键值对。
	QJsonObject jsonObject;
	jsonObject.insert("contact", "123");
	jsonObject.insert("description", "FanKui");
	jsonObject.insert("image", "");
	QJsonDocument jsonDoc;
	jsonDoc.setObject(jsonObject);

	qDebug() << "InterfaceAPI::get_instance().mHeadMap[""x-sid""] = " << InterfaceAPI::get_instance().mHeadMap["x-sid"];
	QByteArray bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlFeedback, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDoc.toJson());

	// QByteArray转换成QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	QString ss = objectSMS.value("message").toString();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("登录中==> 获取短信接口信息失败"));
		return ;
	}


}

void FeedBackWidget::OnCurrentRowChanged(int row)
{
	QListWidgetItem *item = ui.listWidget->item(row);

	//打开文件夹中的图片文件
	QString openFile = QFileDialog::getOpenFileName(this,
		"Please choose an image file",
		"",
		"Image Files(*.jpg *.png *.bmp *.pgm *.pbm);;All(*.*)");

	if (openFile != "")
	{
		// 将选中图片设置成背景图片
		item->setIcon(QIcon(openFile));//setPixmap(QPixmap::fromImage(image));
		if (ui.listWidget->count() != 5 && row == ui.listWidget->count()-1) {
			ui.listWidget->addItem(new QListWidgetItem(QIcon(":/Resources/add.png"), NULL));
		}
	}

}

void FeedBackWidget::OnClose()
{
	close();
}