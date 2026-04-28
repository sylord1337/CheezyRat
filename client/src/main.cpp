#include "../gui/mainwindow.h"
#include "network/network.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<<< HEAD:server/src/main.cpp
    Network net;
    net.ServerStartup();
========
    ClientStartup();
>>>>>>>> client:client/src/main.cpp
    MainWindow w;
    w.show();
    return QCoreApplication::exec();
}
