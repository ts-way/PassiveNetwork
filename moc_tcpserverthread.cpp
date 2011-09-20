/****************************************************************************
** Meta object code from reading C++ file 'tcpserverthread.h'
**
** Created: Fri Sep 2 12:05:45 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tcpserverthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserverthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TCPServerThread[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      37,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   16,   16,   16, 0x0a,
      78,   16,   16,   16, 0x0a,
      94,   16,   16,   16, 0x0a,
     129,   16,  121,   16, 0x0a,
     148,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TCPServerThread[] = {
    "TCPServerThread\0\0stringRead(QString)\0"
    "connectionError(QString)\0newConnection()\0"
    "endConnection()\0clientWriteString(QString)\0"
    "QString\0clientReadString()\0stop()\0"
};

const QMetaObject TCPServerThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TCPServerThread,
      qt_meta_data_TCPServerThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TCPServerThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TCPServerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TCPServerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TCPServerThread))
        return static_cast<void*>(const_cast< TCPServerThread*>(this));
    return QObject::qt_metacast(_clname);
}

int TCPServerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stringRead((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: connectionError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: newConnection(); break;
        case 3: endConnection(); break;
        case 4: clientWriteString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { QString _r = clientReadString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: stop(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TCPServerThread::stringRead(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPServerThread::connectionError(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
