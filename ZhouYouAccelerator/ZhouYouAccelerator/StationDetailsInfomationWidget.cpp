#include "StationDetailsInfomationWidget.h"

StationDetailsInfomationWidget::StationDetailsInfomationWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	setWindowTitle(QString::fromLocal8Bit("վ������ϸ��Ϣ"));
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//���÷�������ɫ
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// �رտؼ����ͼƬ
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));
	// ����ؼ���Ϣ	
	ui.titleBtn->setIcon(QIcon(":/Resources/tagRead.png"));
	ui.titleBtn->setStyleSheet("background-color: rgb(86, 141, 251);border: none;color:#FFD54B;");
	// ��������ҳ����ɫ��������ɫ
	ui.textEdit->setStyleSheet("background-color: #A4C2FF;border-radius:10px;color:#FFFFFF;");

	connect(ui.closeBtn, &QPushButton::clicked, this, &StationDetailsInfomationWidget::OnClose);

}

StationDetailsInfomationWidget::~StationDetailsInfomationWidget()
{
}

void StationDetailsInfomationWidget::ShowDetailsInfomation(const QString &textTilte, const QString &text)
{
	/*
		����Ϣ��䵽�����ϣ�Ȼ����ʾ
	*/
	ui.titleBtn->setText(textTilte);
	ui.textEdit->setText(text);
	show();
}

void StationDetailsInfomationWidget::OnClose()
{
	close();
}