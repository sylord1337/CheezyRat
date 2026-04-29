#pragma once
#include <QtNetwork/QTcpSocket>
#include <Windows.h>

class Network : public QObject {
    Q_OBJECT
public:
    void ClientStartup();
    void onConnect();
    void onDisconnect();
    void onReadReady();
private:
    bool connectionSuccess = false;
    QTcpSocket *socket;
};


