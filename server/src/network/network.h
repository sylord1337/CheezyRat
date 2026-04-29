#pragma once
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QList>
//#include "../../gui/mainwindow.h"
#include "../client_class/client.h"

class Network : public QObject {
    Q_OBJECT
public:
    void ServerStartup();
    void onConnect();

private:
    int connections = 0;
    QTcpServer *serv;
    QList<Client*> clients;
};
