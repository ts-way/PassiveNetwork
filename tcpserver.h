#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>

class TCPServer : public QObject
{
Q_OBJECT
public:
    explicit TCPServer(QObject *parent = 0);
    void setPort(quint16);
    void start();

    QString getRemoteIp();
    quint16 getRemotePort();

    QTcpServer server;
    quint16 port;

    QTcpSocket *client;

signals:
    void stringRead(QByteArray);
    void connectionError(QString);
    void connectionReady();
    void connectionNotReady();

public slots:
    void newConnection();
    void endConnection();
    void clientWriteString(QByteArray);
    QByteArray clientReadString();
    void stop();
    void clientStop();

private:

};

#endif // TCPSERVER_H
