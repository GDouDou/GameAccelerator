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
	// ����title
	setWindowTitle(QString::fromLocal8Bit("��������"));
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);

	//���ù������α���ɫ
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background,QColor(86,141,251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// ���ù����ؼ�����ɫ
	ui.officeWebsiteBtn->setStyleSheet("background-color: rgb(86, 141, 251);");
	// ���ù������οؼ�����ɫ
	ui.userAgreementBtn->setStyleSheet("background-color: rgb(86, 141, 251);");

	// �رտؼ����ͼƬ
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
	// ���ʺ�ڹ�����ٷ���վ
	const QUrl url("http://www.baidu.com");
	QDesktopServices::openUrl(url);
	
}

void AboutZhouYouWidget::UserAgreementClicked()
{
	// �鿴�û�Э��
	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("���ṩ�û�Э���ı���Ϣ��"));
	mUserAgreementWid.setWindowTitle(QString::fromLocal8Bit("�û�Э��"));
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