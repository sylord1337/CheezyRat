#include "network.h"

void ClientStartup()
{
    QTcpSocket *socket = new QTcpSocket();

    socket->connectToHost("fxtun.dev", 10004);

    if(socket->waitForConnected(3000))
    {
        qDebug() << "connected";
    }
}