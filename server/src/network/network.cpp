#include "network.h"

void ServerStartup()
{
    QTcpServer *serv = new QTcpServer();
    serv->listen(QHostAddress::Any, 8787);
}