#include "network.h"

void ServerStartup()
{
    MainWindow gui;

    QTcpServer *serv = new QTcpServer();

    QObject::connect(serv, &QTcpServer::newConnection, [serv, &gui] { qDebug() << "[+] New connection."; gui.newUserGui(); });

    serv->listen(QHostAddress::Any, 8787);
}