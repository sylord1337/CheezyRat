#include "../gui/mainwindow.h"
#include "network/network.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServerStartup();
    // MainWindow w;
    // w.show();
    return QCoreApplication::exec();
}
