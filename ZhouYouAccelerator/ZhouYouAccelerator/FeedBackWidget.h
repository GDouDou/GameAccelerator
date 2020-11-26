#pragma once

#include <QWidget>
#include "ui_FeedBackWidget.h"
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QListView>
#include <QListWidgetItem>
#include <QIcon>
#include <QFileDialog>
#include <QVector>

#include "InterfaceAPI.h"

class FeedBackWidget : public QWidget
{
	Q_OBJECT

public:
	FeedBackWidget(QWidget *parent = Q_NULLPTR);
	~FeedBackWidget();
public slots:
void FeedBackBtnClicked();
void SubmitBtnClicked();
void OnCurrentRowChanged(int row);
void OnClose();
private:
	Ui::FeedBackWidget ui;
};
