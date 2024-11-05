 #include "mainwindow.h"

#include <QApplication>
#include <QHBoxLayout>
#include <QPushButton>
#include <QIcon>
#include <QToolBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("QtSerialPortHelper");
    w.show();
    return a.exec();
}
