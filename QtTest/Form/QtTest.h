#pragma once

#include <QtWidgets/QMainWindow>
#include <QtCore/QObject>
#include<qnetworkaccessmanager.h>
#include<qnetworkrequest.h>
#include<qnetworkreply.h>
#include<qjsonvalue.h>
#include<qjsonarray.h>
#include<qjsonobject.h>
#include<qjsondocument.h>
#include<iostream>
#include "ui_QtTest.h"

class QtTest : public QMainWindow
{
	Q_OBJECT

public:
	QtTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtTestClass ui;

private slots:
	void pushButton_linkStartCliecked();
	void pushButton_linkCloseCliecked();
	void pushButton_sendToServerCliecked();
	void clientRecievMesssage(QNetworkReply *reply);
	//void clientStateChange(QAbstractSocket::SocketState state);

private:
	/***JSON�ļ���������***/
	//JSON�ļ�д��
	void saveJSONFile(const QString jsonName,const QJsonDocument jsonDocument);

	//JSON�ļ���ȡ
	void readJSONFile(const QString jsonName,QJsonDocument &jsonDocument);

	//����������ת��ΪJSON��
	void networkStream2JSONStream(const QString networkStream);

	//JSON��תΪ����������
	void jsonStream2NetworkStream(const QJsonDocument jsonStream);

private:
	QNetworkAccessManager *_networkAccessMannager = nullptr;
	QNetworkRequest *_networkRequest = nullptr;
	QNetworkReply *_networkReply = nullptr;
};
