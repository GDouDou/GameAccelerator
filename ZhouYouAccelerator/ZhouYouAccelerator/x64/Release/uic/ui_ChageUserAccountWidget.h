/********************************************************************************
** Form generated from reading UI file 'ChageUserAccountWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAGEUSERACCOUNTWIDGET_H
#define UI_CHAGEUSERACCOUNTWIDGET_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChageUserAccountWidget
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeBtn;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *verifySrcphoneLbl;
    QLabel *telPhoneLbl;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *oldVerifyEdt;
    QPushButton *oldVerifyBtn;
    QVBoxLayout *verticalLayout_3;
    QLabel *verifyDstPhoneLbl;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *lbl86;
    QLineEdit *newPhoneEdt;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *newVerifyEdt;
    QPushButton *newVerifyBtn;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *OKBtn;

    void setupUi(QWidget *ChageUserAccountWidget)
    {
        if (ChageUserAccountWidget->objectName().isEmpty())
            ChageUserAccountWidget->setObjectName(QStringLiteral("ChageUserAccountWidget"));
        ChageUserAccountWidget->resize(480, 640);
        ChageUserAccountWidget->setMinimumSize(QSize(480, 640));
        ChageUserAccountWidget->setMaximumSize(QSize(480, 640));
        gridLayout_4 = new QGridLayout(ChageUserAccountWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(90);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(10, -1, 10, 100);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 13, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        closeBtn = new QPushButton(ChageUserAccountWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout_6->addWidget(closeBtn);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(17);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(17);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verifySrcphoneLbl = new QLabel(ChageUserAccountWidget);
        verifySrcphoneLbl->setObjectName(QStringLiteral("verifySrcphoneLbl"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(26);
        verifySrcphoneLbl->setFont(font);

        horizontalLayout->addWidget(verifySrcphoneLbl);

        telPhoneLbl = new QLabel(ChageUserAccountWidget);
        telPhoneLbl->setObjectName(QStringLiteral("telPhoneLbl"));
        telPhoneLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(telPhoneLbl);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(31);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget = new QWidget(ChageUserAccountWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(30, 34));
        label_3->setMaximumSize(QSize(30, 34));

        horizontalLayout_2->addWidget(label_3);

        oldVerifyEdt = new QLineEdit(widget);
        oldVerifyEdt->setObjectName(QStringLiteral("oldVerifyEdt"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(oldVerifyEdt->sizePolicy().hasHeightForWidth());
        oldVerifyEdt->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setWeight(50);
        oldVerifyEdt->setFont(font1);
        oldVerifyEdt->setFrame(false);

        horizontalLayout_2->addWidget(oldVerifyEdt);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        oldVerifyBtn = new QPushButton(widget);
        oldVerifyBtn->setObjectName(QStringLiteral("oldVerifyBtn"));
        sizePolicy.setHeightForWidth(oldVerifyBtn->sizePolicy().hasHeightForWidth());
        oldVerifyBtn->setSizePolicy(sizePolicy);
        oldVerifyBtn->setFont(font);

        horizontalLayout_7->addWidget(oldVerifyBtn);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        verticalLayout_4->addWidget(widget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(17);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verifyDstPhoneLbl = new QLabel(ChageUserAccountWidget);
        verifyDstPhoneLbl->setObjectName(QStringLiteral("verifyDstPhoneLbl"));
        verifyDstPhoneLbl->setFont(font);

        verticalLayout_3->addWidget(verifyDstPhoneLbl);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_2 = new QWidget(ChageUserAccountWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(1);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(30, 34));
        label_5->setMaximumSize(QSize(30, 34));

        horizontalLayout_3->addWidget(label_5);

        lbl86 = new QLabel(widget_2);
        lbl86->setObjectName(QStringLiteral("lbl86"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(24);
        lbl86->setFont(font2);

        horizontalLayout_3->addWidget(lbl86);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        newPhoneEdt = new QLineEdit(widget_2);
        newPhoneEdt->setObjectName(QStringLiteral("newPhoneEdt"));
        newPhoneEdt->setFont(font);
        newPhoneEdt->setFrame(false);

        horizontalLayout_8->addWidget(newPhoneEdt);


        gridLayout_2->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(38);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_3 = new QWidget(ChageUserAccountWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(1);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(30, 34));
        label_7->setMaximumSize(QSize(30, 34));

        horizontalLayout_4->addWidget(label_7);

        newVerifyEdt = new QLineEdit(widget_3);
        newVerifyEdt->setObjectName(QStringLiteral("newVerifyEdt"));
        newVerifyEdt->setFont(font2);
        newVerifyEdt->setFrame(false);

        horizontalLayout_4->addWidget(newVerifyEdt);


        horizontalLayout_9->addLayout(horizontalLayout_4);

        newVerifyBtn = new QPushButton(widget_3);
        newVerifyBtn->setObjectName(QStringLiteral("newVerifyBtn"));
        sizePolicy.setHeightForWidth(newVerifyBtn->sizePolicy().hasHeightForWidth());
        newVerifyBtn->setSizePolicy(sizePolicy);
        newVerifyBtn->setFont(font2);

        horizontalLayout_9->addWidget(newVerifyBtn);


        gridLayout_3->addLayout(horizontalLayout_9, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        cancelBtn = new QPushButton(ChageUserAccountWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 0));
        cancelBtn->setMaximumSize(QSize(120, 16777215));
        cancelBtn->setFont(font2);

        horizontalLayout_5->addWidget(cancelBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        OKBtn = new QPushButton(ChageUserAccountWidget);
        OKBtn->setObjectName(QStringLiteral("OKBtn"));
        OKBtn->setMinimumSize(QSize(120, 0));
        OKBtn->setMaximumSize(QSize(120, 16777215));
        OKBtn->setFont(font2);

        horizontalLayout_5->addWidget(OKBtn);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);


        gridLayout_4->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(ChageUserAccountWidget);

        oldVerifyBtn->setDefault(false);
        newVerifyBtn->setDefault(false);


        QMetaObject::connectSlotsByName(ChageUserAccountWidget);
    } // setupUi

    void retranslateUi(QWidget *ChageUserAccountWidget)
    {
        ChageUserAccountWidget->setWindowTitle(QApplication::translate("ChageUserAccountWidget", "ChageUserAccountWidget", Q_NULLPTR));
        closeBtn->setText(QString());
        verifySrcphoneLbl->setText(QApplication::translate("ChageUserAccountWidget", "\351\252\214\350\257\201\345\216\237\347\273\221\345\256\232\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        telPhoneLbl->setText(QApplication::translate("ChageUserAccountWidget", "152****0000", Q_NULLPTR));
        label_3->setText(QString());
        oldVerifyEdt->setPlaceholderText(QApplication::translate("ChageUserAccountWidget", "\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        oldVerifyBtn->setText(QApplication::translate("ChageUserAccountWidget", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        verifyDstPhoneLbl->setText(QApplication::translate("ChageUserAccountWidget", "\347\273\221\345\256\232\346\226\260\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_5->setText(QString());
        lbl86->setText(QApplication::translate("ChageUserAccountWidget", "+86", Q_NULLPTR));
        newPhoneEdt->setPlaceholderText(QApplication::translate("ChageUserAccountWidget", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_7->setText(QString());
        newVerifyEdt->setPlaceholderText(QApplication::translate("ChageUserAccountWidget", "\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        newVerifyBtn->setText(QApplication::translate("ChageUserAccountWidget", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("ChageUserAccountWidget", "\345\217\226\346\266\210", Q_NULLPTR));
        OKBtn->setText(QApplication::translate("ChageUserAccountWidget", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChageUserAccountWidget: public Ui_ChageUserAccountWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAGEUSERACCOUNTWIDGET_H
