#ifndef CSERIALPORTRECTHREAD_H
#define CSERIALPORTRECTHREAD_H

#include <QObject>
#include <QThread>
class QSerialPort;
class QMutex;
class CSerialPortRecThread : public QThread
{
    Q_OBJECT
public:
    explicit CSerialPortRecThread(QObject *parent = nullptr);
    void run() override;
    void setPort(const QString &portName,const int &baudRate,const int &dataBits,const int &stopBits,const int &parity);
    void setMutex(QMutex *mutex);
    void setRunning(bool isRunning);
    bool isRunning();
    void stop();



signals:
    void signal_Rec_Data(const QByteArray &data);
    void signal_Rec_Error(const QString &error);

private:
    QMutex *m_p_Mutex;
    QSerialPort *m_p_Rec_SerialPort;
    bool m_IsRunning;


};

#endif // CSERIALPORTRECTHREAD_H
