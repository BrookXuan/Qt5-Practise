/********************************************************************************
** Form generated from reading UI file 'BurrDetectorForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BURRDETECTORFORM_H
#define UI_BURRDETECTORFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BurrDetectorForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_imgShow;

    void setupUi(QWidget *BurrDetectorForm)
    {
        if (BurrDetectorForm->objectName().isEmpty())
            BurrDetectorForm->setObjectName(QStringLiteral("BurrDetectorForm"));
        BurrDetectorForm->resize(1080, 720);
        gridLayout = new QGridLayout(BurrDetectorForm);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(BurrDetectorForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 90));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(50, 50));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QtTest/Resources/line.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/QtTest/Resources/\346\211\207\345\275\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);

        horizontalLayout->addWidget(toolButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(BurrDetectorForm);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(250, 0));
        groupBox_3->setMaximumSize(QSize(280, 16777215));

        gridLayout->addWidget(groupBox_3, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(BurrDetectorForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_imgShow = new QGridLayout();
        gridLayout_imgShow->setSpacing(6);
        gridLayout_imgShow->setObjectName(QStringLiteral("gridLayout_imgShow"));

        gridLayout_3->addLayout(gridLayout_imgShow, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(BurrDetectorForm);

        QMetaObject::connectSlotsByName(BurrDetectorForm);
    } // setupUi

    void retranslateUi(QWidget *BurrDetectorForm)
    {
        BurrDetectorForm->setWindowTitle(QApplication::translate("BurrDetectorForm", "BurrDetectorForm", nullptr));
        groupBox->setTitle(QApplication::translate("BurrDetectorForm", "\345\267\245\345\205\267\346\240\217", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        toolButton->setText(QApplication::translate("BurrDetectorForm", "...", nullptr));
        toolButton_2->setText(QApplication::translate("BurrDetectorForm", "...", nullptr));
        groupBox_3->setTitle(QApplication::translate("BurrDetectorForm", "\345\217\202\346\225\260\346\240\217", nullptr));
        groupBox_2->setTitle(QApplication::translate("BurrDetectorForm", "\345\233\276\345\203\217\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BurrDetectorForm: public Ui_BurrDetectorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BURRDETECTORFORM_H
