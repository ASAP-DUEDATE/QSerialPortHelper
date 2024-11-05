#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "cserialportrecthread.h"
#include "cserialportsendthread.h"

#include <QHBoxLayout>
#include <QMessageBox>
#include <QPushButton>
#include <QSerialPort>
#include <QSerialPortInfo>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    m_p_CSerialPortRecThread(new CSerialPortRecThread),
    m_p_CSerialPortSendThread(new CSerialPortSendThread)
{
    ui->setupUi(this);
    init();
    connect(m_p_CSerialPortRecThread,&CSerialPortRecThread::signal_Rec_Data,this,&MainWindow::slot_Handle_Rec_Data);
    connect(m_p_CSerialPortRecThread,&CSerialPortRecThread::signal_Rec_Error,this,&MainWindow::slot_Handle_Error);
    connect(m_p_CSerialPortSendThread,&CSerialPortSendThread::signal_Send_Error,this,&MainWindow::slot_Handle_Error);
}

MainWindow::~MainWindow()
{

    m_p_CSerialPortRecThread->stop();
    m_p_CSerialPortRecThread->wait();
    delete m_p_CSerialPortRecThread;
    m_p_CSerialPortRecThread=nullptr;

    m_p_CSerialPortSendThread->stop();
    m_p_CSerialPortSendThread->wait();
    delete m_p_CSerialPortSendThread;
    m_p_CSerialPortSendThread=nullptr;

    delete ui;
}

void MainWindow::init()
{
    //获取所有的可用的接口
    auto portInfos=QSerialPortInfo::availablePorts();
    for (auto & portInfo : portInfos) {
        ui->comboBox_ChoseSendPort->addItem(portInfo.portName()+":"+portInfo.description(),portInfo.portName());
        ui->comboBox_ChoseRecPort->addItem(portInfo.portName()+":"+portInfo.description(),portInfo.portName());
    }

    //获取标准的波特率
    auto baudRates=QSerialPortInfo::standardBaudRates();
    for(auto &baudRate:baudRates){
        ui->comboBox_ChoseSendBaudRate->addItem(QString::number(baudRate),baudRate);
        ui->comboBox_ChoseRecBaudRate->addItem(QString::number(baudRate),baudRate);
    }
    ui->comboBox_ChoseSendBaudRate->setCurrentText("9600");
    ui->comboBox_ChoseRecBaudRate->setCurrentText("9600");

    //设置停止位
    ui->comboBox_ChoseSendStopBits->addItem("1",QSerialPort::OneStop);
    ui->comboBox_ChoseSendStopBits->addItem("1.5",QSerialPort::OneAndHalfStop);
    ui->comboBox_ChoseSendStopBits->addItem("2",QSerialPort::TwoStop);

    ui->comboBox_ChoseRecStopBits->addItem("1",QSerialPort::OneStop);
    ui->comboBox_ChoseRecStopBits->addItem("1.5",QSerialPort::OneAndHalfStop);
    ui->comboBox_ChoseRecStopBits->addItem("2",QSerialPort::TwoStop);


    //设置数据位
    ui->comboBox_ChoseSendDataBits->addItem("5",QSerialPort::Data5);
    ui->comboBox_ChoseSendDataBits->addItem("6",QSerialPort::Data6);
    ui->comboBox_ChoseSendDataBits->addItem("7",QSerialPort::Data7);
    ui->comboBox_ChoseSendDataBits->addItem("8",QSerialPort::Data8);
    ui->comboBox_ChoseSendDataBits->setCurrentText("8");

    ui->comboBox_ChoseRecDataBits->addItem("5",QSerialPort::Data5);
    ui->comboBox_ChoseRecDataBits->addItem("6",QSerialPort::Data6);
    ui->comboBox_ChoseRecDataBits->addItem("7",QSerialPort::Data7);
    ui->comboBox_ChoseRecDataBits->addItem("8",QSerialPort::Data8);
    ui->comboBox_ChoseRecDataBits->setCurrentText("8");





    //设置校验位
    ui->comboBox_ChoseSendParityBits->addItem("None",QSerialPort::NoParity);
    ui->comboBox_ChoseSendParityBits->addItem("Even",QSerialPort::EvenParity);
    ui->comboBox_ChoseSendParityBits->addItem("Odd",QSerialPort::OddParity);
    ui->comboBox_ChoseSendParityBits->addItem("Space",QSerialPort::SpaceParity);
    ui->comboBox_ChoseSendParityBits->addItem("Mark",QSerialPort::MarkParity);

    ui->comboBox_ChoseRecParityBits->addItem("None",QSerialPort::NoParity);
    ui->comboBox_ChoseRecParityBits->addItem("Even",QSerialPort::EvenParity);
    ui->comboBox_ChoseRecParityBits->addItem("Odd",QSerialPort::OddParity);
    ui->comboBox_ChoseRecParityBits->addItem("Space",QSerialPort::SpaceParity);
    ui->comboBox_ChoseRecParityBits->addItem("Mark",QSerialPort::MarkParity);



}

void MainWindow::on_pushButton_OpenSendPort_released()
{
    if(m_p_CSerialPortSendThread->isRunning()){
        m_p_CSerialPortSendThread->stop();
        ui->pushButton_OpenSendPort->setText("打开串口");
        return;
    }else{
        QString portName=ui->comboBox_ChoseSendPort->currentData().toString();
        int baudRate=ui->comboBox_ChoseSendBaudRate->currentData().toInt();
        int dataBits=ui->comboBox_ChoseSendDataBits->currentData().toInt();
        int stopBits=ui->comboBox_ChoseSendStopBits->currentData().toInt();
        int parity=ui->comboBox_ChoseSendParityBits->currentData().toInt();
        m_p_CSerialPortSendThread->setPort(portName,baudRate,dataBits,stopBits,parity);
        m_p_CSerialPortSendThread->start();
        ui->pushButton_OpenSendPort->setText("关闭串口");
    }

}


void MainWindow::on_pushButton_OpenRecPort_released()
{
    if(m_p_CSerialPortRecThread->isRunning()){
        m_p_CSerialPortRecThread->stop();
        ui->pushButton_OpenRecPort->setText("打开串口");
        return;
    }else{
        QString portName=ui->comboBox_ChoseRecPort->currentData().toString();
        int baudRate=ui->comboBox_ChoseRecBaudRate->currentData().toInt();
        int dataBits=ui->comboBox_ChoseRecDataBits->currentData().toInt();
        int stopBits=ui->comboBox_ChoseRecStopBits->currentData().toInt();
        int parity=ui->comboBox_ChoseRecParityBits->currentData().toInt();
        m_p_CSerialPortRecThread->setPort(portName,baudRate,dataBits,stopBits,parity);
        m_p_CSerialPortRecThread->start();
        ui->pushButton_OpenRecPort->setText("关闭串口");

    }

}


void MainWindow::on_pushButton_Send_clicked()
{
    if(!(m_p_CSerialPortSendThread->isRunning())&&!(m_p_CSerialPortRecThread->isRunning())){
        QMessageBox::warning(this,"警告","串口未打开");
        return;
    }
    auto data=ui->plainTextEdit_SendMessage->toPlainText();
    if(data.isEmpty()){
        QMessageBox::warning(this,"警告","发送数据不能为空");
        return;
    }
    QByteArray byteArray=data.toUtf8();
    m_p_CSerialPortSendThread->sendData(byteArray);
    return;
}


void MainWindow::on_pushButton_Clean_clicked()
{
    ui->plainTextEdit_SendMessage->clear();

}

void MainWindow::slot_Handle_Rec_Data(const QByteArray &data)
{
    ui->plainTextEdit_RecMessage->appendPlainText(QString::fromUtf8(data));
    ui->plainTextEdit_SendMessage->clear();
}

void MainWindow::slot_Handle_Error(const QString &error)
{
    QMessageBox::warning(this,"警告",error);
}

