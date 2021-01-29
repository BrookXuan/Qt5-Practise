/**===============================================================
Copyright (c) 2020 Wuhan Pixdot Technology Co.,Ltd.
Unpublished - All rights reserved
=================================================================
File description: ����ͨѶ
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
		//���ڲ���
		struct PortSetting
		{
			QString name;
			QSerialPort::BaudRate baudRate;
			QSerialPort::DataBits dataBits;
			QSerialPort::Parity parity;
			QSerialPort::StopBits stopBits;
			QSerialPort::FlowControl flowControl;
			bool localEchoEnabled;

			int waitTimeout; //��ʱ�ȴ�ʱ��ms
		};

		//ɨ�贮��
		void ScanPorts(QList<QSerialPortInfo> &serialPortsInfoes);

		//�򿪴���
		void OpenPort(const PortSetting portSetting);

		//�������ݽ����߳�
		void ExchangeData(QString &request);

		//�رմ���
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
		PortSetting _portSetting; //��������
		QSerialPort _serialPort; //����
		QString _request; //������Ϣ
		QMutex _qMutex; //�߳���
		QWaitCondition _qCondition; 
		bool _quit = false;
	};
}


