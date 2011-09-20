# -------------------------------------------------
# Project created by QtCreator 2011-09-02T09:29:32
# -------------------------------------------------
QT += network
TARGET = PassiveNetwork
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    tcpserver.cpp \
    tcpreceiver.cpp \
    qhexedit2/qhexedit_p.cpp \
    qhexedit2/qhexedit.cpp
HEADERS += mainwindow.h \
    tcpserver.h \
    tcpreceiver.h \
    qhexedit2/qhexedit.h \
    qhexedit2/qhexedit_p.h
FORMS += mainwindow.ui
LIBS += -lqscintilla2
RESOURCES += icons.qrc
