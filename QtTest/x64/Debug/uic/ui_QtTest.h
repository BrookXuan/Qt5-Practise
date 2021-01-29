/********************************************************************************
** Form generated from reading UI file 'QtTest.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTEST_H
#define UI_QTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTestClass
{
public:
    QAction *action2;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowser_clientRecive;
    QLabel *label_clientStatus;
    QPushButton *pushButton_linkStart;
    QLabel *label;
    QPushButton *pushButton_linkClose;
    QLabel *label_2;
    QPushButton *pushButton_sendToServer;
    QTextEdit *textEdit_clientToServer;
    QLineEdit *lineEdit_linkAddress;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTestClass)
    {
        if (QtTestClass->objectName().isEmpty())
            QtTestClass->setObjectName(QStringLiteral("QtTestClass"));
        QtTestClass->resize(901, 850);
        action2 = new QAction(QtTestClass);
        action2->setObjectName(QStringLiteral("action2"));
        centralWidget = new QWidget(QtTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textBrowser_clientRecive = new QTextBrowser(groupBox);
        textBrowser_clientRecive->setObjectName(QStringLiteral("textBrowser_clientRecive"));

        gridLayout_2->addWidget(textBrowser_clientRecive, 5, 2, 1, 1);

        label_clientStatus = new QLabel(groupBox);
        label_clientStatus->setObjectName(QStringLiteral("label_clientStatus"));

        gridLayout_2->addWidget(label_clientStatus, 6, 0, 1, 1);

        pushButton_linkStart = new QPushButton(groupBox);
        pushButton_linkStart->setObjectName(QStringLiteral("pushButton_linkStart"));

        gridLayout_2->addWidget(pushButton_linkStart, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        pushButton_linkClose = new QPushButton(groupBox);
        pushButton_linkClose->setObjectName(QStringLiteral("pushButton_linkClose"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_linkClose->sizePolicy().hasHeightForWidth());
        pushButton_linkClose->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_linkClose, 3, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        pushButton_sendToServer = new QPushButton(groupBox);
        pushButton_sendToServer->setObjectName(QStringLiteral("pushButton_sendToServer"));

        gridLayout_2->addWidget(pushButton_sendToServer, 4, 0, 1, 1);

        textEdit_clientToServer = new QTextEdit(groupBox);
        textEdit_clientToServer->setObjectName(QStringLiteral("textEdit_clientToServer"));

        gridLayout_2->addWidget(textEdit_clientToServer, 4, 2, 1, 1);

        lineEdit_linkAddress = new QLineEdit(groupBox);
        lineEdit_linkAddress->setObjectName(QStringLiteral("lineEdit_linkAddress"));

        gridLayout_2->addWidget(lineEdit_linkAddress, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        QtTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 901, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setSeparatorsCollapsible(true);
        QtTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTestClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action2);

        retranslateUi(QtTestClass);

        QMetaObject::connectSlotsByName(QtTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtTestClass)
    {
        QtTestClass->setWindowTitle(QApplication::translate("QtTestClass", "QtTest", nullptr));
        action2->setText(QApplication::translate("QtTestClass", "\346\257\233\345\210\272\346\243\200\346\265\213", nullptr));
        groupBox->setTitle(QApplication::translate("QtTestClass", "\345\256\242\346\210\267\347\253\257", nullptr));
        label_clientStatus->setText(QApplication::translate("QtTestClass", "\346\234\252\350\277\236\346\216\245", nullptr));
        pushButton_linkStart->setText(QApplication::translate("QtTestClass", "\350\277\236\346\216\245", nullptr));
        label->setText(QApplication::translate("QtTestClass", "\345\234\260\345\235\200", nullptr));
        pushButton_linkClose->setText(QApplication::translate("QtTestClass", "\346\226\255\345\274\200", nullptr));
        label_2->setText(QApplication::translate("QtTestClass", "\346\216\245\346\224\266", nullptr));
        pushButton_sendToServer->setText(QApplication::translate("QtTestClass", "\345\217\221\351\200\201", nullptr));
        lineEdit_linkAddress->setText(QString());
        menu->setTitle(QApplication::translate("QtTestClass", "\346\265\213\350\257\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtTestClass: public Ui_QtTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTEST_H
