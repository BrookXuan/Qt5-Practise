#include<qfile.h>
#include<qdir.h>
#include "QtTest.h"

QtTest::QtTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	_networkAccessMannager = new QNetworkAccessManager;
	_networkRequest = new QNetworkRequest;

	QObject::connect(ui.pushButton_linkStart, SIGNAL(clicked()), this, SLOT(pushButton_linkStartCliecked()));
	QObject::connect(ui.pushButton_linkClose, SIGNAL(clicked()), this, SLOT(pushButton_linkStartCliecked()));
	QObject::connect(ui.pushButton_sendToServer, SIGNAL(clicked()), this, SLOT(pushButton_sendToServerCliecked()));
	QObject::connect(_networkAccessMannager, SIGNAL(finished(QNetworkReply *)), this, SLOT(clientRecievMesssage(QNetworkReply *)));

	//设置请求头
	//_networkRequest->setMaximumRedirectsAllowed(1);
	_networkRequest->setRawHeader("Content-Type", "text/xml; charset=utf-8");
	_networkRequest->setRawHeader("Expect", "100-continue");
	QJsonDocument jd;
	std::cout << "sys on" << std::endl;
	readJSONFile("workOrderInput.json", jd);
}

void QtTest::pushButton_linkStartCliecked()
{
	QString baseUrl = ui.lineEdit_linkAddress->text();
	_networkRequest->setUrl(baseUrl);
}

void QtTest::pushButton_linkCloseCliecked()
{
	_networkReply->deleteLater();
}

void QtTest::pushButton_sendToServerCliecked()
{
	QByteArray sendData = ui.textEdit_clientToServer->toPlainText().toLocal8Bit();
	_networkReply = _networkAccessMannager->post(*_networkRequest, sendData);
}

void QtTest::clientRecievMesssage(QNetworkReply *reply)
{
	_networkReply = reply;

	QByteArray bytes = _networkReply->readAll();
	qDebug() << QString(bytes);
	QDateTime time = QDateTime::currentDateTime();
	ui.textBrowser_clientRecive->setPlainText(time.toString() + "\n "+QString::fromUtf8(bytes));
	
}

void QtTest::saveJSONFile(const QString jsonName, const QJsonDocument jsonDocument)
{


}

void QtTest::readJSONFile(const QString jsonName, QJsonDocument & jsonDocument)
{
	QString rootPath = QCoreApplication::applicationDirPath() + "/" + "Script/";
	QFile jsonFile(rootPath + jsonName);
	QDir dir(rootPath);
	if (!dir.exists())
	{
		dir.mkdir(rootPath);
	}
	if (!jsonFile.exists())
	{
		QJsonObject workOrderInput; //工单进站
		QJsonObject temptObject;
		workOrderInput.insert("TransactionName", "WOCHECKIN");
		workOrderInput.insert("EqpNo", "EX0013");
		workOrderInput.insert("WONO", "1KB1840001");
		workOrderInput.insert("UserID", "744593");

		QJsonArray InputListDtArray;
		temptObject.insert("InputCode", QString::fromLocal8Bit("管理項目編號1"));
		temptObject.insert("InputValue", "實際值1");
		InputListDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end()+1; qIter++)
			temptObject.erase(qIter);
		std::cout << temptObject.count() << std::endl;
		temptObject.insert("InputCode", "管理項目編號2");
		temptObject.insert("InputValue", "實際值2");
		InputListDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end() + 1; qIter++)
			temptObject.erase(qIter);
		std::cout << temptObject.count() << std::endl;
		workOrderInput.insert("InputListDt", InputListDtArray);

		QJsonArray TraceMatBatchDtArray;
		temptObject.insert("MatCode", "物料代碼1");
		temptObject.insert("TwoD", "實際值1");
		TraceMatBatchDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end() + 1; qIter++)
			temptObject.erase(qIter);
		std::cout << temptObject.count() << std::endl;
		temptObject.insert("MatCode", "物料代碼2");
		temptObject.insert("TwoD", "實際值2");
		TraceMatBatchDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end() + 1; qIter++)
			temptObject.erase(qIter);
		workOrderInput.insert("TraceMatBatchDt", TraceMatBatchDtArray);
		std::cout << temptObject.count() << std::endl;

		QJsonArray WOCarrierDtArray;
		temptObject.insert("CarrierNo", "載具1");
		temptObject.insert("CarrierNo", "載具2");
		WOCarrierDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end() + 1; qIter++)
			temptObject.erase(qIter);
		workOrderInput.insert("WOCarrierDt", WOCarrierDtArray);
		std::cout << temptObject.count() << std::endl;

		QJsonArray CheckItemDtArray;
		temptObject.insert("ParamName", "參數名1");
		temptObject.insert("ParamValue ", "參數值1");
		CheckItemDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end() + 1; qIter++)
			temptObject.erase(qIter);
		std::cout << temptObject.count() << std::endl;
		temptObject.insert("ParamName", "參數名2");
		temptObject.insert("ParamValue ", "參數值2");
		CheckItemDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end() + 1; qIter++)
			temptObject.erase(qIter);
		workOrderInput.insert("CheckItemDt", CheckItemDtArray);
		std::cout << temptObject.count() << std::endl;

		QJsonArray ParmListDtArray;
		temptObject.insert("ParamCode", "參數名1");
		temptObject.insert("ParamValue ", "參數值1");

		TraceMatBatchDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end() + 1; qIter++)
			temptObject.erase(qIter);
		std::cout << temptObject.count() << std::endl;
		temptObject.insert("ParamCode", "參數名2");
		temptObject.insert("ParamValue ", "參數值2");
		TraceMatBatchDtArray.append(temptObject);
		for (QJsonObject::iterator qIter = temptObject.begin(); qIter != temptObject.end() + 1; qIter++)
			temptObject.erase(qIter);
		std::cout << temptObject.count() << std::endl;
		workOrderInput.insert("ParmListDt", ParmListDtArray);

		jsonDocument.setObject(workOrderInput);
		QByteArray jsonByte = jsonDocument.toJson(QJsonDocument::Compact);
		jsonFile.open(QIODevice::WriteOnly);
		QString jsonString = QString::fromLocal8Bit(jsonByte);
		jsonFile.write(jsonString.toUtf8());

		jsonFile.close();
	}
	std::cout << "readJSONFile end" << std::endl;
}

void QtTest::networkStream2JSONStream(const QString networkStream)
{

}

void QtTest::jsonStream2NetworkStream(const QJsonDocument jsonStream)
{

}



//void QtTest::clientStateChange(QAbstractSocket::SocketState state)
//{
//	
//}

