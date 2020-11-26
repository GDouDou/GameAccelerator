/********************************************************************************
** Form generated from reading UI file 'ZhouYouAccelerator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHOUYOUACCELERATOR_H
#define UI_ZHOUYOUACCELERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZhouYouAcceleratorClass
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_14;
    QWidget *leftWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *mainUserVLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *headPicBtn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mainLoginBtn;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *mainAddGameLbl;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mainAddGameBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mainMyJQLbl;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mainMyJSBtn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QPushButton *mainVIPBtn;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *feedBack;
    QPushButton *feedBackBtn;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *searchEdt;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *stationInfo;
    QPushButton *settingBtn;
    QPushButton *pushButton_15;
    QPushButton *mainCloseBtn;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ZhouYouAcceleratorClass)
    {
        if (ZhouYouAcceleratorClass->objectName().isEmpty())
            ZhouYouAcceleratorClass->setObjectName(QStringLiteral("ZhouYouAcceleratorClass"));
        ZhouYouAcceleratorClass->resize(960, 638);
        ZhouYouAcceleratorClass->setMinimumSize(QSize(960, 540));
        ZhouYouAcceleratorClass->setMaximumSize(QSize(960, 640));
        gridLayout_2 = new QGridLayout(ZhouYouAcceleratorClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 9, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        leftWidget = new QWidget(ZhouYouAcceleratorClass);
        leftWidget->setObjectName(QStringLiteral("leftWidget"));
        leftWidget->setMinimumSize(QSize(380, 0));
        gridLayout = new QGridLayout(leftWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mainUserVLayout = new QVBoxLayout();
        mainUserVLayout->setSpacing(6);
        mainUserVLayout->setObjectName(QStringLiteral("mainUserVLayout"));
        mainUserVLayout->setContentsMargins(0, 49, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        headPicBtn = new QPushButton(leftWidget);
        headPicBtn->setObjectName(QStringLiteral("headPicBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(headPicBtn->sizePolicy().hasHeightForWidth());
        headPicBtn->setSizePolicy(sizePolicy);
        headPicBtn->setMinimumSize(QSize(168, 168));
        headPicBtn->setMaximumSize(QSize(168, 168));

        horizontalLayout_5->addWidget(headPicBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        mainUserVLayout->addLayout(horizontalLayout_5);

        mainLoginBtn = new QPushButton(leftWidget);
        mainLoginBtn->setObjectName(QStringLiteral("mainLoginBtn"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        mainLoginBtn->setFont(font);

        mainUserVLayout->addWidget(mainLoginBtn);


        verticalLayout_5->addLayout(mainUserVLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(42, -1, -1, -1);
        mainAddGameLbl = new QLabel(leftWidget);
        mainAddGameLbl->setObjectName(QStringLiteral("mainAddGameLbl"));
        mainAddGameLbl->setMinimumSize(QSize(56, 44));
        mainAddGameLbl->setMaximumSize(QSize(56, 44));
        mainAddGameLbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(mainAddGameLbl);

        horizontalSpacer_2 = new QSpacerItem(44, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mainAddGameBtn = new QPushButton(leftWidget);
        mainAddGameBtn->setObjectName(QStringLiteral("mainAddGameBtn"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(34);
        font1.setBold(true);
        font1.setWeight(75);
        mainAddGameBtn->setFont(font1);

        horizontalLayout->addWidget(mainAddGameBtn);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(42, -1, -1, -1);
        mainMyJQLbl = new QLabel(leftWidget);
        mainMyJQLbl->setObjectName(QStringLiteral("mainMyJQLbl"));
        mainMyJQLbl->setMinimumSize(QSize(56, 44));
        mainMyJQLbl->setMaximumSize(QSize(56, 44));
        mainMyJQLbl->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(mainMyJQLbl);

        horizontalSpacer_3 = new QSpacerItem(44, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        mainMyJSBtn = new QPushButton(leftWidget);
        mainMyJSBtn->setObjectName(QStringLiteral("mainMyJSBtn"));
        mainMyJSBtn->setFont(font1);

        horizontalLayout_2->addWidget(mainMyJSBtn);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(leftWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(28, 24));
        label_4->setMaximumSize(QSize(28, 24));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        mainVIPBtn = new QPushButton(leftWidget);
        mainVIPBtn->setObjectName(QStringLiteral("mainVIPBtn"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(19);
        font2.setBold(true);
        font2.setWeight(75);
        mainVIPBtn->setFont(font2);

        horizontalLayout_3->addWidget(mainVIPBtn);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        feedBack = new QLabel(leftWidget);
        feedBack->setObjectName(QStringLiteral("feedBack"));
        feedBack->setMinimumSize(QSize(28, 14));
        feedBack->setMaximumSize(QSize(28, 24));
        feedBack->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(feedBack);

        feedBackBtn = new QPushButton(leftWidget);
        feedBackBtn->setObjectName(QStringLiteral("feedBackBtn"));
        feedBackBtn->setFont(font2);

        horizontalLayout_10->addWidget(feedBackBtn);


        horizontalLayout_4->addLayout(horizontalLayout_10);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        horizontalLayout_14->addWidget(leftWidget);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        searchEdt = new QLineEdit(ZhouYouAcceleratorClass);
        searchEdt->setObjectName(QStringLiteral("searchEdt"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchEdt->sizePolicy().hasHeightForWidth());
        searchEdt->setSizePolicy(sizePolicy1);
        searchEdt->setMinimumSize(QSize(0, 32));

        verticalLayout_4->addWidget(searchEdt);


        horizontalLayout_13->addLayout(verticalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        stationInfo = new QPushButton(ZhouYouAcceleratorClass);
        stationInfo->setObjectName(QStringLiteral("stationInfo"));
        stationInfo->setMinimumSize(QSize(41, 41));

        horizontalLayout_11->addWidget(stationInfo);

        settingBtn = new QPushButton(ZhouYouAcceleratorClass);
        settingBtn->setObjectName(QStringLiteral("settingBtn"));
        settingBtn->setMinimumSize(QSize(41, 41));

        horizontalLayout_11->addWidget(settingBtn);

        pushButton_15 = new QPushButton(ZhouYouAcceleratorClass);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        horizontalLayout_11->addWidget(pushButton_15);

        mainCloseBtn = new QPushButton(ZhouYouAcceleratorClass);
        mainCloseBtn->setObjectName(QStringLiteral("mainCloseBtn"));

        horizontalLayout_11->addWidget(mainCloseBtn);


        horizontalLayout_13->addLayout(horizontalLayout_11);


        verticalLayout_7->addLayout(horizontalLayout_13);

        tableWidget = new QTableWidget(ZhouYouAcceleratorClass);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_7->addWidget(tableWidget);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 9);

        horizontalLayout_14->addLayout(verticalLayout_7);

        horizontalLayout_14->setStretch(1, 9);

        gridLayout_2->addLayout(horizontalLayout_14, 0, 0, 1, 1);


        retranslateUi(ZhouYouAcceleratorClass);

        QMetaObject::connectSlotsByName(ZhouYouAcceleratorClass);
    } // setupUi

    void retranslateUi(QWidget *ZhouYouAcceleratorClass)
    {
        ZhouYouAcceleratorClass->setWindowTitle(QApplication::translate("ZhouYouAcceleratorClass", "ZhouYouAccelerator", Q_NULLPTR));
        headPicBtn->setText(QApplication::translate("ZhouYouAcceleratorClass", "\345\244\264\345\203\217", Q_NULLPTR));
        mainLoginBtn->setText(QApplication::translate("ZhouYouAcceleratorClass", "\347\231\273\345\275\225", Q_NULLPTR));
        mainAddGameLbl->setText(QString());
        mainAddGameBtn->setText(QApplication::translate("ZhouYouAcceleratorClass", "\346\267\273\345\212\240\346\270\270\346\210\217", Q_NULLPTR));
        mainMyJQLbl->setText(QString());
        mainMyJSBtn->setText(QApplication::translate("ZhouYouAcceleratorClass", "\346\210\221\347\232\204\345\212\240\351\200\237", Q_NULLPTR));
        label_4->setText(QApplication::translate("ZhouYouAcceleratorClass", "\345\244\264\345\203\217", Q_NULLPTR));
        mainVIPBtn->setText(QApplication::translate("ZhouYouAcceleratorClass", "\344\274\232\345\221\230\345\205\205\345\200\274", Q_NULLPTR));
        feedBack->setText(QString());
        feedBackBtn->setText(QApplication::translate("ZhouYouAcceleratorClass", "\345\217\215\351\246\210", Q_NULLPTR));
        searchEdt->setText(QString());
        searchEdt->setPlaceholderText(QApplication::translate("ZhouYouAcceleratorClass", "\346\220\234\347\264\242", Q_NULLPTR));
        stationInfo->setText(QString());
        settingBtn->setText(QString());
        pushButton_15->setText(QApplication::translate("ZhouYouAcceleratorClass", "\346\234\200\345\260\217\345\214\226", Q_NULLPTR));
        mainCloseBtn->setText(QApplication::translate("ZhouYouAcceleratorClass", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZhouYouAcceleratorClass: public Ui_ZhouYouAcceleratorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHOUYOUACCELERATOR_H
