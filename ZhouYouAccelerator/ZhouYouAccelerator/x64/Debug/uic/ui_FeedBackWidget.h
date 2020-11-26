/********************************************************************************
** Form generated from reading UI file 'FeedBackWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACKWIDGET_H
#define UI_FEEDBACKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeedBackWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeBtn;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalTuPianmiaoSu;
    QLabel *pictureLbl;
    QListWidget *listWidget;
    QVBoxLayout *verticalLianXi;
    QLabel *qqWeChatLbl;
    QLineEdit *qqWeChatEdt;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *submitBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *FeedBackWidget)
    {
        if (FeedBackWidget->objectName().isEmpty())
            FeedBackWidget->setObjectName(QStringLiteral("FeedBackWidget"));
        FeedBackWidget->resize(960, 540);
        FeedBackWidget->setMinimumSize(QSize(960, 540));
        FeedBackWidget->setMaximumSize(QSize(960, 540));
        gridLayout = new QGridLayout(FeedBackWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 40);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        closeBtn = new QPushButton(FeedBackWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(18, 18));
        closeBtn->setMaximumSize(QSize(18, 18));

        horizontalLayout_3->addWidget(closeBtn);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(24);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 0, -1);
        textEdit = new QTextEdit(FeedBackWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMinimumSize(QSize(0, 0));
        textEdit->setMaximumSize(QSize(166666, 199));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        textEdit->setFont(font);

        horizontalLayout_5->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalTuPianmiaoSu = new QHBoxLayout();
        horizontalTuPianmiaoSu->setSpacing(0);
        horizontalTuPianmiaoSu->setObjectName(QStringLiteral("horizontalTuPianmiaoSu"));
        horizontalTuPianmiaoSu->setContentsMargins(0, -1, 0, -1);
        pictureLbl = new QLabel(FeedBackWidget);
        pictureLbl->setObjectName(QStringLiteral("pictureLbl"));
        pictureLbl->setMinimumSize(QSize(110, 85));
        pictureLbl->setMaximumSize(QSize(110, 85));
        pictureLbl->setFont(font);
        pictureLbl->setLayoutDirection(Qt::RightToLeft);
        pictureLbl->setAlignment(Qt::AlignCenter);

        horizontalTuPianmiaoSu->addWidget(pictureLbl);

        listWidget = new QListWidget(FeedBackWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(784, 85));
        listWidget->setMaximumSize(QSize(784, 85));
        listWidget->setFlow(QListView::LeftToRight);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setViewMode(QListView::IconMode);
        listWidget->setModelColumn(0);
        listWidget->setBatchSize(100);

        horizontalTuPianmiaoSu->addWidget(listWidget);


        verticalLayout->addLayout(horizontalTuPianmiaoSu);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLianXi = new QVBoxLayout();
        verticalLianXi->setSpacing(0);
        verticalLianXi->setObjectName(QStringLiteral("verticalLianXi"));
        verticalLianXi->setContentsMargins(0, -1, 0, -1);
        qqWeChatLbl = new QLabel(FeedBackWidget);
        qqWeChatLbl->setObjectName(QStringLiteral("qqWeChatLbl"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        qqWeChatLbl->setFont(font1);
        qqWeChatLbl->setStyleSheet(QStringLiteral(""));
        qqWeChatLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLianXi->addWidget(qqWeChatLbl);

        qqWeChatEdt = new QLineEdit(FeedBackWidget);
        qqWeChatEdt->setObjectName(QStringLiteral("qqWeChatEdt"));
        qqWeChatEdt->setMinimumSize(QSize(0, 50));
        qqWeChatEdt->setMaximumSize(QSize(16664, 50));
        qqWeChatEdt->setFont(font1);

        verticalLianXi->addWidget(qqWeChatEdt);


        verticalLayout_2->addLayout(verticalLianXi);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        submitBtn = new QPushButton(FeedBackWidget);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));
        submitBtn->setMinimumSize(QSize(213, 48));
        submitBtn->setMaximumSize(QSize(213, 48));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        submitBtn->setFont(font2);

        horizontalLayout->addWidget(submitBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        QWidget::setTabOrder(textEdit, listWidget);
        QWidget::setTabOrder(listWidget, qqWeChatEdt);
        QWidget::setTabOrder(qqWeChatEdt, submitBtn);
        QWidget::setTabOrder(submitBtn, closeBtn);

        retranslateUi(FeedBackWidget);

        QMetaObject::connectSlotsByName(FeedBackWidget);
    } // setupUi

    void retranslateUi(QWidget *FeedBackWidget)
    {
        FeedBackWidget->setWindowTitle(QApplication::translate("FeedBackWidget", "FeedBackWidget", Q_NULLPTR));
        closeBtn->setText(QString());
        textEdit->setPlaceholderText(QApplication::translate("FeedBackWidget", "\350\257\267\346\217\217\350\277\260\344\275\240\345\234\250\344\275\277\347\224\250\350\277\207\347\250\213\344\270\255\351\201\207\345\210\260\347\232\204\351\227\256\351\242\230\357\274\210\345\277\205\345\241\253\357\274\211", Q_NULLPTR));
        pictureLbl->setText(QApplication::translate("FeedBackWidget", "\345\233\276\347\211\207\346\217\217\350\277\260", Q_NULLPTR));
        qqWeChatLbl->setText(QApplication::translate("FeedBackWidget", "\350\257\267\347\225\231\344\270\213\346\202\250\347\232\204\350\201\224\347\263\273\346\226\271\345\274\217\357\274\210\345\277\205\345\241\253\357\274\211", Q_NULLPTR));
        qqWeChatEdt->setPlaceholderText(QApplication::translate("FeedBackWidget", "\346\211\213\346\234\272\345\217\267/QQ/\345\276\256\344\277\241", Q_NULLPTR));
        submitBtn->setText(QApplication::translate("FeedBackWidget", "\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FeedBackWidget: public Ui_FeedBackWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACKWIDGET_H
