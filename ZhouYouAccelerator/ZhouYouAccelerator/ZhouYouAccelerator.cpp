#include "ZhouYouAccelerator.h"

ZhouYouAccelerator::ZhouYouAccelerator(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	InitInterface();
}

void ZhouYouAccelerator::InitInterface()
{
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//���������汳��ͼƬ
	this->setAutoFillBackground(true);
	QPalette palette = this->palette();
	palette.setBrush(QPalette::Window, QBrush(QPixmap(":/Resources/background.png").scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));// ʹ��ƽ�������ŷ�ʽ
	this->setPalette(palette);// ��widget���ϱ���ͼ
 
	// ������������ര�屳��ɫ
	ui.leftWidget->setAutoFillBackground(true);
	QPalette leftPal = ui.leftWidget->palette();
	leftPal.setColor(QPalette::Background, QColor(0, 0, 0,127));
	ui.leftWidget->setPalette(leftPal);
	
	//����δ��¼��ͷ�񲻿ɵ��
	//ui.headPicBtn->setEnabled(false);

	AddIconToButtons();
	InitSystemSetting();
	InitTray();
	InitConnectSlots();
	ReadSystemConfigFile(SYSTEMSETTINGNAME);
	// ��ʼ��API �ӿ�
	InitAPI();

	
}

void ZhouYouAccelerator::InitTray()
{
	_Tray = new QSystemTrayIcon(this);
	_Tray->setIcon(QIcon(QPixmap(":/Resources/systemSetting.png")));
	//_Tray->show(); //��ʾ����
	connect(_Tray, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
		this, SLOT(OnTrayIconAction(QSystemTrayIcon::ActivationReason)));
	_Menu = new QMenu(this);
	_Reset = new QAction(QStringLiteral("��ʾ����"), this);
	_Quit = new QAction(QStringLiteral("�˳�����"), this);
	connect(_Quit, SIGNAL(triggered(bool)), this, SLOT(close()));
	connect(_Reset, SIGNAL(triggered(bool)), this, SLOT(showNormal()));

	_Menu->addAction(_Reset);
	_Menu->addAction(_Quit);
	_Tray->setContextMenu(_Menu);

}

void ZhouYouAccelerator::closeEvent(QCloseEvent *event)
{
	// ��ô�˳��᲻����bug???
	QApplication::exit();

}

void ZhouYouAccelerator::AddIconToButtons()
{
	// ����ͷ��ť����ʽ // ���������α߳�һ���Բ�Ǿ���Բ��
	ui.headPicBtn->setStyleSheet("border-radius:84px;background-color: rgb(0,0,0);");

	//����������ɫ 
	ui.mainLoginBtn->setStyleSheet("color:#FFFFFF");
	ui.mainAddGameBtn->setStyleSheet("color:#FFFFFF");
	ui.mainMyJSBtn->setStyleSheet("color:#FFFFFF");
	ui.mainVIPBtn->setStyleSheet("color:#FFFFFF");
	ui.feedBackBtn->setStyleSheet("color:#FFFFFF");

	//��ӱ���ͼƬ

	//QPixmap iconGame(":/Resources/game.png");
	//ui.mainAddGameLbl->setPixmap(iconGame);
	//QPixmap iconJS(":/Resources/jiaSu.png");
	//ui.mainMyJQLbl->setPixmap(iconJS);
	ui.mainAddGameLbl->setStyleSheet("QLabel{border-image: url(:/Resources/game.png);}");//ͼƬ����Դ�ļ���
	ui.mainAddGameLbl->setAlignment(Qt::AlignCenter);

	ui.mainMyJQLbl->setStyleSheet("QLabel{border-image: url(:/Resources/jiaSu.png);}");//ͼƬ����Դ�ļ���
	ui.mainMyJQLbl->setAlignment(Qt::AlignCenter);

	// ������������ʽ
	//ui.searchEdt->setStyleSheet("QLineEdit{border-image: url(:/Resources/search.png);}");
	//ui.searchEdt->setTextMargins(13 + 2, 0, 0, 0);

	ui.searchEdt->setStyleSheet("border-radius:16px;");
	// ���վ����ͼƬ
	ui.stationInfo->setStyleSheet("QPushButton{border-image: url(:/Resources/stationInfo.png);}");//ͼƬ����Դ�ļ���

	// ϵͳ����ͼ�� 
	ui.settingBtn->setIcon(QIcon(":/Resources/setting.png"));
	//��ӷ�����ϢͼƬ ͼƬ���ظ�������������
	ui.feedBack->setStyleSheet("QLabel{"
		"border-image:url(:/Resources/feedBack.png) 4 4 4 4 stretch stretch;"
		"}");
	
}
	
