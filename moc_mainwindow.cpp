/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Sep 20 23:19:35 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      42,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   11,   11,   11, 0x08,
     115,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     192,   11,   11,   11, 0x08,
     228,   11,   11,   11, 0x08,
     267,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     340,   11,   11,   11, 0x08,
     382,  374,   11,   11, 0x08,
     413,   11,   11,   11, 0x08,
     451,  374,   11,   11, 0x08,
     486,  374,   11,   11, 0x08,
     524,  374,   11,   11, 0x08,
     560,  374,   11,   11, 0x08,
     599,  374,   11,   11, 0x08,
     636,   11,   11,   11, 0x08,
     672,   11,   11,   11, 0x08,
     712,   11,   11,   11, 0x08,
     758,   11,   11,   11, 0x08,
     795,   11,   11,   11, 0x08,
     856,   11,   11,   11, 0x08,
     915,   11,   11,   11, 0x08,
     962,   11,   11,   11, 0x08,
    1007,   11,   11,   11, 0x08,
    1051,   11,   11,   11, 0x08,
    1065,   11,   11,   11, 0x08,
    1079,   11,   11,   11, 0x08,
    1093,   11,   11,   11, 0x08,
    1107,   11,   11,   11, 0x08,
    1136,   11,   11,   11, 0x08,
    1165,   11,   11,   11, 0x08,
    1196,   11,   11,   11, 0x08,
    1226,   11,   11,   11, 0x08,
    1258,   11,   11,   11, 0x08,
    1282,   11,   11,   11, 0x08,
    1308,   11,   11,   11, 0x08,
    1335,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0senderStringWrote(QByteArray)\0"
    "receiverStringWrote(QByteArray)\0"
    "on_receiverRegexpReplaceRemove_clicked()\0"
    "on_receiverRegexpReplaceAdd_clicked()\0"
    "on_senderRegexpReplaceRemove_clicked()\0"
    "on_senderRegexpReplaceAdd_clicked()\0"
    "on_receiverRegexpBlockRemove_clicked()\0"
    "on_receiverRegexpBlockAdd_clicked()\0"
    "on_senderRegexpBlockRemove_clicked()\0"
    "on_senderRegexpBlockAdd_clicked()\0"
    "checked\0on_connectButton_toggled(bool)\0"
    "on_receiverDeleteItemButton_clicked()\0"
    "on_forwardOnlyButton_toggled(bool)\0"
    "on_receiverFollowButton_toggled(bool)\0"
    "on_senderFollowButton_toggled(bool)\0"
    "on_receiverPassAllButton_toggled(bool)\0"
    "on_senderPassAllButton_toggled(bool)\0"
    "on_senderDeleteItemButton_clicked()\0"
    "on_receiverPassResponseButton_clicked()\0"
    "on_receiverMessageList_itemSelectionChanged()\0"
    "on_senderPassRequestButton_clicked()\0"
    "on_receiverSyntaxHighlightCombo_currentIndexChanged(QString)\0"
    "on_senderSyntaxHighlightCombo_currentIndexChanged(QString)\0"
    "on_receiverConnectionOptionGroup_toggled(bool)\0"
    "on_senderConnectionOptionGroup_toggled(bool)\0"
    "on_senderMessageList_itemSelectionChanged()\0"
    "displayInfo()\0displayHelp()\0saveSession()\0"
    "loadSession()\0displayErrorMessage(QString)\0"
    "senderStringRead(QByteArray)\0"
    "receiverStringRead(QByteArray)\0"
    "senderStringWrite(QByteArray)\0"
    "receiverStringWrite(QByteArray)\0"
    "senderConnectionReady()\0"
    "receiverConnectionReady()\0"
    "senderConnectionNotReady()\0"
    "receiverConnectionNotReady()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: senderStringWrote((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: receiverStringWrote((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: on_receiverRegexpReplaceRemove_clicked(); break;
        case 3: on_receiverRegexpReplaceAdd_clicked(); break;
        case 4: on_senderRegexpReplaceRemove_clicked(); break;
        case 5: on_senderRegexpReplaceAdd_clicked(); break;
        case 6: on_receiverRegexpBlockRemove_clicked(); break;
        case 7: on_receiverRegexpBlockAdd_clicked(); break;
        case 8: on_senderRegexpBlockRemove_clicked(); break;
        case 9: on_senderRegexpBlockAdd_clicked(); break;
        case 10: on_connectButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: on_receiverDeleteItemButton_clicked(); break;
        case 12: on_forwardOnlyButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: on_receiverFollowButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: on_senderFollowButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: on_receiverPassAllButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: on_senderPassAllButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: on_senderDeleteItemButton_clicked(); break;
        case 18: on_receiverPassResponseButton_clicked(); break;
        case 19: on_receiverMessageList_itemSelectionChanged(); break;
        case 20: on_senderPassRequestButton_clicked(); break;
        case 21: on_receiverSyntaxHighlightCombo_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: on_senderSyntaxHighlightCombo_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: on_receiverConnectionOptionGroup_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: on_senderConnectionOptionGroup_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: on_senderMessageList_itemSelectionChanged(); break;
        case 26: displayInfo(); break;
        case 27: displayHelp(); break;
        case 28: saveSession(); break;
        case 29: loadSession(); break;
        case 30: displayErrorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: senderStringRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 32: receiverStringRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 33: senderStringWrite((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 34: receiverStringWrite((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 35: senderConnectionReady(); break;
        case 36: receiverConnectionReady(); break;
        case 37: senderConnectionNotReady(); break;
        case 38: receiverConnectionNotReady(); break;
        default: ;
        }
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::senderStringWrote(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::receiverStringWrote(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
