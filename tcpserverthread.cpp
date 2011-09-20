#include "tcpserverthread.h"

TCPServerThread::TCPServerThread(QObject *parent) :
    QObject(parent)
{
    port = 4444;

    client = NULL;

    server.setMaxPendingConnections(1);

    connect(&server, SIGNAL(newConnection()), this, SLOT(newConnection()), Qt::QueuedConnection);
}

/**
 * Set port to listen on
 */
void TCPServerThread::setPort(quint16 _port)
{
    port = _port;
}

/**
 * Start the server and wait for connections
 */
void TCPServerThread::start()
{
    // listen on all addresses
    server.listen(QHostAddress::Any, port);

    if (!server.isListening()) {
        emit connectionError(server.errorString());
        return;
    }
}

/**
 * Stop the server and the connections
 */
void TCPServerThread::stop()
{
    server.close();
    endConnection();
}

/**
 * Set up the client tcp socket for an incoming connection
 */
void TCPServerThread::newConnection()
{
    if (client) {
        endConnection();
    }

    client = server.nextPendingConnection();
    connect(client, SIGNAL(disconnected()), client, SLOT(deleteLater()), Qt::QueuedConnection);
    connect(client, SIGNAL(readyRead()), this, SLOT(clientReadString()), Qt::QueuedConnection);
}

/**
 * Disconnect client connection
 */
void TCPServerThread::endConnection()
{
    if (client) {
        client->disconnectFromHost();
        client = NULL;
    }
}

/**
 * Send the string to the client
 */
void TCPServerThread::clientWriteString(QString buffer)
{
    if (client) {
        client->write(buffer.toAscii());
    }
}

/**
 * Receive a string from the client
 */
QString TCPServerThread::clientReadString()
{
    if (client) {
        QString string(client->read(1024*1024));
        emit stringRead(string);
        return string;
    } else {
        return "";
    }
}
