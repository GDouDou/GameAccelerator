#pragma once

#include <QtWidgets/QWidget>
#include "ui_ZhouYouAccelerator.h"
#include <QIcon>
#include <QAction>
#include <QMenu>
#include <QDebug>
#include <QSettings>
#include <QSystemTrayIcon>
#include <QCloseEvent>
#include <QAction>
#include <QMenu>
#include <QMap>
#include <map>
#include <QString>
#include <QDateTime>
#include "InterfaceAPI.h"

#include "AboutZhouYouWidget.h"
#include "FeedBackWidget.h"
#include "SystemSettingWidget.h"
#include "LoginInterface.h"
#include "PersonalCenterWidget.h"
#include "ChageUserAccountWidget.h"
#include "StationInformationWidget.h"

#ifndef SYSTEMSETTINGNAME
#define SYSTEMSETTINGNAME "../config/systemConfig.ini"
#endif // !SYSTEMSETTINGNAME


class ZhouYouAccelerator : public QWidget
{
	Q_OBJECT

public:
	/*����ϵͳ���õ������ļ�
	autoStart   false ���������Զ� true ����������
	exitOrTray		false �رճ��򣬳����˳�   true ��С������
	*/
	struct SystemConfig {
		//
		bool autoStart;
		bool exitOrTray;
		SystemConfig()
		{
		
			autoStart = false;
			exitOrTray = false;
		
		}
	};
	SystemConfig mSysConfig;

	// ��С��������
	QSystemTrayIcon* _Tray;
	QMenu* _Menu;
	QAction* _Reset;
	QAction* _Quit;

	// �������ò˵���
	QMenu * mSetMenu;


public:
	// ����API head ͷ��Ϣ
	std::map<std::string, std::string> mHeadAPIMap;

public:
	
	bool InitAPI();

public:
	ZhouYouAccelerator(QWidget *parent = Q_NULLPTR);
public:
	AboutZhouYouWidget mAboutZYJSQ;
	FeedBackWidget mFeedBackWidget;
	SystemSettingWidget mSysSetWidget;
	LoginInterface mLoginInterface;
	PersonalCenterWidget mPerCenterWidget;
	ChageUserAccountWidget mChageUserAccountWidget;
	StationInformationWidget mStationInformationWidget;
public:
	// ��ʼ������
	void InitTray();
	// ��ʼ������
	void InitInterface();
	// ϵͳ���ƽ��沼�� �ο���ַ https://www.it610.com/article/1293990827789459456.htm
	void InitSystemSetting();
	// �ź� �۰�
	void InitConnectSlots();
	// �����пؼ����ͼƬ
	void  AddIconToButtons();
	// ��ȡ�����ļ�
	void ReadSystemConfigFile(QString file);
protected:
	void closeEvent(QCloseEvent *event);
signals:
	// ����ϵͳ���õĵ�ǰ״̬
	void SigChangeAutoStartStatus(bool);
	void SigChangeExitOrTrayStatus(bool);

public slots:
	// ����ͷ��������
	void OnSigHeadPicActive();
	// ��ͷ�񱻵��ʱ
	void OnHeadPicBtn();
	// ����¼�����ʱ
	void OnMainLoginBtn();
	// ��ϵͳ���ñ����ʱ
	void SystemSettingClicked();
	// ���������α����ʱ
	void AboutZhouYouClicked();
	// ���л��˻������ʱ
	void SwitchAccountClicked();
	// ���˳���¼�����ʱ
	void ExitLoginCLicked();
	// �����̰�ť��ѡ��ʱ
	void OnSigTrayClicked(bool);		
	// ���Ƴ�����ť��ѡ��ʱ
	void OnSigExitCLicked(bool);
	// ����������ѡ��ʱ
	void OnSigAutoStartClicked(bool);
	// �����̱�ѡ��ʱ
	void OnTrayIconAction(QSystemTrayIcon::ActivationReason reason);
	//  �������ڹرհ�ť�����ʱ
	void OnMainCloseBtn();
	// ���İ��ֻ��ű����ʱ
	void OnSigChangeAccount(QString phone);
public:
	Ui::ZhouYouAcceleratorClass ui;
};
