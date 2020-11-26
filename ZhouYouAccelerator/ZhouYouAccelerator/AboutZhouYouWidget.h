#pragma once

#include <QWidget>
#include "ui_AboutZhouYouWidget.h"
#include <QColor>
#include <QDesktopServices>
#include <QUrl>
#include <QTextEdit>
#include <QMessageBox>

class AboutZhouYouWidget : public QWidget
{
	Q_OBJECT
public:
	QWidget mUserAgreementWid;

public:
	AboutZhouYouWidget(QWidget *parent = Q_NULLPTR);
	~AboutZhouYouWidget();
	void Init();
	// ÐÅºÅ ²Û°ó¶¨
	void InitConnectSlots();
public slots:
	void OfficeWebsiteClicked();
	void UserAgreementClicked();
	void OnClose();
private:
	Ui::AboutZhouYouWidget ui;
};
