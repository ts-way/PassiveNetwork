#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QMap>

#include <Qsci/qscilexer.h>
#include <Qsci/qscilexerbash.h>
#include <Qsci/qscilexerbatch.h>
#include <Qsci/qscilexercmake.h>
#include <Qsci/qscilexercpp.h>
#include <Qsci/qscilexercsharp.h>
#include <Qsci/qscilexercss.h>
#include <Qsci/qscilexercustom.h>
#include <Qsci/qscilexerd.h>
#include <Qsci/qscilexerdiff.h>
#include <Qsci/qscilexerfortran.h>
#include <Qsci/qscilexerfortran77.h>
#include <Qsci/qscilexerhtml.h>
#include <Qsci/qscilexeridl.h>
#include <Qsci/qscilexerjava.h>
#include <Qsci/qscilexerjavascript.h>
#include <Qsci/qscilexerlua.h>
#include <Qsci/qscilexermakefile.h>
#include <Qsci/qscilexerpascal.h>
#include <Qsci/qscilexerperl.h>
#include <Qsci/qscilexerpostscript.h>
#include <Qsci/qscilexerpov.h>
#include <Qsci/qscilexerproperties.h>
#include <Qsci/qscilexerpython.h>
#include <Qsci/qscilexerruby.h>
#include <Qsci/qscilexerspice.h>
#include <Qsci/qscilexersql.h>
#include <Qsci/qscilexertcl.h>
#include <Qsci/qscilexertex.h>
#include <Qsci/qscilexerverilog.h>
#include <Qsci/qscilexervhdl.h>
#include <Qsci/qscilexerxml.h>
#include <Qsci/qscilexeryaml.h>

#include <QFileDialog>

#include <QTimer>
#include <QMutex>

#include <tcpserver.h>
#include <tcpreceiver.h>

#include "qhexedit2/qhexedit.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString getSenderKey();
    QString getReceiverKey();

    bool senderIsGUI();
    bool receiverIsGUI();

    bool senderIsHexEditor();
    bool receiverIsHexEditor();

    TCPServer server;
    TCPReceiver receiver;

    bool passAllSender;
    bool passAllReceiver;

    bool senderFollow;
    bool receiverFollow;

    QHexEdit *senderHexEdit;
    QHexEdit *receiverHexEdit;

    QMap<QString, QByteArray> senderMessages;
    QMap<QString, QByteArray> receiverMessages;

    QsciLexer *senderLexer;
    QsciLexer *receiverLexer;

    QString statusConnected;
    QString statusNotConnected;
    QString statusBlocked;

    QTimer timer;

    QMutex reconnectMutex;

signals:
    void senderStringWrote(QByteArray);
    void receiverStringWrote(QByteArray);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

private slots:
    void on_receiverRegexpReplaceRemove_clicked();
    void on_receiverRegexpReplaceAdd_clicked();
    void on_senderRegexpReplaceRemove_clicked();
    void on_senderRegexpReplaceAdd_clicked();
    void on_receiverRegexpBlockRemove_clicked();
    void on_receiverRegexpBlockAdd_clicked();
    void on_senderRegexpBlockRemove_clicked();
    void on_senderRegexpBlockAdd_clicked();
    void on_connectButton_toggled(bool checked);
    void on_receiverDeleteItemButton_clicked();
    void on_forwardOnlyButton_toggled(bool checked);
    void on_receiverFollowButton_toggled(bool checked);
    void on_senderFollowButton_toggled(bool checked);
    void on_receiverPassAllButton_toggled(bool checked);
    void on_senderPassAllButton_toggled(bool checked);
    void on_senderDeleteItemButton_clicked();
    void on_receiverPassResponseButton_clicked();
    void on_receiverMessageList_itemSelectionChanged();
    void on_senderPassRequestButton_clicked();
    void on_receiverSyntaxHighlightCombo_currentIndexChanged(QString );
    void on_senderSyntaxHighlightCombo_currentIndexChanged(QString );
    void on_receiverConnectionOptionGroup_toggled(bool );
    void on_senderConnectionOptionGroup_toggled(bool );
    void on_senderMessageList_itemSelectionChanged();

    void displayInfo();
    void displayHelp();

    void saveSession();
    void loadSession();

    void displayErrorMessage(QString);

    void senderStringRead(QByteArray);
    void receiverStringRead(QByteArray);

    void senderStringWrite(QByteArray);
    void receiverStringWrite(QByteArray);

    void senderConnectionReady();
    void receiverConnectionReady();
    void senderConnectionNotReady();
    void receiverConnectionNotReady();
};

#endif // MAINWINDOW_H
