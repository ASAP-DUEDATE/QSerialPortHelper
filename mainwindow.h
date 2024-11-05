#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
class QSerialPort;
class CSerialPortRecThread;
class CSerialPortSendThread;

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void init();

private slots:
    void on_pushButton_OpenSendPort_released();
    void on_pushButton_OpenRecPort_released();
    void on_pushButton_Send_clicked();
    void on_pushButton_Clean_clicked();

    void slot_Handle_Rec_Data(const QByteArray &data);
    void slot_Handle_Error(const QString &error);




private:
    Ui::MainWindow *ui;
    CSerialPortRecThread *m_p_CSerialPortRecThread;
    CSerialPortSendThread *m_p_CSerialPortSendThread;

};
#endif // MAINWINDOW_H
