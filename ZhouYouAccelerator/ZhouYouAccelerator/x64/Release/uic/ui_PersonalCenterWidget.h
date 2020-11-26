/********************************************************************************
** Form generated from reading UI file 'PersonalCenterWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALCENTERWIDGET_H
#define UI_PERSONALCENTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonalCenterWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeBtn;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *changeHeadPicBtn;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *userNameEdt;
    QHBoxLayout *horizontalLayout;
    QLineEdit *phoneEdt;
    QPushButton *changePhoneBtn;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *saveChangeBtn;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *PersonalCenterWidget)
    {
        if (PersonalCenterWidget->objectName().isEmpty())
            PersonalCenterWidget->setObjectName(QStringLiteral("PersonalCenterWidget"));
        PersonalCenterWidget->resize(480, 640);
        PersonalCenterWidget->setMinimumSize(QSize(480, 640));
        PersonalCenterWidget->setMaximumSize(QSize(480, 640));
        gridLayout = new QGridLayout(PersonalCenterWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 50);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        closeBtn = new QPushButton(PersonalCenterWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout_3->addWidget(closeBtn);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(37);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        changeHeadPicBtn = new QPushButton(PersonalCenterWidget);
        changeHeadPicBtn->setObjectName(QStringLiteral("changeHeadPicBtn"));
        changeHeadPicBtn->setMinimumSize(QSize(144, 144));
        changeHeadPicBtn->setMaximumSize(QSize(144, 144));

        horizontalLayout_2->addWidget(changeHeadPicBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(37);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(28);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        userNameEdt = new QLineEdit(PersonalCenterWidget);
        userNameEdt->setObjectName(QStringLiteral("userNameEdt"));
        userNameEdt->setMinimumSize(QSize(0, 61));
        userNameEdt->setMaximumSize(QSize(16661, 61));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        userNameEdt->setFont(font);

        verticalLayout->addWidget(userNameEdt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        phoneEdt = new QLineEdit(PersonalCenterWidget);
        phoneEdt->setObjectName(QStringLiteral("phoneEdt"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(phoneEdt->sizePolicy().hasHeightForWidth());
        phoneEdt->setSizePolicy(sizePolicy);
        phoneEdt->setMinimumSize(QSize(380, 61));
        phoneEdt->setMaximumSize(QSize(380, 61));
        phoneEdt->setFont(font);

        horizontalLayout->addWidget(phoneEdt);

        changePhoneBtn = new QPushButton(PersonalCenterWidget);
        changePhoneBtn->setObjectName(QStringLiteral("changePhoneBtn"));
        sizePolicy.setHeightForWidth(changePhoneBtn->sizePolicy().hasHeightForWidth());
        changePhoneBtn->setSizePolicy(sizePolicy);
        changePhoneBtn->setMinimumSize(QSize(0, 61));
        changePhoneBtn->setMaximumSize(QSize(16777215, 61));
        changePhoneBtn->setFont(font);

        horizontalLayout->addWidget(changePhoneBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        saveChangeBtn = new QPushButton(PersonalCenterWidget);
        saveChangeBtn->setObjectName(QStringLiteral("saveChangeBtn"));
        saveChangeBtn->setMinimumSize(QSize(163, 50));
        saveChangeBtn->setMaximumSize(QSize(163, 50));
        saveChangeBtn->setFont(font);

        horizontalLayout_4->addWidget(saveChangeBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 9);

        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(PersonalCenterWidget);

        QMetaObject::connectSlotsByName(PersonalCenterWidget);
    } // setupUi

    void retranslateUi(QWidget *PersonalCenterWidget)
    {
        PersonalCenterWidget->setWindowTitle(QApplication::translate("PersonalCenterWidget", "PersonalCenterWidget", Q_NULLPTR));
        closeBtn->setText(QString());
        changeHeadPicBtn->setText(QApplication::translate("PersonalCenterWidget", "\345\244\264\345\203\217", Q_NULLPTR));
        userNameEdt->setPlaceholderText(QApplication::translate("PersonalCenterWidget", "\346\230\265\347\247\260", Q_NULLPTR));
        phoneEdt->setPlaceholderText(QApplication::translate("PersonalCenterWidget", "152****0000", Q_NULLPTR));
        changePhoneBtn->setText(QApplication::translate("PersonalCenterWidget", "\346\233\264\346\215\242", Q_NULLPTR));
        saveChangeBtn->setText(QApplication::translate("PersonalCenterWidget", "\344\277\235\345\255\230\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PersonalCenterWidget: public Ui_PersonalCenterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALCENTERWIDGET_H
