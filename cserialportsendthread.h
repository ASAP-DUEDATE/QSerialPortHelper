#ifndef CSERIALPORTSENDTHREAD_H
#define CSERIALPORTSENDTHREAD_H

#include <QObject>
#include <QThread>
class QSerialPort;
class QMutex;
class CSerialPortSendThread : public QThread
{
    Q_OBJECT
public:
    explicit CSerialPortSendThread(QObject *parent = nullptr);
    void run() override;
    void setPort(const QString &portName,const int &baudRate,const int &dataBits,const int &stopBits,const int &parity);
    void sendData(const QByteArray &data);
    void stop();
    void setMutex(QMutex *mutex);
    void setRunning(bool isRunning);
    bool isRunning();
signals:
    void signal_Send_Data(const QByteArray &data);
    void signal_Send_Error(const QString &error);

private:
    QSerialPort *m_p_Send_SerialPort;
    QString m_CurrenPortName;
    QMutex *m_p_Mutex;
    bool m_IsRunning;





};

#endif // CSERIALPORTSENDTHREAD_H
