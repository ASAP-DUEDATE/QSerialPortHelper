#include "cserialportrecthread.h"

#include <QSerialPort>
#include <QDebug>
#include <QMutex>
CSerialPortRecThread::CSerialPortRecThread(QObject *parent)
    :QThread(parent),m_p_Rec_SerialPort(nullptr),m_p_Mutex(nullptr),m_IsRunning(false){

}

void CSerialPortRecThread::run()
{
    exec();
}

void CSerialPortRecThread::setPort(const QString &portName, const int &baudRate, const int &dataBits, const int &stopBits, const int &parity)
{
    QMutexLocker locker(m_p_Mutex);
    if(m_p_Rec_SerialPort)
    {
        m_p_Rec_SerialPort->close();
        delete m_p_Rec_SerialPort;
        m_p_Rec_SerialPort = nullptr;
    }
    m_p_Rec_SerialPort = new QSerialPort(portName);
    m_p_Rec_SerialPort->setBaudRate(baudRate);
    m_p_Rec_SerialPort->setDataBits((QSerialPort::DataBits)dataBits);
    m_p_Rec_SerialPort->setStopBits((QSerialPort::StopBits)stopBits);
    m_p_Rec_SerialPort->setParity((QSerialPort::Parity)parity);
    m_p_Rec_SerialPort->setFlowControl(QSerialPort::NoFlowControl);

    connect(m_p_Rec_SerialPort,&QSerialPort::readyRead,[=](){
        QByteArray data = m_p_Rec_SerialPort->readAll();
        emit signal_Rec_Data(data);
    });
    if(!m_p_Rec_SerialPort->open(QIODevice::ReadWrite))
    {
        emit signal_Rec_Error(m_p_Rec_SerialPort->errorString());
        return;
    }
    m_IsRunning = true;
}

void CSerialPortRecThread::setMutex(QMutex *mutex)
{
    m_p_Mutex = mutex;

}

void CSerialPortRecThread::setRunning(bool isRunning)
{
    m_IsRunning = isRunning;
}

bool CSerialPortRecThread::isRunning()
{
    return m_IsRunning;
}

void CSerialPortRecThread::stop()
{
    QMutexLocker locker(m_p_Mutex);
    if(m_p_Rec_SerialPort)
    {
        m_p_Rec_SerialPort->close();
        delete m_p_Rec_SerialPort;
        m_p_Rec_SerialPort = nullptr;
    }
    m_IsRunning = false;
    quit();
}