void ZhouYouAccelerator::InitConnectSlots()
{
	
	connect(ui.mainCloseBtn, &QPushButton::clicked, this, &ZhouYouAccelerator::OnMainCloseBtn);
	connect(ui.mainLoginBtn, &QPushButton::clicked, this, &ZhouYouAccelerator::OnMainLoginBtn);
	connect(ui.headPicBtn, &QPushButton::clicked, this, &ZhouYouAccelerator::OnHeadPicBtn);

	connect(ui.feedBackBtn, &QPushButton::clicked, &mFeedBackWidget, &FeedBackWidget::FeedBackBtnClicked);


	connect(&mSysSetWidget, &SystemSettingWidget::SigTrayClicked, this, &ZhouYouAccelerator::OnSigTrayClicked);
	connect(&mSysSetWidget, &SystemSettingWidget::SigExitCLicked, this, &ZhouYouAccelerator::OnSigExitCLicked);
	connect(&mSysSetWidget, &SystemSettingWidget::SigAutoStartClicked, this, &ZhouYouAccelerator::OnSigAutoStartClicked);
	connect(this, &ZhouYouAccelerator::SigChangeAutoStartStatus, &mSysSetWidget, &SystemSettingWidget::OnSigChangeAutoStartStatus);
	connect(this, &ZhouYouAccelerator::SigChangeExitOrTrayStatus, &mSysSetWidget, &SystemSettingWidget::OnSigChangeExitOrTrayStatus);
	connect(this, &ZhouYouAccelerator::SigChangeExitOrTrayStatus, &mSysSetWidget, &SystemSettingWidget::OnSigChangeExitOrTrayStatus);
	connect(ui.stationInfo, &QPushButton::clicked, &mStationInformationWidget, &StationInformationWidget::OnStationInfo);
	

	connect(&mLoginInterface, &LoginInterface::SigHeadPicActive, this, &ZhouYouAccelerator::OnSigHeadPicActive);
	
	connect(&mPerCenterWidget, &PersonalCenterWidget::SigChangeAccount, this, &ZhouYouAccelerator::OnSigChangeAccount);
	
}
void ZhouYouAccelerator::ReadSystemConfigFile(QString file)
{
	QSettings *configIniRead = new QSettings(file, QSettings::IniFormat);
	mSysConfig.autoStart = configIniRead->value("autoStart").toBool();
	mSysConfig.exitOrTray = configIniRead->value("exitOrTray").toBool();


	emit SigChangeAutoStartStatus(mSysConfig.autoStart);
	emit SigChangeExitOrTrayStatus(mSysConfig.exitOrTray);
}

void ZhouYouAccelerator::InitSystemSetting()
{
	//���ø������ñ���ͼƬ
	//ui.settingBtn->setIcon(QIcon(":/Resources/setting.png"));

	mSetMenu = new QMenu();
	QAction* setting = new QAction(mSetMenu);
	QAction* aboutZhouYou = new QAction(mSetMenu);

	setting->setIcon(QIcon(":/Resources/systemSetting.png"));
	aboutZhouYou->setIcon(QIcon(":/Resources/aboutZhouYou.png"));


	setting->setText(QString::fromLocal8Bit("  ϵͳ����"));
	aboutZhouYou->setText(QString::fromLocal8Bit("   ��������"));

	

	ui.settingBtn->setCursor(QCursor(Qt::PointingHandCursor));
	//setMenu->setWindowFlags(setMenu->windowFlags() | Qt::FramelessWindowHint);
	//setMenu->setAttribute(Qt::WA_TranslucentBackground);
	//setMenu->setStyleSheet(" QMenu {border-radius:5px;font-family:'Arial';font-size:16px;}"
	//	" QMenu::item {height:35px; width:120px;padding-left:25px;border: 1px solid none;}"
	//	"QMenu::item:selected {background-color:rgb(0,120,215);\
 //                     padding-left:25px;border: 1px solid rgb(65,173,255);}");

	mSetMenu->addAction(setting);
	mSetMenu->addAction(aboutZhouYou);

	ui.settingBtn->setMenu(mSetMenu);

	connect(setting, &QAction::triggered, this, &ZhouYouAccelerator::SystemSettingClicked);
	connect(aboutZhouYou, &QAction::triggered, this, &ZhouYouAccelerator::AboutZhouYouClicked);

}

void ZhouYouAccelerator::OnHeadPicBtn()
{
	mPerCenterWidget.show();
}

void ZhouYouAccelerator::OnSigChangeAccount(QString phone)
{
	mChageUserAccountWidget.ui.telPhoneLbl->setText(phone);
	mChageUserAccountWidget.show();
}

