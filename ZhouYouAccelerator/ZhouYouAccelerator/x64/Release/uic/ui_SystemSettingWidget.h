/********************************************************************************
** Form generated from reading UI file 'SystemSettingWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSETTINGWIDGET_H
#define UI_SYSTEMSETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemSettingWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QCheckBox *autoStartBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *trayBtn;
    QRadioButton *exitBtn;

    void setupUi(QWidget *SystemSettingWidget)
    {
        if (SystemSettingWidget->objectName().isEmpty())
            SystemSettingWidget->setObjectName(QStringLiteral("SystemSettingWidget"));
        SystemSettingWidget->resize(975, 382);
        SystemSettingWidget->setMinimumSize(QSize(975, 382));
        SystemSettingWidget->setMaximumSize(QSize(975, 382));
        gridLayout = new QGridLayout(SystemSettingWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        closeBtn = new QPushButton(SystemSettingWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(26, 26));
        closeBtn->setMaximumSize(QSize(26, 26));

        horizontalLayout_4->addWidget(closeBtn);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label = new QLabel(SystemSettingWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(178, 178));
        label->setMaximumSize(QSize(178, 178));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(SystemSettingWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        autoStartBox = new QCheckBox(SystemSettingWidget);
        autoStartBox->setObjectName(QStringLiteral("autoStartBox"));
        autoStartBox->setFont(font);
        autoStartBox->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(autoStartBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(SystemSettingWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        trayBtn = new QRadioButton(SystemSettingWidget);
        trayBtn->setObjectName(QStringLiteral("trayBtn"));
        trayBtn->setFont(font);

        horizontalLayout_2->addWidget(trayBtn);

        exitBtn = new QRadioButton(SystemSettingWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setSizeIncrement(QSize(0, 0));
        exitBtn->setFont(font);

        horizontalLayout_2->addWidget(exitBtn);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        QWidget::setTabOrder(autoStartBox, trayBtn);
        QWidget::setTabOrder(trayBtn, exitBtn);
        QWidget::setTabOrder(exitBtn, closeBtn);

        retranslateUi(SystemSettingWidget);

        QMetaObject::connectSlotsByName(SystemSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *SystemSettingWidget)
    {
        SystemSettingWidget->setWindowTitle(QApplication::translate("SystemSettingWidget", "SystemSettingWidget", Q_NULLPTR));
        closeBtn->setText(QString());
        label->setText(QApplication::translate("SystemSettingWidget", "LOGO", Q_NULLPTR));
        label_2->setText(QApplication::translate("SystemSettingWidget", "\345\220\257\345\212\250\350\256\276\347\275\256", Q_NULLPTR));
        autoStartBox->setText(QApplication::translate("SystemSettingWidget", "\345\274\200\346\234\272\350\207\252\345\212\250\345\220\257\345\212\250\345\221\250\346\270\270\345\212\240\351\200\237\345\231\250", Q_NULLPTR));
        label_3->setText(QApplication::translate("SystemSettingWidget", "\347\202\271\345\207\273\345\205\263\351\227\255\346\227\266", Q_NULLPTR));
        trayBtn->setText(QApplication::translate("SystemSettingWidget", "\346\234\200\345\260\217\345\214\226\345\210\260\346\211\230\347\233\230", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("SystemSettingWidget", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SystemSettingWidget: public Ui_SystemSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSETTINGWIDGET_H
