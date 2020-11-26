#include "StationDetailsInfomationWidget.h"

StationDetailsInfomationWidget::StationDetailsInfomationWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	setWindowTitle(QString::fromLocal8Bit("站内信详细信息"));
	//隐藏或者删除QT窗体自带的标题栏 https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//设置反馈背景色
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// 关闭控件添加图片
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));
	// 标题控件信息	
	ui.titleBtn->setIcon(QIcon(":/Resources/tagRead.png"));
	ui.titleBtn->setStyleSheet("background-color: rgb(86, 141, 251);border: none;color:#FFD54B;");
	// 设置内容页背景色和字体颜色
	ui.textEdit->setStyleSheet("background-color: #A4C2FF;border-radius:10px;color:#FFFFFF;");

	connect(ui.closeBtn, &QPushButton::clicked, this, &StationDetailsInfomationWidget::OnClose);

}

StationDetailsInfomationWidget::~StationDetailsInfomationWidget()
{
}

void StationDetailsInfomationWidget::ShowDetailsInfomation(const QString &textTilte, const QString &text)
{
	/*
		将信息填充到界面上，然后显示
	*/
	ui.titleBtn->setText(textTilte);
	ui.textEdit->setText(text);
	show();
}

void StationDetailsInfomationWidget::OnClose()
{
	close();
}