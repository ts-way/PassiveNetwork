#ifndef TCPRECEIVER_H
#define TCPRECEIVER_H

#include <QObject>
#include <QTcpSocket>

class TCPReceiver : public QObject
{
Q_OBJECT
public:
    explicit TCPReceiver(QObject *parent = 0);
    void setPort(quint16);
    void setHost(QString);
    void start();

    QTcpSocket *client;
    QString host;
    quint16 port;

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

};

#endif // TCPRECEIVER_H
