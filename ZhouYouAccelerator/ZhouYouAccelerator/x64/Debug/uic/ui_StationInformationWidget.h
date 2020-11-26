/********************************************************************************
** Form generated from reading UI file 'StationInformationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONINFORMATIONWIDGET_H
#define UI_STATIONINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StationInformationWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *tagRead;
    QPushButton *closeBtn;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QListView *listView;

    void setupUi(QWidget *StationInformationWidget)
    {
        if (StationInformationWidget->objectName().isEmpty())
            StationInformationWidget->setObjectName(QStringLiteral("StationInformationWidget"));
        StationInformationWidget->resize(960, 640);
        StationInformationWidget->setMinimumSize(QSize(960, 640));
        StationInformationWidget->setMaximumSize(QSize(960, 640));
        gridLayout = new QGridLayout(StationInformationWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 13, 10, -1);
        tagRead = new QPushButton(StationInformationWidget);
        tagRead->setObjectName(QStringLiteral("tagRead"));
        tagRead->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        tagRead->setFont(font);
        tagRead->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(tagRead);

        closeBtn = new QPushButton(StationInformationWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(18, 18));
        closeBtn->setMaximumSize(QSize(18, 18));

        horizontalLayout->addWidget(closeBtn);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        listView = new QListView(StationInformationWidget);
        listView->setObjectName(QStringLiteral("listView"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(24);
        listView->setFont(font1);

        verticalLayout->addWidget(listView);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(StationInformationWidget);

        QMetaObject::connectSlotsByName(StationInformationWidget);
    } // setupUi

    void retranslateUi(QWidget *StationInformationWidget)
    {
        StationInformationWidget->setWindowTitle(QApplication::translate("StationInformationWidget", "StationInformationWidget", Q_NULLPTR));
        tagRead->setText(QApplication::translate("StationInformationWidget", "\345\205\250\351\203\250\346\240\207\350\256\260\345\267\262\350\257\273", Q_NULLPTR));
        closeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StationInformationWidget: public Ui_StationInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONINFORMATIONWIDGET_H
