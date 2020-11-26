#include "StationInformationWidget.h"

StationInformationWidget::StationInformationWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
	setWindowTitle(QString::fromLocal8Bit("站内信"));
	//隐藏或者删除QT窗体自带的标题栏 https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//设置反馈背景色
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// 设置listView 视图模式
	ui.listView->setViewMode(QListView::ListMode);	 
	ui.listView->setEditTriggers(QAbstractItemView::NoEditTriggers); // 不可编辑
	QFont list_font;
	list_font.setPointSize(24);
	list_font.setBold(true);
	//list_font.setWeight(50);
	ui.listView->setFont(list_font); // 设置字体
	ui.listView->setStyleSheet("background-color: rgb(86, 141, 251);border: none;color:#FFFFFF;"); // 设置背景色

	//QStandardItem *item = new QStandardItem("item1");
	//mStationListViewMod.appendRow(item);
	//item = new QStandardItem("item2");
	//mStationListViewMod.appendRow(item);
	//ui.listView->setModel(&mStationListViewMod);
	AddItemOnListView("123", QIcon(""));
	AddItemOnListView("aaa", QIcon(""));
	// 关闭控件添加图片
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));
	// 标记已读控件添加图片
	ui.tagRead->setIcon(QIcon(":/Resources/tagRead.png"));
	ui.tagRead->setStyleSheet("background-color: rgb(86, 141, 251);border: none;color:#FFFFFF;");



	connect(ui.closeBtn, &QPushButton::clicked, this, &StationInformationWidget::OnClose);
	connect(ui.tagRead, &QPushButton::clicked, this, &StationInformationWidget::OnTagRead);
	connect(ui.listView, &QListView::doubleClicked, this, &StationInformationWidget::OnDoubleClicked);


}

StationInformationWidget::~StationInformationWidget()
{
}

void StationInformationWidget::OnStationInfo()
{
	/*
		从服务器拉取数据，显示数据并显示界面
	
	*/

	show();
}

void StationInformationWidget::OnClose()
{
	close();
}

void StationInformationWidget::OnTagRead()
{
	QMessageBox::information(this, "info", QString::fromLocal8Bit("标记已读按钮被点击逻辑待完善！"));

}

void StationInformationWidget::OnDoubleClicked(const QModelIndex &index)
{
	/*
	从服务器拉取数据，在新界面中弹出数据

	*/
	QMessageBox::information(this, "info", QString::fromLocal8Bit("QModelIndex 被选中!"));
	mStationDetailsInfomationWid.ShowDetailsInfomation(QString::fromLocal8Bit("标题1"), QString::fromLocal8Bit("内容空"));
	mStationDetailsInfomationWid.show();

}

void StationInformationWidget::AddItemOnListView(const QString &strText, const QIcon & icon)
{
	QStandardItem *item = new QStandardItem(strText);
	mStationListViewMod.appendRow(item);
	ui.listView->setModel(&mStationListViewMod);
}