#include "network.h"

void ClientStartup()
{
    QTcpSocket *socket = new QTcpSocket();

    QHostAddress ip("https://noncryptically-suboblique-lakita.ngrok-free.dev");
    socket->connectToHost(ip, 8787);
}