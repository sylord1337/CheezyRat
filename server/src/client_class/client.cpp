#include "client.h"

Client::Client(QTcpSocket *client_socket, int id) : socket(client_socket), connectionId(id)
{
    QObject::connect(client_socket, &QTcpSocket::readyRead, this, &Client::onReadReady);
    QObject::connect(client_socket, &QTcpSocket::disconnected, this, &Client::onDisconnect);
}

void Client::onReadReady()
{
    qDebug() << "[+] client ready read with id: " << connectionId;
}

void Client::onDisconnect()
{
    socket->deleteLater();
    qDebug() << "[+] client disconnect with id: " << connectionId;
}