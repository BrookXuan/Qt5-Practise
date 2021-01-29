/**===============================================================
Copyright (c) 2020 Wuhan Pixdot Technology Co.,Ltd.
Unpublished - All rights reserved
=================================================================
File description: 串口通讯
=================================================================
Date              Name             Description of Change
2020-10-28        CX
============================================================== **/
#pragma once

#include <QMutex>
#include <QThread>
#include <QWaitCondition>
#include <QSerialPortInfo>
#include <QSerialPort>

namespace Pixdot {
	class BlockingPortThread : public QThread
	{
	public:
		BlockingPortThread();
		~BlockingPortThread();
		//串口参数
		struct PortSetting
		{
			QString name;
			QSerialPort::BaudRate baudRate;
			QSerialPort::DataBits dataBits;
			QSerialPort::Parity parity;
			QSerialPort::StopBits stopBits;
			QSerialPort::FlowControl flowControl;
			bool localEchoEnabled;

			int waitTimeout; //超时等待时间ms
		};

		//扫描串口
		void ScanPorts(QList<QSerialPortInfo> &serialPortsInfoes);

		//打开串口
		void OpenPort(const PortSetting portSetting);

		//串口数据交换线程
		void ExchangeData(QString &request);

		//关闭串口
		void ClosePort();

	signals:
		void response(const QString &s);
		void error(const QString &s);
		void timeOut(const QString &s);

	private slots:
		void portError(QSerialPort::SerialPortError pError);

	private:
		virtual void run() override;

	private:
		PortSetting _portSetting; //串口设置
		QSerialPort _serialPort; //串口
		QString _request; //请求信息
		QMutex _qMutex; //线程锁
		QWaitCondition _qCondition; 
		bool _quit = false;
	};
}


