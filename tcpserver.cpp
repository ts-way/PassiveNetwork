#include "tcpserver.h"

TCPServer::TCPServer(QObject *parent) :
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
void TCPServer::setPort(quint16 _port)
{
    port = _port;
}

/**
 * Start the server and wait for connections
 */
void TCPServer::start()
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
void TCPServer::stop()
{
    server.close();
    endConnection();
}

/**
 * Restart the client connection
 */
void TCPServer::clientStop()
{
    if (client) {

        if(client->state()) {
            client->disconnectFromHost();
            if (client->state() != QAbstractSocket::UnconnectedState) {
                client->waitForDisconnected();
            }
        }

        client->deleteLater();
        client = NULL;
    }
}

/**
 * Set up the client tcp socket for an incoming connection
 */
void TCPServer::newConnection()
{
    client = server.nextPendingConnection();
    connect(client, SIGNAL(disconnected()), this, SLOT(endConnection()), Qt::QueuedConnection);
    connect(client, SIGNAL(readyRead()), this, SLOT(clientReadString()), Qt::QueuedConnection);

    emit connectionReady();
}

/**
 * Disconnect client connection
 */
void TCPServer::endConnection()
{
    if (client) {
        client->deleteLater();
        client = NULL;
    }

    emit connectionNotReady();
}

/**
 * Send the string to the client
 */
void TCPServer::clientWriteString(QByteArray buffer)
{
    if (client) {
        client->write(buffer);
    }
}

/**
 * Receive a string from the client
 */
QByteArray TCPServer::clientReadString()
{
    if (client) {
        QByteArray buffer = client->read(1024*1024);
        emit stringRead(buffer);
        return buffer;
    } else {
        return "";
    }
}

/**
 * Get client IP
 */
QString TCPServer::getRemoteIp()
{
    if (client) {
        return client->peerAddress().toString();
    }

    return "";
}

/**
 * Get client port
 */
quint16 TCPServer::getRemotePort()
{
    if (client) {
        return client->peerPort();
    }

    return 0;
}
