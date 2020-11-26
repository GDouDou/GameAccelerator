/********************************************************************************
** Form generated from reading UI file 'AboutZhouYouWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTZHOUYOUWIDGET_H
#define UI_ABOUTZHOUYOUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutZhouYouWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *aboutJSQLal;
    QLabel *aboutVersionLbl;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *officeWebsiteBtn;
    QPushButton *userAgreementBtn;
    QLabel *label_4;

    void setupUi(QWidget *AboutZhouYouWidget)
    {
        if (AboutZhouYouWidget->objectName().isEmpty())
            AboutZhouYouWidget->setObjectName(QStringLiteral("AboutZhouYouWidget"));
        AboutZhouYouWidget->resize(476, 623);
        AboutZhouYouWidget->setMinimumSize(QSize(476, 623));
        AboutZhouYouWidget->setMaximumSize(QSize(476, 623));
        gridLayout = new QGridLayout(AboutZhouYouWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(50);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 25, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 10, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeBtn = new QPushButton(AboutZhouYouWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(26, 26));
        closeBtn->setMaximumSize(QSize(26, 26));

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label = new QLabel(AboutZhouYouWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(113, 113));
        label->setMaximumSize(QSize(113, 113));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(17);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        aboutJSQLal = new QLabel(AboutZhouYouWidget);
        aboutJSQLal->setObjectName(QStringLiteral("aboutJSQLal"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        aboutJSQLal->setFont(font);
        aboutJSQLal->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(aboutJSQLal);

        aboutVersionLbl = new QLabel(AboutZhouYouWidget);
        aboutVersionLbl->setObjectName(QStringLiteral("aboutVersionLbl"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        aboutVersionLbl->setFont(font1);
        aboutVersionLbl->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(aboutVersionLbl);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(26);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        officeWebsiteBtn = new QPushButton(AboutZhouYouWidget);
        officeWebsiteBtn->setObjectName(QStringLiteral("officeWebsiteBtn"));
        officeWebsiteBtn->setFont(font1);

        horizontalLayout->addWidget(officeWebsiteBtn);

        userAgreementBtn = new QPushButton(AboutZhouYouWidget);
        userAgreementBtn->setObjectName(QStringLiteral("userAgreementBtn"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(86, 141, 251, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(209, 225, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(147, 183, 253, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(43, 70, 125, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(57, 94, 167, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(170, 198, 253, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        userAgreementBtn->setPalette(palette);
        userAgreementBtn->setFont(font1);

        horizontalLayout->addWidget(userAgreementBtn);


        verticalLayout_4->addLayout(horizontalLayout);

        label_4 = new QLabel(AboutZhouYouWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(label_4);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5->setStretch(0, 3);
        verticalLayout_5->setStretch(1, 7);

        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(AboutZhouYouWidget);

        QMetaObject::connectSlotsByName(AboutZhouYouWidget);
    } // setupUi

    void retranslateUi(QWidget *AboutZhouYouWidget)
    {
        AboutZhouYouWidget->setWindowTitle(QApplication::translate("AboutZhouYouWidget", "AboutZhouYouWidget", Q_NULLPTR));
        closeBtn->setText(QString());
        label->setText(QApplication::translate("AboutZhouYouWidget", "logo", Q_NULLPTR));
        aboutJSQLal->setText(QApplication::translate("AboutZhouYouWidget", "\345\221\250\346\270\270\345\212\240\351\200\237\345\231\250", Q_NULLPTR));
        aboutVersionLbl->setText(QApplication::translate("AboutZhouYouWidget", "V1.0.0", Q_NULLPTR));
        officeWebsiteBtn->setText(QApplication::translate("AboutZhouYouWidget", "\345\256\230\346\226\271\347\275\221\347\253\231", Q_NULLPTR));
        userAgreementBtn->setText(QApplication::translate("AboutZhouYouWidget", "\347\224\250\346\210\267\345\215\217\350\256\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("AboutZhouYouWidget", "\345\222\214\350\257\240\350\203\272\347\276\216\346\234\211\351\231\220\345\205\254\345\217\270\347\211\210\346\235\203\346\211\200\346\234\211|\347\211\210\346\234\254\345\217\267|\347\211\210\346\235\203\346\234\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutZhouYouWidget: public Ui_AboutZhouYouWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTZHOUYOUWIDGET_H
