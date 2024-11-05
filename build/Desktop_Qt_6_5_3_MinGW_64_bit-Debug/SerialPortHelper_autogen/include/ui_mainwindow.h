/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_25;
    QComboBox *comboBox_ChoseSendPort;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_7;
    QComboBox *comboBox_ChoseSendDataBits;
    QLabel *label_28;
    QComboBox *comboBox_ChoseSendStopBits;
    QLabel *label_27;
    QLabel *label_26;
    QComboBox *comboBox_ChoseSendBaudRate;
    QComboBox *comboBox_ChoseSendParityBits;
    QLabel *label_29;
    QLabel *label_30;
    QPushButton *pushButton_OpenSendPort;
    QWidget *widget_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_31;
    QComboBox *comboBox_ChoseRecPort;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_8;
    QComboBox *comboBox_ChoseRecDataBits;
    QLabel *label_32;
    QComboBox *comboBox_ChoseRecStopBits;
    QLabel *label_33;
    QLabel *label_34;
    QComboBox *comboBox_ChoseRecBaudRate;
    QComboBox *comboBox_ChoseRecParityBits;
    QLabel *label_35;
    QLabel *label_36;
    QPushButton *pushButton_OpenRecPort;
    QPlainTextEdit *plainTextEdit_SendMessage;
    QPlainTextEdit *plainTextEdit_RecMessage;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_Clean;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(727, 624);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);\n"
"font: 9pt \"Sans Serif Collection\";\n"
"border: 1px solid #D3D3D3;\n"
"border-radius: 8px; \n"
"color: #000000;\n"
"QScrollBar {\n"
"    background-color: transparent;\n"
"    width: 10px;  // \350\276\203\347\252\204\347\232\204\346\273\232\345\212\250\346\235\241\345\256\275\345\272\246\n"
"}\n"
"QScrollBar::handle {\n"
"    background-color: #A9A9A9;  // \346\273\232\345\212\250\346\235\241\347\232\204\351\242\234\350\211\262 (\346\265\205\347\201\260\350\211\262)\n"
"    border-radius: 5px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 351, 361));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 8px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QWidget:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 321, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(verticalLayoutWidget);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_25->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_25);

        comboBox_ChoseSendPort = new QComboBox(verticalLayoutWidget);
        comboBox_ChoseSendPort->setObjectName("comboBox_ChoseSendPort");
        comboBox_ChoseSendPort->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        verticalLayout_4->addWidget(comboBox_ChoseSendPort);

        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 110, 321, 231));
        gridLayout_7 = new QGridLayout(gridLayoutWidget);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        comboBox_ChoseSendDataBits = new QComboBox(gridLayoutWidget);
        comboBox_ChoseSendDataBits->setObjectName("comboBox_ChoseSendDataBits");
        comboBox_ChoseSendDataBits->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        gridLayout_7->addWidget(comboBox_ChoseSendDataBits, 2, 1, 1, 1);

        label_28 = new QLabel(gridLayoutWidget);
        label_28->setObjectName("label_28");
        label_28->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_28, 2, 0, 1, 1);

        comboBox_ChoseSendStopBits = new QComboBox(gridLayoutWidget);
        comboBox_ChoseSendStopBits->setObjectName("comboBox_ChoseSendStopBits");
        comboBox_ChoseSendStopBits->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        gridLayout_7->addWidget(comboBox_ChoseSendStopBits, 1, 1, 1, 1);

        label_27 = new QLabel(gridLayoutWidget);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_27, 1, 0, 1, 1);

        label_26 = new QLabel(gridLayoutWidget);
        label_26->setObjectName("label_26");
        label_26->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_26, 0, 0, 1, 1);

        comboBox_ChoseSendBaudRate = new QComboBox(gridLayoutWidget);
        comboBox_ChoseSendBaudRate->setObjectName("comboBox_ChoseSendBaudRate");
        comboBox_ChoseSendBaudRate->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        gridLayout_7->addWidget(comboBox_ChoseSendBaudRate, 0, 1, 1, 1);

        comboBox_ChoseSendParityBits = new QComboBox(gridLayoutWidget);
        comboBox_ChoseSendParityBits->setObjectName("comboBox_ChoseSendParityBits");
        comboBox_ChoseSendParityBits->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        gridLayout_7->addWidget(comboBox_ChoseSendParityBits, 3, 1, 1, 1);

        label_29 = new QLabel(gridLayoutWidget);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_29, 3, 0, 1, 1);

        label_30 = new QLabel(gridLayoutWidget);
        label_30->setObjectName("label_30");
        label_30->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_30, 4, 0, 1, 1);

        pushButton_OpenSendPort = new QPushButton(gridLayoutWidget);
        pushButton_OpenSendPort->setObjectName("pushButton_OpenSendPort");
        pushButton_OpenSendPort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #F5F5F5, stop:1 #E0E0E0); /* \344\270\212\346\265\205\344\270\213\346\267\261\347\232\204\346\270\220\345\217\230 */\n"
"    color: #000000; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #B0B0B0; /* \346\214\211\351\222\256\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 8px; /* macOS \351\243\216\346\240\274\347\232\204\345\234\206\350\247\222\346\214\211\351\222\256 */\n"
"    padding: 5px 15px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \351\273\230\350\256\244\345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    min-height: 28px\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0,"
                        " x2:0, y2:1, stop:0 #EDEDED, stop:1 #D8D8D8); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\270\220\345\217\230 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #D0D0D0, stop:1 #B0B0B0); /* \346\214\211\344\270\213\346\227\266\346\270\220\345\217\230 */\n"
"    border: 1px solid #909090; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #F0F0F0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #A0A0A0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #D0D0D0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
""));

        gridLayout_7->addWidget(pushButton_OpenSendPort, 4, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(370, 10, 351, 361));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 8px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QWidget:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}"));
        verticalLayoutWidget_2 = new QWidget(widget_2);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 321, 80));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(verticalLayoutWidget_2);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_31->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_31);

        comboBox_ChoseRecPort = new QComboBox(verticalLayoutWidget_2);
        comboBox_ChoseRecPort->setObjectName("comboBox_ChoseRecPort");
        comboBox_ChoseRecPort->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        verticalLayout_5->addWidget(comboBox_ChoseRecPort);

        gridLayoutWidget_6 = new QWidget(widget_2);
        gridLayoutWidget_6->setObjectName("gridLayoutWidget_6");
        gridLayoutWidget_6->setGeometry(QRect(10, 110, 321, 231));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        comboBox_ChoseRecDataBits = new QComboBox(gridLayoutWidget_6);
        comboBox_ChoseRecDataBits->setObjectName("comboBox_ChoseRecDataBits");
        comboBox_ChoseRecDataBits->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        gridLayout_8->addWidget(comboBox_ChoseRecDataBits, 2, 1, 1, 1);

        label_32 = new QLabel(gridLayoutWidget_6);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_32->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_32, 2, 0, 1, 1);

        comboBox_ChoseRecStopBits = new QComboBox(gridLayoutWidget_6);
        comboBox_ChoseRecStopBits->setObjectName("comboBox_ChoseRecStopBits");
        comboBox_ChoseRecStopBits->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        gridLayout_8->addWidget(comboBox_ChoseRecStopBits, 1, 1, 1, 1);

        label_33 = new QLabel(gridLayoutWidget_6);
        label_33->setObjectName("label_33");
        label_33->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_33, 1, 0, 1, 1);

        label_34 = new QLabel(gridLayoutWidget_6);
        label_34->setObjectName("label_34");
        label_34->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_34->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_34, 0, 0, 1, 1);

        comboBox_ChoseRecBaudRate = new QComboBox(gridLayoutWidget_6);
        comboBox_ChoseRecBaudRate->setObjectName("comboBox_ChoseRecBaudRate");
        comboBox_ChoseRecBaudRate->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        gridLayout_8->addWidget(comboBox_ChoseRecBaudRate, 0, 1, 1, 1);

        comboBox_ChoseRecParityBits = new QComboBox(gridLayoutWidget_6);
        comboBox_ChoseRecParityBits->setObjectName("comboBox_ChoseRecParityBits");
        comboBox_ChoseRecParityBits->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    min-height: 24px;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    selection-background-color: #007AFF;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px; /* \344\270\213\346\213\211\346\214\211\351\222"
                        "\256\345\256\275\345\272\246 */\n"
