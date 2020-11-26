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
	/*用于系统设置的配置文件
	autoStart   false 开机不自自动 true 开机自启动
	exitOrTray		false 关闭程序，程序退出   true 缩小到托盘
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

	// 最小化到托盘
	QSystemTrayIcon* _Tray;
	QMenu* _Menu;
	QAction* _Reset;
	QAction* _Quit;

	// 更多设置菜单栏
	QMenu * mSetMenu;


public:
	// 储存API head 头信息
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
	// 初始化托盘
	void InitTray();
	// 初始化界面
	void InitInterface();
	// 系统控制界面布局 参考网址 https://www.it610.com/article/1293990827789459456.htm
	void InitSystemSetting();
	// 信号 槽绑定
	void InitConnectSlots();
	// 给所有控件添加图片
	void  AddIconToButtons();
	// 读取配置文件
	void ReadSystemConfigFile(QString file);
protected:
	void closeEvent(QCloseEvent *event);
signals:
	// 更改系统设置的当前状态
	void SigChangeAutoStartStatus(bool);
	void SigChangeExitOrTrayStatus(bool);

public slots:
	// 激活头像点击可用
	void OnSigHeadPicActive();
	// 当头像被点击时
	void OnHeadPicBtn();
	// 当登录被点击时
	void OnMainLoginBtn();
	// 当系统设置被点击时
	void SystemSettingClicked();
	// 当关于周游被点击时
	void AboutZhouYouClicked();
	// 当切换账户被点击时
	void SwitchAccountClicked();
	// 当退出登录被点击时
	void ExitLoginCLicked();
	// 当托盘按钮被选中时
	void OnSigTrayClicked(bool);		
	// 当推出程序按钮被选中时
	void OnSigExitCLicked(bool);
	// 当自启动被选中时
	void OnSigAutoStartClicked(bool);
	// 当托盘被选中时
	void OnTrayIconAction(QSystemTrayIcon::ActivationReason reason);
	//  当主窗口关闭按钮被点击时
	void OnMainCloseBtn();
	// 更改绑定手机号被点击时
	void OnSigChangeAccount(QString phone);
public:
	Ui::ZhouYouAcceleratorClass ui;
};
