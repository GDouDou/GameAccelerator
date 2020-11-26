#include "StationInformationWidget.h"

StationInformationWidget::StationInformationWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
	setWindowTitle(QString::fromLocal8Bit("վ����"));
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//���÷�������ɫ
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// ����listView ��ͼģʽ
	ui.listView->setViewMode(QListView::ListMode);	 
	ui.listView->setEditTriggers(QAbstractItemView::NoEditTriggers); // ���ɱ༭
	QFont list_font;
	list_font.setPointSize(24);
	list_font.setBold(true);
	//list_font.setWeight(50);
	ui.listView->setFont(list_font); // ��������
	ui.listView->setStyleSheet("background-color: rgb(86, 141, 251);border: none;color:#FFFFFF;"); // ���ñ���ɫ

	//QStandardItem *item = new QStandardItem("item1");
	//mStationListViewMod.appendRow(item);
	//item = new QStandardItem("item2");
	//mStationListViewMod.appendRow(item);
	//ui.listView->setModel(&mStationListViewMod);
	AddItemOnListView("123", QIcon(""));
	AddItemOnListView("aaa", QIcon(""));
	// �رտؼ����ͼƬ
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));
	// ����Ѷ��ؼ����ͼƬ
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
		�ӷ�������ȡ���ݣ���ʾ���ݲ���ʾ����
	
	*/

	show();
}

void StationInformationWidget::OnClose()
{
	close();
}

void StationInformationWidget::OnTagRead()
{
	QMessageBox::information(this, "info", QString::fromLocal8Bit("����Ѷ���ť������߼������ƣ�"));

}

void StationInformationWidget::OnDoubleClicked(const QModelIndex &index)
{
	/*
	�ӷ�������ȡ���ݣ����½����е�������

	*/
	QMessageBox::information(this, "info", QString::fromLocal8Bit("QModelIndex ��ѡ��!"));
	mStationDetailsInfomationWid.ShowDetailsInfomation(QString::fromLocal8Bit("����1"), QString::fromLocal8Bit("���ݿ�"));
	mStationDetailsInfomationWid.show();

}

void StationInformationWidget::AddItemOnListView(const QString &strText, const QIcon & icon)
{
	QStandardItem *item = new QStandardItem(strText);
	mStationListViewMod.appendRow(item);
	ui.listView->setModel(&mStationListViewMod);
}