/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created: Tue Sep 20 23:19:36 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tcpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TCPServer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      34,   10,   10,   10, 0x05,
      59,   10,   10,   10, 0x05,
      77,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   10,   10,   10, 0x0a,
     114,   10,   10,   10, 0x0a,
     130,   10,   10,   10, 0x0a,
     171,   10,  160,   10, 0x0a,
     190,   10,   10,   10, 0x0a,
     197,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TCPServer[] = {
    "TCPServer\0\0stringRead(QByteArray)\0"
    "connectionError(QString)\0connectionReady()\0"
    "connectionNotReady()\0newConnection()\0"
    "endConnection()\0clientWriteString(QByteArray)\0"
    "QByteArray\0clientReadString()\0stop()\0"
    "clientStop()\0"
};

const QMetaObject TCPServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TCPServer,
      qt_meta_data_TCPServer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TCPServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TCPServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TCPServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TCPServer))
        return static_cast<void*>(const_cast< TCPServer*>(this));
    return QObject::qt_metacast(_clname);
}

int TCPServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stringRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: connectionError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: connectionReady(); break;
        case 3: connectionNotReady(); break;
        case 4: newConnection(); break;
        case 5: endConnection(); break;
        case 6: clientWriteString((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: { QByteArray _r = clientReadString();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 8: stop(); break;
        case 9: clientStop(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TCPServer::stringRead(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPServer::connectionError(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TCPServer::connectionReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void TCPServer::connectionNotReady()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