void ZhouYouAccelerator::OnMainLoginBtn()
{
	// ��¼������ʾ
	mLoginInterface.show();

}

void ZhouYouAccelerator::OnSigHeadPicActive()
{

	QAction* switchAccount = new QAction(mSetMenu);
	QAction* exitLogin = new QAction(mSetMenu);
	switchAccount->setIcon(QIcon(":/Resources/switchAccount.png"));
	exitLogin->setIcon(QIcon(":/Resources/exitLogin.png"));

	switchAccount->setText(QString::fromLocal8Bit("  �л��˺�"));
	exitLogin->setText(QString::fromLocal8Bit("   �˳���¼"));

	mSetMenu->addAction(switchAccount);
	mSetMenu->addAction(exitLogin);

	connect(switchAccount, &QAction::triggered, this, &ZhouYouAccelerator::SwitchAccountClicked);
	connect(exitLogin, &QAction::triggered, this, &ZhouYouAccelerator::ExitLoginCLicked);

	// ��¼�ɹ�֮����ͷ�񣬿��Խ����������
	ui.headPicBtn->setEnabled(true);
}

void ZhouYouAccelerator::SystemSettingClicked()
{
	//qDebug() << QString::fromLocal8Bit("ϵͳ����");
	mSysSetWidget.show();
}

void ZhouYouAccelerator::AboutZhouYouClicked()
{
	mAboutZYJSQ.show();
}

void ZhouYouAccelerator::SwitchAccountClicked()
{
	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("�л��û��߼�������"));
}

void ZhouYouAccelerator::ExitLoginCLicked()
{
	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("�˳���¼�߼�������"));
}

void ZhouYouAccelerator::OnSigTrayClicked(bool flag)
{
	QSettings *configIniWrite = new QSettings(SYSTEMSETTINGNAME, QSettings::IniFormat);
	configIniWrite->setValue("exitOrTray", flag);
}

void ZhouYouAccelerator::OnSigExitCLicked(bool flag)
{
	QSettings *configIniWrite = new QSettings(SYSTEMSETTINGNAME, QSettings::IniFormat);
	configIniWrite->setValue("exitOrTray", flag);

}

void ZhouYouAccelerator::OnSigAutoStartClicked(bool flag)
{
	QSettings *configIniWrite = new QSettings(SYSTEMSETTINGNAME, QSettings::IniFormat);
	configIniWrite->setValue("autoStart", flag);


}


void ZhouYouAccelerator::OnMainCloseBtn()
{
	if (true == mSysConfig.exitOrTray) {
		// ��С������
		this->hide();
		_Tray->show();
	}
	else {
		close();
	}

}

void ZhouYouAccelerator::OnTrayIconAction(QSystemTrayIcon::ActivationReason reason)
{
	//if (reason == QSystemTrayIcon::Trigger) {
	//	//��ʾ������С�Ĵ���
	//	this->showNormal();
	//}
	switch (reason)
	{
	case QSystemTrayIcon::Trigger://��������ͼ��
		break;
	case QSystemTrayIcon::DoubleClick://˫������ͼ��
		if (this->isHidden())
		{
			//�ָ�������ʾ
			this->show();
			//һ������ȱһ��������Ч�������ö�
			this->setWindowState(Qt::WindowActive);
			this->activateWindow();
		}
		else
		{
			this->hide();
		}
		break;
	default:
		break;
	}

}

bool ZhouYouAccelerator::InitAPI()
{
	//std::string str = getBaseboardUuid();
	//mHeadAPIMap["x-did"] = str;
	//int itime = 0;
	//mHeadAPIMap["x-ts"] = std::to_string(itime);;// ÿ���������ݣ�ʱ����Ҫ�Լ���ȡ��ǰ��ʱ�䣬��ʼ�� Ĭ�ϸ���
	//mHeadAPIMap["x-client-info"] = getSystemName();
	//mHeadAPIMap["x-sid"] = "eyJhbGciOiJIUzI1NiJ9.eyJ4LXVpZCI6MTcsImV4cCI6MTYwNjM4MDcwOCwiaWF0IjoxNjA1Nzc1OTA4fQ.ZuQOCCsuUpL1EQ3sydJjzw863ZxFi1Q-PP5g8vr_UQw";
	//mHeadAPIMap["x-sign"] = ""; 
	//mHeadAPIMap["x-trace-id"] = std::to_string(itime);;
	//mHeadAPIMap["x-ua"] = "windows";
	//mHeadAPIMap["x-uid"] = getBaseboardUuid();
	//mHeadAPIMap["Content-Type"] = "application/json";

	return true;
}

