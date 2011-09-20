#include "tcpreceiver.h"

TCPReceiver::TCPReceiver(QObject *parent) :
    QObject(parent)
{
    port = 4444;

    client = new QTcpSocket();

    connect(client, SIGNAL(connected()), this, SLOT(newConnection()));
    connect(client, SIGNAL(disconnected()), this, SLOT(endConnection()), Qt::QueuedConnection);
    connect(client, SIGNAL(readyRead()), this, SLOT(clientReadString()), Qt::QueuedConnection);
}

/**
 * Set port to listen on
 */
void TCPReceiver::setPort(quint16 _port)
{
    port = _port;
}

/**
 * Set remote host
 */
void TCPReceiver::setHost(QString _host)
{
    host = _host;
}

/**
 * Start the connection with the remote host
 */
void TCPReceiver::start()
{
    stop();

    client->connectToHost(host, port);
}

/**
 * Stop the connection
 */
void TCPReceiver::stop()
{
    if (client->state() != QAbstractSocket::UnconnectedState) {
        client->disconnectFromHost();
        if (client->state() != QAbstractSocket::UnconnectedState) {
            client->waitForDisconnected();
        }
    }
}

/**
 * Set up the client tcp socket for an incoming connection
 */
void TCPReceiver::newConnection()
{
    emit connectionReady();
}

/**
 * Disconnect client connection
 */
void TCPReceiver::endConnection()
{
    emit connectionNotReady();
}

/**
 * Send the string to the client
 */
void TCPReceiver::clientWriteString(QByteArray buffer)
{
    if (client) {
        client->write(buffer);
    }
}

/**
 * Receive a string from the client
 */
QByteArray TCPReceiver::clientReadString()
{
    if (client) {
        QByteArray buffer = client->read(1024*1024);
        emit stringRead(buffer);
        return buffer;
    } else {
        return "";
    }
}
