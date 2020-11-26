#include "AboutZhouYouWidget.h"

AboutZhouYouWidget::AboutZhouYouWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

AboutZhouYouWidget::~AboutZhouYouWidget()
{
}

void AboutZhouYouWidget::Init()
{
	// 设置title
	setWindowTitle(QString::fromLocal8Bit("关于周游"));
	//隐藏或者删除QT窗体自带的标题栏 https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);

	//设置关于周游背景色
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background,QColor(86,141,251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// 设置官网控件背景色
	ui.officeWebsiteBtn->setStyleSheet("background-color: rgb(86, 141, 251);");
	// 设置关于周游控件背景色
	ui.userAgreementBtn->setStyleSheet("background-color: rgb(86, 141, 251);");

	// 关闭控件添加图片
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));

	InitConnectSlots();
}

void AboutZhouYouWidget::InitConnectSlots()
{
	connect(ui.officeWebsiteBtn, &QPushButton::clicked, this, &AboutZhouYouWidget::OfficeWebsiteClicked);
	connect(ui.userAgreementBtn, &QPushButton::clicked, this, &AboutZhouYouWidget::UserAgreementClicked);
	connect(ui.closeBtn, &QPushButton::clicked, this, &AboutZhouYouWidget::OnClose);

}

void AboutZhouYouWidget::OfficeWebsiteClicked()
{
	// 访问和诠胺美官方网站
	const QUrl url("http://www.baidu.com");
	QDesktopServices::openUrl(url);
	
}

void AboutZhouYouWidget::UserAgreementClicked()
{
	// 查看用户协议
	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("请提供用户协议文本信息！"));
	mUserAgreementWid.setWindowTitle(QString::fromLocal8Bit("用户协议"));
	mUserAgreementWid.setMinimumSize(640, 480);
	QTextEdit* txtEdit = new QTextEdit(&mUserAgreementWid);
	txtEdit->setMinimumSize(640, 480);
	txtEdit->setText("123");
	mUserAgreementWid.show();

}

void AboutZhouYouWidget::OnClose()
{
	close();
}