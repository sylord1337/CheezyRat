#include "network.h"

void Network::ServerStartup()
{
    //MainWindow *gui = new MainWindow();

    serv = new QTcpServer();

    QObject::connect(serv, &QTcpServer::newConnection, this, &Network::onConnect);

    serv->listen(QHostAddress::Any, 8787);
}

void Network::onConnect()
{
    connections++;
    QTcpSocket *client_socket = serv->nextPendingConnection();

    Client *client = new Client(client_socket, connections);
    clients.push_back(client);

    QObject::connect(client_socket, &QTcpSocket::disconnected, [client, this] {
        connections--;
        clients.removeOne(client);
        delete client;
        qDebug() << "[+] client class deleted";
    });

    QString ipAdr = client_socket->localAddress().toString();
    qDebug() << "[+] new connect, id: " << connections;
    qDebug() << "client ip: " << ipAdr;
}