"    border-left: 1px solid #CCCCCC;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/Pic/down_arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));

        gridLayout_8->addWidget(comboBox_ChoseRecParityBits, 3, 1, 1, 1);

        label_35 = new QLabel(gridLayoutWidget_6);
        label_35->setObjectName("label_35");
        label_35->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_35, 3, 0, 1, 1);

        label_36 = new QLabel(gridLayoutWidget_6);
        label_36->setObjectName("label_36");
        label_36->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    background-color: transparent; /* \346\227\240\350\203\214\346\231\257 */\n"
"    padding: 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));
        label_36->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_36, 4, 0, 1, 1);

        pushButton_OpenRecPort = new QPushButton(gridLayoutWidget_6);
        pushButton_OpenRecPort->setObjectName("pushButton_OpenRecPort");
        pushButton_OpenRecPort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #F5F5F5, stop:1 #E0E0E0); /* \344\270\212\346\265\205\344\270\213\346\267\261\347\232\204\346\270\220\345\217\230 */\n"
"    color: #000000; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #B0B0B0; /* \346\214\211\351\222\256\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 8px; /* macOS \351\243\216\346\240\274\347\232\204\345\234\206\350\247\222\346\214\211\351\222\256 */\n"
"    padding: 5px 15px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \351\273\230\350\256\244\345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    min-height: 28px\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0,"
                        " x2:0, y2:1, stop:0 #EDEDED, stop:1 #D8D8D8); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\270\220\345\217\230 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #D0D0D0, stop:1 #B0B0B0); /* \346\214\211\344\270\213\346\227\266\346\270\220\345\217\230 */\n"
"    border: 1px solid #909090; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #F0F0F0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #A0A0A0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #D0D0D0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
""));

        gridLayout_8->addWidget(pushButton_OpenRecPort, 4, 1, 1, 1);

        plainTextEdit_SendMessage = new QPlainTextEdit(centralwidget);
        plainTextEdit_SendMessage->setObjectName("plainTextEdit_SendMessage");
        plainTextEdit_SendMessage->setGeometry(QRect(10, 390, 351, 91));
        plainTextEdit_SendMessage->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 8px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPlainTextEdit:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QScrollBar:vertical {\n"
"    background-color: #E1E1E1; /* \346\273\232\345\212\250\346\235\241\350\203\214\346\231"
                        "\257\351\242\234\350\211\262 */\n"
"    width: 12px; /* \346\273\232\345\212\250\346\235\241\345\256\275\345\272\246 */\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #BEBEBE; /* \346\273\232\345\212\250\346\235\241\347\232\204\346\211\213\346\237\204\351\242\234\350\211\262 */\n"
"    border-radius: 6px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none; /* \345\216\273\346\216\211\346\273\232\345\212\250\346\235\241\347\232\204\344\270\212\344\270\213\347\256\255\345\244\264 */\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background-color: #E1E1E1;\n"
"    height: 12px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background-color: #BEBEBE;\n"
"    border-radius: 6px;\n"
"    min-width: 20px;\n"
"}\n"
""));
        plainTextEdit_RecMessage = new QPlainTextEdit(centralwidget);
        plainTextEdit_RecMessage->setObjectName("plainTextEdit_RecMessage");
        plainTextEdit_RecMessage->setGeometry(QRect(370, 390, 351, 181));
        plainTextEdit_RecMessage->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #F4F4F4; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\346\234\254 */\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 8px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPlainTextEdit:focus {\n"
"    border: 1px solid #007AFF; /* \347\204\246\347\202\271\346\227\266\347\232\204\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QScrollBar:vertical {\n"
"    background-color: #E1E1E1; /* \346\273\232\345\212\250\346\235\241\350\203\214\346\231"
                        "\257\351\242\234\350\211\262 */\n"
"    width: 12px; /* \346\273\232\345\212\250\346\235\241\345\256\275\345\272\246 */\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #BEBEBE; /* \346\273\232\345\212\250\346\235\241\347\232\204\346\211\213\346\237\204\351\242\234\350\211\262 */\n"
"    border-radius: 6px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none; /* \345\216\273\346\216\211\346\273\232\345\212\250\346\235\241\347\232\204\344\270\212\344\270\213\347\256\255\345\244\264 */\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background-color: #E1E1E1;\n"
"    height: 12px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background-color: #BEBEBE;\n"
"    border-radius: 6px;\n"
"    min-width: 20px;\n"
"}\n"
""));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(20, 490, 171, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Send = new QPushButton(verticalLayoutWidget_3);
        pushButton_Send->setObjectName("pushButton_Send");
        pushButton_Send->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #F5F5F5, stop:1 #E0E0E0); /* \344\270\212\346\265\205\344\270\213\346\267\261\347\232\204\346\270\220\345\217\230 */\n"
"    color: #000000; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #B0B0B0; /* \346\214\211\351\222\256\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 8px; /* macOS \351\243\216\346\240\274\347\232\204\345\234\206\350\247\222\346\214\211\351\222\256 */\n"
"    padding: 5px 15px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \351\273\230\350\256\244\345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    min-height: 28px\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0,"
                        " x2:0, y2:1, stop:0 #EDEDED, stop:1 #D8D8D8); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\270\220\345\217\230 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #D0D0D0, stop:1 #B0B0B0); /* \346\214\211\344\270\213\346\227\266\346\270\220\345\217\230 */\n"
"    border: 1px solid #909090; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #F0F0F0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #A0A0A0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #D0D0D0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_Send);

        pushButton_Clean = new QPushButton(verticalLayoutWidget_3);
        pushButton_Clean->setObjectName("pushButton_Clean");
        pushButton_Clean->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #F5F5F5, stop:1 #E0E0E0); /* \344\270\212\346\265\205\344\270\213\346\267\261\347\232\204\346\270\220\345\217\230 */\n"
"    color: #000000; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #B0B0B0; /* \346\214\211\351\222\256\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 8px; /* macOS \351\243\216\346\240\274\347\232\204\345\234\206\350\247\222\346\214\211\351\222\256 */\n"
"    padding: 5px 15px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Helvetica Neue\", Helvetica, Arial, sans-serif; /* macOS \351\273\230\350\256\244\345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    min-height: 28px\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0,"
                        " x2:0, y2:1, stop:0 #EDEDED, stop:1 #D8D8D8); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\270\220\345\217\230 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #D0D0D0, stop:1 #B0B0B0); /* \346\214\211\344\270\213\346\227\266\346\270\220\345\217\230 */\n"
"    border: 1px solid #909090; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #F0F0F0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #A0A0A0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #D0D0D0; /* \347\246\201\347\224\250\347\212\266\346\200\201\344\270\213\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_Clean);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\344\270\262\345\217\243\351\200\211\346\213\251:", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215:", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207:", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215:", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\346\223\215\344\275\234:", nullptr));
        pushButton_OpenSendPort->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\344\270\262\345\217\243\351\200\211\346\213\251:", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215:", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215:", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207:", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215:", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\346\223\215\344\275\234:", nullptr));
        pushButton_OpenRecPort->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        pushButton_Clean->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
