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
	/***JSON文件操作测试***/
	//JSON文件写入
	void saveJSONFile(const QString jsonName,const QJsonDocument jsonDocument);

	//JSON文件读取
	void readJSONFile(const QString jsonName,QJsonDocument &jsonDocument);

	//网络数据流转换为JSON流
	void networkStream2JSONStream(const QString networkStream);

	//JSON流转为网络数据流
	void jsonStream2NetworkStream(const QJsonDocument jsonStream);

private:
	QNetworkAccessManager *_networkAccessMannager = nullptr;
	QNetworkRequest *_networkRequest = nullptr;
	QNetworkReply *_networkReply = nullptr;
};
