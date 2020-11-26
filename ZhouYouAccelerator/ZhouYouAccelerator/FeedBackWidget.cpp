#include "FeedBackWidget.h"

FeedBackWidget::FeedBackWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("�û�����"));
	//���ػ���ɾ��QT�����Դ��ı����� https://bbs.csdn.net/topics/390155423?utm_medium=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-discussion_topic-BlogCommendFromBaidu-1.add_param_isCf
	setWindowFlags(Qt::FramelessWindowHint);
	//���÷�������ɫ
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, QColor(86, 141, 251));
	this->setAutoFillBackground(true);
	this->setPalette(palette);

	// �رտؼ����ͼƬ
	ui.closeBtn->setIcon(QIcon(":/Resources/close.png"));
	//�豸textEdit ����ɫ
	ui.textEdit->setStyleSheet("background-color: #A4C2FF;border-top-left-radius:10px;border-top-right-radius:10px;color:#FFFFFF;");

	// ����ͼƬ��������ɫ
	ui.pictureLbl->setStyleSheet("background-color: #A4C2FF;border-bottom-left-radius:10px;color:#FFFFFF;");
	ui.listWidget->setStyleSheet("background-color: #A4C2FF;border-bottom-right-radius:10px;");
	ui.listWidget->setViewMode(QListView::IconMode);
	//ui.listWidget->setFlow(QListView::TopToBottom);//����ǹؼ���qt����demo��configdialog��������Ĭ���������  
	ui.listWidget->setFlow(QListView::LeftToRight);//����ǹؼ���qt����demo��configdialog��������Ĭ���������  
	QListWidgetItem *item = new QListWidgetItem(QIcon(":/Resources/add.png"), NULL);
	ui.listWidget->addItem(item);
	ui.listWidget->setIconSize(QSize(80,80)); // ����ͼƬ��С
	ui.listWidget->setLayoutMode(QListView::SinglePass); // ���õ�����ʾ

	// ��ϵ��ʽ����򱳾���ɫ
	
	ui.qqWeChatLbl->setStyleSheet("color:#FFFFFF;");
	ui.qqWeChatEdt->setStyleSheet("background-color: #A4C2FF;border-radius:5px;color:#FFFFFF;");

	// �����ύ�ؼ�����ɫ #FFD54B
	ui.submitBtn->setStyleSheet("background-color: #FFD54B;border-radius:8px;color:#FFFFFF;");

	connect(ui.listWidget, &QListWidget::currentRowChanged, this, &FeedBackWidget::OnCurrentRowChanged);
	connect(ui.submitBtn, &QPushButton::clicked, this, &FeedBackWidget::SubmitBtnClicked);
	connect(ui.closeBtn, &QPushButton::clicked, this, &FeedBackWidget::OnClose);

}

FeedBackWidget::~FeedBackWidget()
{
}

void FeedBackWidget::FeedBackBtnClicked()
{
	this->show();
	
}
void FeedBackWidget::SubmitBtnClicked()
{
	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("�˴���Ҫ����ύ�û������߼�"));
	//QString txt = ui.textEdit->toPlainText();

	//QVector<QIcon> vecIcon;
	//for (int nx = 0; nx < ui.listWidget->count(); nx++)
	//{
	//	vecIcon.append(ui.listWidget->item(nx)->icon());
	//}
	//QString qqWeXin = ui.qqWeChatEdt->text();


	//QString txt = ui.textEdit->toPlainText();
	//if (txt.trimmed().isEmpty())
	//{
	//	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("����������ʹ�ù���������������!"));
	//	return;
	//}
	//QString qqWeXin = ui.qqWeChatEdt->text();
	//if (qqWeXin.trimmed().isEmpty())
	//{
	//	QMessageBox::information(NULL, "info", QString::fromLocal8Bit("����д��ϵ��ʽ!"));
	//	return;
	//}

	// ��������ύ����
	// ʹ��QJsonObject��������ֵ�ԡ�
	QJsonObject jsonObject;
	jsonObject.insert("contact", "123");
	jsonObject.insert("description", "FanKui");
	jsonObject.insert("image", "");
	QJsonDocument jsonDoc;
	jsonDoc.setObject(jsonObject);

	qDebug() << "InterfaceAPI::get_instance().mHeadMap[""x-sid""] = " << InterfaceAPI::get_instance().mHeadMap["x-sid"];
	QByteArray bytes = InterfaceAPI::get_instance().Send_API(InterfaceAPI::get_instance().mUrlFeedback, InterfaceAPI::get_instance().mHeadMap["x-sid"], jsonDoc.toJson());

	// QByteArrayת����QJsonObject
	QJsonDocument documentSMS = QJsonDocument::fromJson(bytes);
	QJsonObject objectSMS = documentSMS.object();
	int code = objectSMS.value("code").toInt();
	QString ss = objectSMS.value("message").toString();
	if (false == InterfaceAPI::get_instance().VerfiyCodeAPI(code))
	{
		QMessageBox::information(this, "info", QString::fromLocal8Bit("��¼��==> ��ȡ���Žӿ���Ϣʧ��"));
		return ;
	}


}

void FeedBackWidget::OnCurrentRowChanged(int row)
{
	QListWidgetItem *item = ui.listWidget->item(row);

	//���ļ����е�ͼƬ�ļ�
	QString openFile = QFileDialog::getOpenFileName(this,
		"Please choose an image file",
		"",
		"Image Files(*.jpg *.png *.bmp *.pgm *.pbm);;All(*.*)");

	if (openFile != "")
	{
		// ��ѡ��ͼƬ���óɱ���ͼƬ
		item->setIcon(QIcon(openFile));//setPixmap(QPixmap::fromImage(image));
		if (ui.listWidget->count() != 5 && row == ui.listWidget->count()-1) {
			ui.listWidget->addItem(new QListWidgetItem(QIcon(":/Resources/add.png"), NULL));
		}
	}

}

void FeedBackWidget::OnClose()
{
	close();
}