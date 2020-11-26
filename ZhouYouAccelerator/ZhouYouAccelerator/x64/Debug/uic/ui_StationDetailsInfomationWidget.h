/********************************************************************************
** Form generated from reading UI file 'StationDetailsInfomationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONDETAILSINFOMATIONWIDGET_H
#define UI_STATIONDETAILSINFOMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StationDetailsInfomationWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QVBoxLayout *verticalLayout;
    QPushButton *titleBtn;
    QTextEdit *textEdit;

    void setupUi(QWidget *StationDetailsInfomationWidget)
    {
        if (StationDetailsInfomationWidget->objectName().isEmpty())
            StationDetailsInfomationWidget->setObjectName(QStringLiteral("StationDetailsInfomationWidget"));
        StationDetailsInfomationWidget->resize(960, 540);
        StationDetailsInfomationWidget->setMinimumSize(QSize(960, 540));
        StationDetailsInfomationWidget->setMaximumSize(QSize(960, 540));
        gridLayout = new QGridLayout(StationDetailsInfomationWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 13, 13, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBtn = new QPushButton(StationDetailsInfomationWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(18, 18));
        closeBtn->setMaximumSize(QSize(18, 18));

        horizontalLayout->addWidget(closeBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(22);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(34, 70, 36, 20);
        titleBtn = new QPushButton(StationDetailsInfomationWidget);
        titleBtn->setObjectName(QStringLiteral("titleBtn"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(28);
        titleBtn->setFont(font);
        titleBtn->setIconSize(QSize(28, 28));

        verticalLayout->addWidget(titleBtn);

        textEdit = new QTextEdit(StationDetailsInfomationWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(18);
        textEdit->setFont(font1);

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(StationDetailsInfomationWidget);

        QMetaObject::connectSlotsByName(StationDetailsInfomationWidget);
    } // setupUi

    void retranslateUi(QWidget *StationDetailsInfomationWidget)
    {
        StationDetailsInfomationWidget->setWindowTitle(QApplication::translate("StationDetailsInfomationWidget", "StationDetailsInfomationWidget", Q_NULLPTR));
        closeBtn->setText(QString());
        titleBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StationDetailsInfomationWidget: public Ui_StationDetailsInfomationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONDETAILSINFOMATIONWIDGET_H
