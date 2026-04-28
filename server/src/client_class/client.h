#pragma once
#include <QtNetwork/QTcpSocket>

class Client : public QObject {
    Q_OBJECT
public:
    Client(QTcpSocket *client_socket, int id);

private slots:
    void onReadReady();
    void onDisconnect();

private:
    int connectionId;
    QTcpSocket *socket;
};