#ifndef TCPSERVERTHREAD_H
#define TCPSERVERTHREAD_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>

class TCPServerThread : public QObject
{
Q_OBJECT
public:
    explicit TCPServerThread(QObject *parent = 0);
    void setPort(quint16);
    void start();

    QTcpServer server;
    QTcpSocket *client;
    int sock;
    quint16 port;

signals:
    void stringRead(QString);
    void connectionError(QString);

public slots:
    void newConnection();
    void endConnection();
    void clientWriteString(QString);
    QString clientReadString();
    void stop();

private:

};

#endif // TCPSERVERTHREAD_H
