#include "SystemSettingWidget.h"

SystemSettingWidget::SystemSettingWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);

	//����ϵͳ���ñ���ɫ
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// �رտؼ����ͼƬ
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));
	// ʵ�ָ�ѡ��Ĵ�С������֮����Ч��ʧ��
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
		QMessageBox::warning(this, "warning", QString::fromLocal8Bit("ϵͳ���������ļ���ʧ��!"));
		return;
	}

	//QMessageBox::information(NULL, "info", QString::fromLocal8Bit("��������������δʵ�֣�"));
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
	// �����Ǹ��ؼ���ѡ��
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

