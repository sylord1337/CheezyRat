#include "network.h"

void Network::ClientStartup()
{
    qDebug() << "Client started";

    socket = new QTcpSocket();

    socket->connectToHost("fxtun.dev", 10004);
    QObject::connect(socket, &QTcpSocket::connected, this, &Network::onConnect);
    connectionSuccess = socket->waitForConnected(10000);

    while(!connectionSuccess)
    {
        qDebug() << "Connection to server timeout, retry in 15sec";

        Sleep(5000);

        socket->connectToHost("fxtun.dev", 10004);
        connectionSuccess = socket->waitForConnected(10000);
        if(connectionSuccess)
        {
            break;
        }
    }
}

void Network::onConnect()
{
    qDebug() << "Connect to server success";
    QObject::connect(socket, &QTcpSocket::readyRead, this, &Network::onReadReady);
}

void Network::onDisconnect()
{
    qDebug() << "Disconnected from server, retry connect";
    Network::ClientStartup();
}

void Network::onReadReady()
{
    qDebug() << "Data from server received";
}