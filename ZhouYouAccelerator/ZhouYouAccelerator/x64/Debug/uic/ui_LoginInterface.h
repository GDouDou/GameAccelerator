/********************************************************************************
** Form generated from reading UI file 'LoginInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININTERFACE_H
#define UI_LOGININTERFACE_H

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

class Ui_LoginInterface
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widPhone;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *phoneLbl;
    QLabel *lbl86;
    QLineEdit *phoneEdt;
    QWidget *widVerify;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *verifyLbl;
    QLineEdit *verifyEdt;
    QPushButton *verifyBtn;
    QPushButton *loginBtn;

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QStringLiteral("LoginInterface"));
        LoginInterface->resize(480, 640);
        LoginInterface->setMinimumSize(QSize(480, 640));
        LoginInterface->setMaximumSize(QSize(480, 640));
        gridLayout_3 = new QGridLayout(LoginInterface);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 13, -1, 100);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeBtn = new QPushButton(LoginInterface);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(26, 26));
        closeBtn->setMaximumSize(QSize(26, 26));

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(57);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(18);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton = new QPushButton(LoginInterface);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(91, 91));
        pushButton->setMaximumSize(QSize(91, 91));

        horizontalLayout_6->addWidget(pushButton);

        label = new QLabel(LoginInterface);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(27);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_6->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(22);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widPhone = new QWidget(LoginInterface);
        widPhone->setObjectName(QStringLiteral("widPhone"));
        sizePolicy.setHeightForWidth(widPhone->sizePolicy().hasHeightForWidth());
        widPhone->setSizePolicy(sizePolicy);
        widPhone->setMinimumSize(QSize(447, 73));
        widPhone->setMaximumSize(QSize(447, 73));
        gridLayout = new QGridLayout(widPhone);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        phoneLbl = new QLabel(widPhone);
        phoneLbl->setObjectName(QStringLiteral("phoneLbl"));
        phoneLbl->setMinimumSize(QSize(28, 32));
        phoneLbl->setMaximumSize(QSize(28, 32));
        phoneLbl->setFont(font);
        phoneLbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(phoneLbl);

        lbl86 = new QLabel(widPhone);
        lbl86->setObjectName(QStringLiteral("lbl86"));
        lbl86->setFont(font);
        lbl86->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbl86);


        horizontalLayout_3->addLayout(horizontalLayout);

        phoneEdt = new QLineEdit(widPhone);
        phoneEdt->setObjectName(QStringLiteral("phoneEdt"));
        sizePolicy.setHeightForWidth(phoneEdt->sizePolicy().hasHeightForWidth());
        phoneEdt->setSizePolicy(sizePolicy);
        phoneEdt->setMinimumSize(QSize(0, 73));
        phoneEdt->setMaximumSize(QSize(16777215, 16777215));
        phoneEdt->setFont(font);

        horizontalLayout_3->addWidget(phoneEdt);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        verticalLayout->addWidget(widPhone);

        widVerify = new QWidget(LoginInterface);
        widVerify->setObjectName(QStringLiteral("widVerify"));
        sizePolicy.setHeightForWidth(widVerify->sizePolicy().hasHeightForWidth());
        widVerify->setSizePolicy(sizePolicy);
        widVerify->setMinimumSize(QSize(447, 73));
        widVerify->setMaximumSize(QSize(447, 73));
        gridLayout_2 = new QGridLayout(widVerify);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verifyLbl = new QLabel(widVerify);
        verifyLbl->setObjectName(QStringLiteral("verifyLbl"));
        verifyLbl->setMinimumSize(QSize(28, 32));
        verifyLbl->setMaximumSize(QSize(28, 32));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setBold(false);
        font1.setWeight(50);
        verifyLbl->setFont(font1);

        horizontalLayout_4->addWidget(verifyLbl);

        verifyEdt = new QLineEdit(widVerify);
        verifyEdt->setObjectName(QStringLiteral("verifyEdt"));
        sizePolicy.setHeightForWidth(verifyEdt->sizePolicy().hasHeightForWidth());
        verifyEdt->setSizePolicy(sizePolicy);
        verifyEdt->setMinimumSize(QSize(0, 73));
        verifyEdt->setMaximumSize(QSize(16777215, 73));
        verifyEdt->setFont(font);
        verifyEdt->setFrame(false);

        horizontalLayout_4->addWidget(verifyEdt);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        verifyBtn = new QPushButton(widVerify);
        verifyBtn->setObjectName(QStringLiteral("verifyBtn"));
        verifyBtn->setMinimumSize(QSize(0, 73));
        verifyBtn->setMaximumSize(QSize(16777215, 73));
        verifyBtn->setFont(font);

        horizontalLayout_5->addWidget(verifyBtn);


        gridLayout_2->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        verticalLayout->addWidget(widVerify);


        verticalLayout_2->addLayout(verticalLayout);

        loginBtn = new QPushButton(LoginInterface);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        sizePolicy.setHeightForWidth(loginBtn->sizePolicy().hasHeightForWidth());
        loginBtn->setSizePolicy(sizePolicy);
        loginBtn->setMinimumSize(QSize(447, 69));
        loginBtn->setFont(font);

        verticalLayout_2->addWidget(loginBtn);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);


        gridLayout_3->addLayout(verticalLayout_5, 0, 0, 1, 1);

        QWidget::setTabOrder(phoneEdt, verifyBtn);
        QWidget::setTabOrder(verifyBtn, loginBtn);
        QWidget::setTabOrder(loginBtn, closeBtn);
        QWidget::setTabOrder(closeBtn, pushButton);

        retranslateUi(LoginInterface);

        QMetaObject::connectSlotsByName(LoginInterface);
    } // setupUi

    void retranslateUi(QWidget *LoginInterface)
    {
        LoginInterface->setWindowTitle(QApplication::translate("LoginInterface", "LoginInterface", Q_NULLPTR));
        closeBtn->setText(QString());
        pushButton->setText(QApplication::translate("LoginInterface", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("LoginInterface", "\347\231\273\345\275\225", Q_NULLPTR));
        phoneLbl->setText(QString());
        lbl86->setText(QApplication::translate("LoginInterface", "+86", Q_NULLPTR));
        phoneEdt->setText(QString());
        phoneEdt->setPlaceholderText(QApplication::translate("LoginInterface", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        verifyLbl->setText(QString());
        verifyEdt->setPlaceholderText(QApplication::translate("LoginInterface", "\350\257\267\350\276\223\345\205\245\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        verifyBtn->setText(QApplication::translate("LoginInterface", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("LoginInterface", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
