#include "SystemSettingWidget.h"

SystemSettingWidget::SystemSettingWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//隐藏或者删除QT窗体自带的标题栏 https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);

	//设置系统设置背景色
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// 关闭控件添加图片
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));
	// 实现复选框的大小，设置之后点击效果失败
	//ui.autoStartBox->setStyleSheet("QCheckBox::indicator{ width: 26px;height: 26px;border-radius:5px;background-color: #FFFFFF;}");
	//ui.trayBtn->setStyleSheet("QRadioButton::indicator{ width: 26px;height: 26px;border-radius:13px;background-color: #FFFFFF;}");
	//ui.exitBtn->setStyleSheet("QRadioButton::indicator{ width: 26px;height: 26px;border-radius:13px;background-color: #FFFFFF;}");


	connect(ui.autoStartBox, &QCheckBox::stateChanged, this, &SystemSettingWidget::OnStateChanged);
	connect(ui.trayBtn, &QRadioButton::clicked, this, &SystemSettingWidget::OnTrayBtnClicked);
	connect(ui.closeBtn, &QCheckBox::clicked, this, &SystemSettingWidget::OnClose);
	connect(ui.exitBtn, &QRadioButton::clicked, this, &SystemSettingWidget::OnExit);

}

SystemSettingWidget::~SystemSettingWidget()
{
}

void SystemSettingWidget::OnStateChanged(int state)
{
	QSettings *configIniWrite = new QSettings("hahaya.ini", QSettings::IniFormat);
	if (configIniWrite == NULL) {
		QMessageBox::warning(this, "warning", QString::fromLocal8Bit("系统设置配置文件打开失败!"));
		return;
	}

	//QMessageBox::information(NULL, "info", QString::fromLocal8Bit("开机自启动功能未实现！"));
	QSettings  reg("HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", QSettings::NativeFormat);
	QString strAppPath = QDir::toNativeSeparators(QCoreApplication::applicationFilePath());
	if (Qt::Unchecked == state) 
	{
		
		reg.setValue("wirtepad", "");
		emit SigAutoStartClicked(false);

	}
	else if (Qt::Checked == state)
	{
		reg.setValue("wirtepad", "");
		reg.setValue("wirtepad", strAppPath);
		emit SigAutoStartClicked(true);
	}
	else
	{
		
	}
}

void SystemSettingWidget::OnTrayBtnClicked()
{

	emit SigTrayClicked(true);
}

void SystemSettingWidget::OnExit()
{
	
	emit SigExitCLicked(false);
}

void SystemSettingWidget::OnSigChangeAutoStartStatus(bool flag)
{
	if (true == flag)
	{
		ui.autoStartBox->setCheckState(Qt::CheckState::Checked);
		emit SigAutoStartClicked(true);
	}
	else
	{
		ui.autoStartBox->setCheckState(Qt::CheckState::Unchecked);
		emit SigAutoStartClicked(false);

	}
}

void SystemSettingWidget::OnSigChangeExitOrTrayStatus(bool flag)
{
	// 设置那个控件被选中
	if (false == flag ) {
		ui.exitBtn->setChecked(true);
		ui.trayBtn->setChecked(false);
	}
	else
	{
		ui.exitBtn->setChecked(false);
		ui.trayBtn->setChecked(true);

	}
}


void SystemSettingWidget::OnClose()
{
	close();
}

