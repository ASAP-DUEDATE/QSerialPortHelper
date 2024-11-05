#include "cserialportsendthread.h"
#include <QSerialPort>
#include <qdebug.h>
#include <QMutex>

CSerialPortSendThread::CSerialPortSendThread(QObject *parent)
    :QThread(parent),m_p_Send_SerialPort(nullptr),m_p_Mutex(nullptr),m_IsRunning(false)
{

}


void CSerialPortSendThread::run()
{
    exec();
}

void CSerialPortSendThread::setPort(const QString &portName, const int &baudRate, const int &dataBits, const int &stopBits, const int &parity)
{
    QMutexLocker locker(m_p_Mutex);
    if(m_p_Send_SerialPort)
    {
        m_p_Send_SerialPort->close();
        delete m_p_Send_SerialPort;
        m_p_Send_SerialPort = nullptr;
    }
        m_CurrenPortName = portName;
        m_p_Send_SerialPort = new QSerialPort(portName);
        m_p_Send_SerialPort->setBaudRate(baudRate);
        m_p_Send_SerialPort->setDataBits((QSerialPort::DataBits)dataBits);
        m_p_Send_SerialPort->setStopBits((QSerialPort::StopBits)stopBits);
        m_p_Send_SerialPort->setParity((QSerialPort::Parity)parity);
        m_p_Send_SerialPort->setFlowControl(QSerialPort::NoFlowControl);
        if(!m_p_Send_SerialPort->open(QIODevice::ReadWrite))
        {
            emit signal_Send_Error(m_p_Send_SerialPort->errorString());
            return;
        }
        m_IsRunning = true;

}

void CSerialPortSendThread::sendData(const QByteArray &data)
{
    QMutexLocker locker(m_p_Mutex);
    if(m_p_Send_SerialPort&&m_p_Send_SerialPort->isOpen())
    {
        m_p_Send_SerialPort->write(data);
        emit signal_Send_Data(data);
    }else
    {
        emit signal_Send_Error(tr("SerialPort is not open"));
    }



}


void CSerialPortSendThread::stop()
{
    QMutexLocker locker(m_p_Mutex);
    if(m_p_Send_SerialPort)
    {
        m_p_Send_SerialPort->close();
        delete m_p_Send_SerialPort;
        m_p_Send_SerialPort = nullptr;
    }
    m_IsRunning = false;
    quit();
}


void CSerialPortSendThread::setMutex(QMutex *mutex)
{
    m_p_Mutex = mutex;

}

void CSerialPortSendThread::setRunning(bool isRunning)
{
    m_IsRunning = isRunning;

}

bool CSerialPortSendThread::isRunning()
{
    return m_IsRunning;

}




