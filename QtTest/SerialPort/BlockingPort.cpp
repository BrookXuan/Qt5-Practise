#include "BlockingPort.h"



Pixdot::BlockingPortThread::BlockingPortThread()
{
	connect(&_serialPort, &QSerialPort::errorOccurred, this, &BlockingPortThread::portError);
}


Pixdot::BlockingPortThread::~BlockingPortThread()
{
}

void Pixdot::BlockingPortThread::ScanPorts(QList<QSerialPortInfo>& serialPortsInfoes)
{
	serialPortsInfoes = QSerialPortInfo::availablePorts();
}

void Pixdot::BlockingPortThread::OpenPort(const PortSetting portSetting)
{

}

void Pixdot::BlockingPortThread::portError(QSerialPort::SerialPortError pError)
{
	emit error(_serialPort.errorString());
}

void Pixdot::BlockingPortThread::ClosePort()
{
}

void Pixdot::BlockingPortThread::run()
{
}
