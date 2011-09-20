#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    senderHexEdit = new QHexEdit(this);
    receiverHexEdit = new QHexEdit(this);

    senderHexEdit->setAddressWidth(2);
    receiverHexEdit->setAddressWidth(2);

    ui->gridLayout_7->addWidget(senderHexEdit);
    ui->gridLayout_8->addWidget(receiverHexEdit);

    passAllSender = false;
    passAllReceiver = false;

    senderFollow = true;
    receiverFollow = true;

    senderLexer = NULL;
    receiverLexer = NULL;

    ui->senderMessageList->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->receiverMessageList->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->senderScintilla->setWrapMode(QsciScintilla::WrapWord);
    ui->receiverScintilla->setWrapMode(QsciScintilla::WrapWord);

    ui->senderScintilla->setMarginLineNumbers(1, true);
    ui->receiverScintilla->setMarginLineNumbers(1, true);

    // status labels
    statusConnected = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status: <span style=\" font-weight:600; color:#00aa00;\">connected</span></p></body></html>";
    statusNotConnected = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status: <span style=\" font-weight:600; color:#ff0000;\">not connected</span></p></body></html>";
    statusBlocked = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status: <span style=\" font-weight:600; color:#00aa00;\">connected (<span style=\" font-weight:600; color:#ff0000;\">message blocked</span>)</span></p></body></html>";

    // errors
    connect(&server, SIGNAL(connectionError(QString)), this, SLOT(displayErrorMessage(QString)));

    // read
    connect(&server, SIGNAL(stringRead(QByteArray)), this, SLOT(senderStringRead(QByteArray)));
    connect(&receiver, SIGNAL(stringRead(QByteArray)), this, SLOT(receiverStringRead(QByteArray)));

    // write
    connect(this, SIGNAL(senderStringWrote(QByteArray)), &server, SLOT(clientWriteString(QByteArray)));
    connect(this, SIGNAL(receiverStringWrote(QByteArray)), &receiver, SLOT(clientWriteString(QByteArray)));

    // connections
    connect(&server, SIGNAL(connectionReady()), this, SLOT(senderConnectionReady()));
    connect(&server, SIGNAL(connectionNotReady()), this, SLOT(senderConnectionNotReady()));
    connect(&receiver, SIGNAL(connectionReady()), this, SLOT(receiverConnectionReady()));
    connect(&receiver, SIGNAL(connectionNotReady()), this, SLOT(receiverConnectionNotReady()));

    // timer
    //timer.setSingleShot(true);
    //connect(&timer, SIGNAL(timeout()), this, SLOT(updateMessageSelection()));
    //timer.start(10000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

/**
 * Display network errors via a MessageBox
 */
void MainWindow::displayErrorMessage(QString error)
{
    QMessageBox::critical(this, "Connection error", error);
}

/**
 * Check if the sender is the GUI
 */
bool MainWindow::senderIsGUI()
{
    if (ui->senderHostCombo->currentText().compare("GUI") == 0)
        return true;
    else
        return false;
}

/**
 * Check if the receiver is the GUI
 */
bool MainWindow::receiverIsGUI()
{
    if (ui->receiverHostCombo->currentText().compare("GUI") == 0)
        return true;
    else
        return false;
}

/**
 * Check if the sender tab is hexEditor
 */
bool MainWindow::senderIsHexEditor()
{
    if (ui->senderTabWidget->currentIndex() == 1)
        return true;
    else
        return false;
}

/**
 * Check if the receiver tab is hexEditor
 */
bool MainWindow::receiverIsHexEditor()
{
    if (ui->receiverTabWidget->currentIndex() == 1)
        return true;
    else
        return false;
}


/**
 * Start or stop the connections
 */
void MainWindow::on_connectButton_toggled(bool checked)
{
    // start connections
    if(checked) {

        // start connections
        if (receiverIsGUI()) {
            receiverConnectionReady();
        } else {
            receiver.setHost(ui->receiverHostCombo->currentText());
            receiver.setPort(ui->receiverPortSpin->value());
        }

        if (senderIsGUI()) {
            senderConnectionReady();
        } else {
            server.setPort(ui->senderPortSpin->value());
            server.start();
        }

        // disable connection groups
        ui->senderConnectionOptionGroup->setEnabled(false);
        ui->receiverConnectionOptionGroup->setEnabled(false);
    }

    // stop connections
    else {

        // stop connections
        if (senderIsGUI()) {
            senderConnectionNotReady();
        } else {
            server.stop();
        }

        if (receiverIsGUI()) {
            receiverConnectionNotReady();
        } else {
            receiver.stop();
        }

        // enable connection groups
        ui->senderConnectionOptionGroup->setEnabled(true);
        ui->receiverConnectionOptionGroup->setEnabled(true);
    }
}

/**
 * Return a key for the sender message
 * Format: "host(:port):message_number
 */
QString MainWindow::getSenderKey() {
    QString key;

    if (senderIsGUI()) {
        key.append("GUI");
    } else {
        key.append(server.getRemoteIp() + ":" + QString::number(server.getRemotePort()));
    }

    key.append(":" + QString::number(ui->senderMessageList->count()+1));

    return key;
}

/**
 * Return a key for the receiver message
 * Format: "host(:port):message_number
 */
QString MainWindow::getReceiverKey() {
    QString key;

    key.append(ui->receiverHostCombo->currentText());

    if (receiverIsGUI() == false) {
        key.append(":" + QString::number(ui->receiverPortSpin->value()));
    }

    key.append(":" + QString::number(ui->receiverMessageList->count()+1));

    return key;
}

/**
 * Save sender just read buffer
 */
void MainWindow::senderStringRead(QByteArray buffer)
{    
    QString key = getSenderKey();

    // replace the message
    for (int i=0; i < ui->senderRegexpReplaceList->count(); i++) {
        QRegExp reg = QRegExp(ui->senderRegexpReplaceList->item(i)->text().split(" -- ").at(0));

        if(QString(buffer).contains(reg)) {
            buffer = QString(buffer).replace(reg, ui->senderRegexpReplaceList->item(i)->text().split(" -- ").at(1)).toUtf8();
        }
    }

    // save
    senderMessages.insert(key, buffer);
    ui->senderMessageList->addItem(key);

    // if follow select last message in the GUI
    if (senderFollow && ui->senderMessageList->count() > 0) {
        ui->senderMessageList->blockSignals( true );

        ui->senderMessageList->setCurrentRow(ui->senderMessageList->count()-1);

        ui->senderScintilla->setText(QString(buffer));
        senderHexEdit->setData(buffer);

        ui->senderMessageList->blockSignals( false );
    }

    // if pass all sender... pass sender message to the receiver :)
    if (passAllSender) {

        bool block = false;

        // check if we must block the stream
        for (int i=0; i < ui->senderRegexpBlockList->count(); i++) {
            QRegExp reg = QRegExp(ui->senderRegexpBlockList->item(i)->text());

            if(QString(buffer).contains(reg)) {
                block = true;
                ui->senderStatusLabel->setText(statusBlocked);
                ui->senderPassRequestButton->setEnabled(true);
            }
        }

        // pass the buffer
        if (block == false) {
            receiverStringWrite(buffer);
        }
    }
}

/**
 * Save receiver just read buffer
 */
void MainWindow::receiverStringRead(QByteArray buffer)
{
    QString key = getReceiverKey();

    // replace the message
    for (int i=0; i < ui->receiverRegexpReplaceList->count(); i++) {
        QRegExp reg = QRegExp(ui->receiverRegexpReplaceList->item(i)->text().split(" -- ").at(0));

        if(QString(buffer).contains(reg)) {
            buffer = QString(buffer).replace(reg, ui->receiverRegexpReplaceList->item(i)->text().split(" -- ").at(1)).toUtf8();
        }
    }

    // save
    receiverMessages.insert(key, buffer);
    ui->receiverMessageList->addItem(key);

    // if follow select last message in the GUI
    if (receiverFollow && ui->receiverMessageList->count() > 0) {
        ui->receiverMessageList->blockSignals( true );

        ui->receiverMessageList->setCurrentRow(ui->receiverMessageList->count()-1);

        ui->receiverScintilla->setText(QString(buffer));
        receiverHexEdit->setData(buffer);

        ui->receiverMessageList->blockSignals( false );
    }

    // if pass all receiver... pass receiver message to the sender :)
    if (passAllReceiver) {

        bool block = false;

        // check if we must block the stream
        for (int i=0; i < ui->receiverRegexpBlockList->count(); i++) {
            QRegExp reg = QRegExp(ui->receiverRegexpBlockList->item(i)->text());

            if(QString(buffer).contains(reg)) {
                block = true;
                ui->receiverStatusLabel->setText(statusBlocked);
                ui->receiverPassResponseButton->setEnabled(true);
            }
        }

        // pass the buffer
        if (block == false) {
            senderStringWrite(buffer);
        }
    }
}

/**
 * Send string to the sender
 */
void MainWindow::senderStringWrite(QByteArray buffer)
{
    emit senderStringWrote(buffer);
}

/**
 * Send string to the receiver
 */
void MainWindow::receiverStringWrite(QByteArray buffer)
{
    emit receiverStringWrote(buffer);
}

/**
 * Pass a single sender request
 */
void MainWindow::on_senderPassRequestButton_clicked()
{
    QByteArray buffer;

    if (senderIsHexEditor()) {
        buffer = senderHexEdit->data();
    } else {
        buffer = ui->senderScintilla->text().toUtf8();
    }

    QString key;
    QByteArray original;

    if (ui->senderMessageList->currentItem()) {
        key = ui->senderMessageList->currentItem()->text();
        original = senderMessages[key];
    }

    // request modified
    if(QString(buffer).compare(QString(original)) != 0) {
        senderStringRead(buffer);
        receiverStringWrite(buffer);
    }

    // request not modified
    else {
        receiverStringWrite(original);
    }

    // if only this request was blocked
    if (passAllSender) {
        ui->senderStatusLabel->setText(statusConnected);
        ui->senderPassRequestButton->setEnabled(false);
    }
}

/**
 * Pass a single receiver request
 */
void MainWindow::on_receiverPassResponseButton_clicked()
{
    QByteArray buffer;

    if (receiverIsHexEditor()) {
        buffer = receiverHexEdit->data();
    } else {
        buffer = ui->receiverScintilla->text().toUtf8();
    }

    QString key;
    QByteArray original;

    if (ui->receiverMessageList->currentItem()) {
        key = ui->receiverMessageList->currentItem()->text();
        original = receiverMessages[key];
    }

    // response modified
    if(QString(buffer).compare(QString(original)) != 0) {
        receiverStringRead(buffer);
        senderStringWrite(buffer);
    }

    // response not modified
    else {
        senderStringWrite(original);
    }

    // if only this response was blocked
    if (passAllReceiver) {
        ui->receiverStatusLabel->setText(statusConnected);
        ui->receiverPassResponseButton->setEnabled(false);
    }
}

/**
 * Display the selected sender message
 */
void MainWindow::on_senderMessageList_itemSelectionChanged()
{
    QString key = ui->senderMessageList->currentItem()->text();
    QByteArray buffer = senderMessages[key];

    ui->senderScintilla->setText(QString(buffer));
    senderHexEdit->setData(buffer);
}

/**
 * Display the selected receiver message
 */
void MainWindow::on_receiverMessageList_itemSelectionChanged()
{
    QString key = ui->receiverMessageList->currentItem()->text();
    QByteArray buffer = receiverMessages[key];

    ui->receiverScintilla->setText(QString(buffer));
    receiverHexEdit->setData(buffer);
}


/**
 * Enable disable senderConnectionGroup, i.e. the sender is the GUI or not
 */
void MainWindow::on_senderConnectionOptionGroup_toggled(bool checked)
{
    static int prev_index = 0;

    if(checked == false) {
        prev_index = ui->senderHostCombo->currentIndex();
        ui->senderHostCombo->setCurrentIndex(1);
    } else {
        ui->senderHostCombo->setCurrentIndex(prev_index);
    }
}

/**
 * Enable disable receiverConnectionGroup, i.e. the receiver is the GUI or not
 */
void MainWindow::on_receiverConnectionOptionGroup_toggled(bool checked)
{
    static int prev_index = 0;

    if(checked == false) {
        prev_index = ui->receiverHostCombo->currentIndex();
        ui->receiverHostCombo->setCurrentIndex(1);
    } else {
        ui->receiverHostCombo->setCurrentIndex(prev_index);
    }
}

/**
 * Set sender syntax highlight
 */
void MainWindow::on_senderSyntaxHighlightCombo_currentIndexChanged(QString type)
{
    if(senderLexer)
        senderLexer->deleteLater();

    if (type == "HTML")
        senderLexer = new QsciLexerHTML();
    else if (type == "bash")
        senderLexer = new QsciLexerBash();
    else if (type == "batch")
        senderLexer = new QsciLexerBatch();
    else if (type == "cmake")
        senderLexer = new QsciLexerCMake();
    else if (type == "c++")
        senderLexer = new QsciLexerCPP();
    else if (type == "CSS")
        senderLexer = new QsciLexerCSS();
    else if (type == "d")
        senderLexer = new QsciLexerD();
    else if (type == "diff")
        senderLexer = new QsciLexerDiff();
    else if (type == "fortran")
        senderLexer = new QsciLexerFortran();
    else if (type == "lua")
        senderLexer = new QsciLexerLua();
    else if (type == "makefile")
        senderLexer = new QsciLexerMakefile();
    else if (type == "pascal")
        senderLexer = new QsciLexerPascal();
    else if (type == "perl")
        senderLexer = new QsciLexerPerl();
    else if (type == "postscript")
        senderLexer = new QsciLexerPostScript();
    else if (type == "POV")
        senderLexer = new QsciLexerPOV();
    else if (type == "properties")
        senderLexer = new QsciLexerProperties();
    else if (type == "python")
        senderLexer = new QsciLexerPython();
    else if (type == "ruby")
        senderLexer = new QsciLexerRuby();
    else if (type == "spice")
        senderLexer = new QsciLexerSpice();
    else if (type == "SQL")
        senderLexer = new QsciLexerSQL();
    else if (type == "TCL")
        senderLexer = new QsciLexerTCL();
    else if (type == "tex")
        senderLexer = new QsciLexerTeX();
    else if (type == "verilog")
        senderLexer = new QsciLexerVerilog();
    else if (type == "VHDL")
        senderLexer = new QsciLexerVHDL();
    else if (type == "YAML")
        senderLexer = new QsciLexerYAML();
    else
        senderLexer = NULL;

    ui->senderScintilla->setLexer(senderLexer);
}

/**
 * Set receiver syntax highlight
 */
void MainWindow::on_receiverSyntaxHighlightCombo_currentIndexChanged(QString type)
{
    if(receiverLexer)
        receiverLexer->deleteLater();

    if (type == "HTML")
        receiverLexer = new QsciLexerHTML();
    else if (type == "bash")
        receiverLexer = new QsciLexerBash();
    else if (type == "batch")
        receiverLexer = new QsciLexerBatch();
    else if (type == "cmake")
        receiverLexer = new QsciLexerCMake();
    else if (type == "c++")
        receiverLexer = new QsciLexerCPP();
    else if (type == "CSS")
        receiverLexer = new QsciLexerCSS();
    else if (type == "d")
        receiverLexer = new QsciLexerD();
    else if (type == "diff")
        receiverLexer = new QsciLexerDiff();
    else if (type == "fortran")
        receiverLexer = new QsciLexerFortran();
    else if (type == "lua")
        receiverLexer = new QsciLexerLua();
    else if (type == "makefile")
        receiverLexer = new QsciLexerMakefile();
    else if (type == "pascal")
        receiverLexer = new QsciLexerPascal();
    else if (type == "perl")
        receiverLexer = new QsciLexerPerl();
    else if (type == "postscript")
        receiverLexer = new QsciLexerPostScript();
    else if (type == "POV")
        receiverLexer = new QsciLexerPOV();
    else if (type == "properties")
        receiverLexer = new QsciLexerProperties();
    else if (type == "python")
        receiverLexer = new QsciLexerPython();
    else if (type == "ruby")
        receiverLexer = new QsciLexerRuby();
    else if (type == "spice")
        receiverLexer = new QsciLexerSpice();
    else if (type == "SQL")
        receiverLexer = new QsciLexerSQL();
    else if (type == "TCL")
        receiverLexer = new QsciLexerTCL();
    else if (type == "tex")
        receiverLexer = new QsciLexerTeX();
    else if (type == "verilog")
        receiverLexer = new QsciLexerVerilog();
    else if (type == "VHDL")
        receiverLexer = new QsciLexerVHDL();
    else if (type == "YAML")
        receiverLexer = new QsciLexerYAML();
    else
        receiverLexer = NULL;

    ui->receiverScintilla->setLexer(receiverLexer);
}

/**
 * Sender connection is ready:
 * Enable sender GUI and update status label
 */
void MainWindow::senderConnectionReady()
{
    ui->senderStatusLabel->setText(statusConnected);

    if (ui->forwardOnlyButton->isChecked() == false) {
        ui->senderPassRequestButton->setEnabled(true);
        ui->senderPassAllButton->setEnabled(true);
    }

    receiver.start();
}

/**
 * Receiver connection is ready:
 * Enable receiver GUI and update status label
 */
void MainWindow::receiverConnectionReady()
{
    ui->receiverStatusLabel->setText(statusConnected);

    if (ui->forwardOnlyButton->isChecked() == false) {
        ui->receiverPassResponseButton->setEnabled(true);
        ui->receiverPassAllButton->setEnabled(true);
    }
}

/**
 * Sender connection is not ready:
 * Disable sender GUI, update status label, and reconnect
 */
void MainWindow::senderConnectionNotReady()
{
    ui->senderStatusLabel->setText(statusNotConnected);
    ui->senderPassAllButton->setEnabled(false);
    ui->senderPassRequestButton->setEnabled(false);

    // disconnect receiver
    if (reconnectMutex.tryLock()) {
        receiver.stop();
        reconnectMutex.unlock();
    }
}

/**
 * Receiver connection is not ready:
 * Disable receiver GUI, update status label, and reconnect
 */
void MainWindow::receiverConnectionNotReady()
{
    ui->receiverStatusLabel->setText(statusNotConnected);
    ui->receiverPassAllButton->setEnabled(false);
    ui->receiverPassResponseButton->setEnabled(false);

    // if sender is GUI reconnect
    if (senderIsGUI()) {
        receiver.stop();
    }

    // disconnect sender
    if (reconnectMutex.tryLock()) {
        server.clientStop();
        reconnectMutex.unlock();
    }
}

/**
 * Delete sender selected item
 */
void MainWindow::on_senderDeleteItemButton_clicked()
{
    QListWidgetItem *item;

    ui->senderMessageList->blockSignals(true);

    item = ui->senderMessageList->currentItem();

    if (item) {
        senderMessages.remove(item->text());
        delete item;
    }

    ui->senderMessageList->blockSignals(false);
}

/**
 * Delete receiver selected item
 */
void MainWindow::on_receiverDeleteItemButton_clicked()
{
    QListWidgetItem *item;

    ui->receiverMessageList->blockSignals(true);

    item = ui->receiverMessageList->currentItem();

    if (item) {
        receiverMessages.remove(item->text());
        delete item;
    }

    ui->receiverMessageList->blockSignals(false);
}

/**
 * Pass all sender requests
 */
void MainWindow::on_senderPassAllButton_toggled(bool checked)
{
    if (checked) {
        passAllSender = true;
        ui->senderPassRequestButton->setEnabled(false);
    } else {
        passAllSender = false;
        ui->senderPassRequestButton->setEnabled(true);
    }
}

/**
 * Pass all receiver responses
 */
void MainWindow::on_receiverPassAllButton_toggled(bool checked)
{
    if (checked) {
        passAllReceiver = true;
        ui->receiverPassResponseButton->setEnabled(false);
    } else {
        passAllReceiver = false;
        ui->receiverPassResponseButton->setEnabled(true);
    }
}

/**
 * Follow sender request stream in the GUI
 */
void MainWindow::on_senderFollowButton_toggled(bool checked)
{
    if (checked) {
        senderFollow = true;
    } else {
        senderFollow = false;
    }
}

/**
 * Follow receiver response stream in the GUI
 */
void MainWindow::on_receiverFollowButton_toggled(bool checked)
{
    if (checked) {
        receiverFollow = true;
    } else {
        receiverFollow = false;
    }
}

/**
 * Forward every message
 */
void MainWindow::on_forwardOnlyButton_toggled(bool checked)
{
    if (checked) {
        passAllSender = true;
        passAllReceiver = true;

        ui->senderPassAllButton->setEnabled(false);
        ui->receiverPassAllButton->setEnabled(false);
        ui->senderPassRequestButton->setEnabled(false);
        ui->receiverPassResponseButton->setEnabled(false);
    }

    else {
        passAllSender = false;
        passAllReceiver = false;

        if (ui->connectButton->isChecked()) {

            if (ui->senderStatusLabel->text() == statusConnected) {
                ui->senderPassAllButton->setEnabled(true);
                ui->senderPassRequestButton->setEnabled(true);
            }

            if (ui->receiverStatusLabel->text() == statusConnected) {
                ui->receiverPassAllButton->setEnabled(true);
                ui->receiverPassResponseButton->setEnabled(true);
            }
        }
    }
}

/**
 * Add a block regexp (sender)
 */
void MainWindow::on_senderRegexpBlockAdd_clicked()
{
    ui->senderRegexpBlockList->addItem(ui->senderRegexpBlockEdit->text());
}

/**
 * Remove a block regexp (sender)
 */
void MainWindow::on_senderRegexpBlockRemove_clicked()
{
    if (ui->senderRegexpBlockList->currentItem()) {
        delete ui->senderRegexpBlockList->currentItem();
    }
}

/**
 * Add a block regexp (receiver)
 */
void MainWindow::on_receiverRegexpBlockAdd_clicked()
{
    ui->receiverRegexpBlockList->addItem(ui->receiverRegexpBlockEdit->text());
}

/**
 * Remove a block regexp (receiver)
 */
void MainWindow::on_receiverRegexpBlockRemove_clicked()
{
    if (ui->receiverRegexpBlockList->currentItem()) {
        delete ui->receiverRegexpBlockList->currentItem();
    }
}

/**
 * Add a replace regexp (sender)
 */
void MainWindow::on_senderRegexpReplaceAdd_clicked()
{
    ui->senderRegexpReplaceList->addItem(ui->senderRegexpSearchEdit->text() +
                                         " -- " +
                                         ui->senderRegexpReplaceEdit->text());
}

/**
 * Remove a replace regexp (sender)
 */
void MainWindow::on_senderRegexpReplaceRemove_clicked()
{
    if (ui->senderRegexpReplaceList->currentItem()) {
        delete ui->senderRegexpReplaceList->currentItem();
    }
}

/**
 * Add a replace regexp (receiver)
 */
void MainWindow::on_receiverRegexpReplaceAdd_clicked()
{
    ui->receiverRegexpReplaceList->addItem(ui->receiverRegexpSearchEdit->text() +
                                           " -- " +
                                           ui->receiverRegexpReplaceEdit->text());
}

/**
 * Remove a replace regexp (receiver)
 */
void MainWindow::on_receiverRegexpReplaceRemove_clicked()
{
    if (ui->receiverRegexpReplaceList->currentItem()) {
        delete ui->receiverRegexpReplaceList->currentItem();
    }
}

/**
 * Display application info
 */
void MainWindow::displayInfo()
{
    QMessageBox::about(this, "Info", "<strong>PassiveNetwork v1.0</strong><br /><br />Developed by Emanuele Acri (<a href= \"mailto:crossbower@gmail.com\">crossbower@gmail.com</a>)<br />Project site: <a href= \"https://github.com/TigerSecurity/PassiveNetwork\">https://github.com/TigerSecurity/PassiveNetwork</a>");
}

/**
 * Display application help
 */
void MainWindow::displayHelp()
{
    QMessageBox::about(this, "Help", "PassiveNetwork is very easy to use:<br /><br />The <strong>Sender</strong> represents the client. You can listen for connections on a local port, or simulate the client with GUI.<br /><br />The <strong>Receiver</strong> represents the server. You can connect to a remote service, or use GUI to simulate it.<br /><br />To intercept or manipulate data you can use various features:<br /><br /><strong>RegExp Block</strong> stops the automatic forwarding of matched messages. When a message is blocked you can modify it before passing it.<br /><br /><strong>RegExp Replace</strong> automatically modifies data stream according to the configured regular expressions.<br /><br />We tried to make PassiveNetwork as intuitive as possible: <em>feel free to experiment with the various features</em>! ;)");
}

/**
 * Save current session
 */
void MainWindow::saveSession()
{
    QString filename = QFileDialog::getSaveFileName(this,
        tr("Save current session"), "", tr("PassiveNetwork File (*.pn *)"));

    if (filename.isEmpty())
        return;

    QFile file(filename);
    file.open(QIODevice::WriteOnly);

    QDataStream out(&file);

    // save connection data
    out << ui->senderConnectionOptionGroup->isChecked();
    out << ui->senderSocketTypeCombo->currentText();
    out << ui->senderHostCombo->currentText();
    out << ui->senderPortSpin->value();
    out << ui->receiverConnectionOptionGroup->isChecked();
    out << ui->receiverSocketTypeCombo->currentText();
    out << ui->receiverHostCombo->currentText();
    out << ui->receiverPortSpin->value();

    // save messages
    QStringList list;

    out << senderMessages;
    out << receiverMessages;

    // save block regexps
    for (int i=0; i<ui->senderRegexpBlockList->count(); i++) {
        list.append(ui->senderRegexpBlockList->item(i)->text());
    }

    out << list;

    list.clear();

    for (int i=0; i<ui->receiverRegexpBlockList->count(); i++) {
        list.append(ui->receiverRegexpBlockList->item(i)->text());
    }

    out << list;

    list.clear();

    // save replace regexps

    for (int i=0; i<ui->senderRegexpReplaceList->count(); i++) {
        list.append(ui->senderRegexpReplaceList->item(i)->text());
    }

    out << list;

    list.clear();

    for (int i=0; i<ui->receiverRegexpReplaceList->count(); i++) {
        list.append(ui->receiverRegexpReplaceList->item(i)->text());
    }

    out << list;

    list.clear();


}

/**
 * Load previous session
 */
void MainWindow::loadSession()
{
    if (ui->connectButton->isChecked()) {
        ui->connectButton->toggle();
    }

    QString filename = QFileDialog::getOpenFileName(this,
        tr("Load saved session"), "", tr("PassiveNetwork File (*.pn *)"));

    if (filename.isEmpty())
        return;

    QFile file(filename);
    file.open(QIODevice::ReadOnly);

    QDataStream out(&file);

    // read connection data
    QString tstr;
    int tint;
    bool tbool;

    out >> tbool;
    ui->senderConnectionOptionGroup->setChecked(tbool);
    out >> tstr;
    ui->senderSocketTypeCombo->addItem(tstr);
    ui->senderSocketTypeCombo->setCurrentIndex(ui->senderSocketTypeCombo->count()-1);
    out >> tstr;
    ui->senderHostCombo->addItem(tstr);
    ui->senderHostCombo->setCurrentIndex(ui->senderHostCombo->count()-1);
    out >> tint;
    ui->senderPortSpin->setValue(tint);
    out >> tbool;
    ui->receiverConnectionOptionGroup->setChecked(tbool);
    out >> tstr;
    ui->receiverSocketTypeCombo->addItem(tstr);
    ui->receiverSocketTypeCombo->setCurrentIndex(ui->receiverSocketTypeCombo->count()-1);
    out >> tstr;
    ui->receiverHostCombo->addItem(tstr);
    ui->receiverHostCombo->setCurrentIndex(ui->receiverHostCombo->count()-1);
    out >> tint;
    ui->receiverPortSpin->setValue(tint);

    // read messages
    QStringList list;

    out >> senderMessages;
    out >> receiverMessages;

    ui->senderMessageList->clear();
    ui->receiverMessageList->clear();

    QMap<QString, QByteArray>::iterator i;

    for (i = senderMessages.begin(); i != senderMessages.end(); ++i)
        ui->senderMessageList->addItem(i.key());

    for (i = receiverMessages.begin(); i != receiverMessages.end(); ++i)
        ui->receiverMessageList->addItem(i.key());

    // load block regexps
    out >> list;

    for (int i=0; i<list.count(); i++) {
        ui->senderRegexpBlockList->addItem(list.at(i));
    }

    list.clear();

    out >> list;

    for (int i=0; i<list.count(); i++) {
        ui->receiverRegexpBlockList->addItem(list.at(i));
    }

    list.clear();

    // load replace regexps

    out >> list;

    for (int i=0; i<list.count(); i++) {
        ui->senderRegexpReplaceList->addItem(list.at(i));
    }

    list.clear();

    out >> list;

    for (int i=0; i<list.count(); i++) {
        ui->receiverRegexpReplaceList->addItem(list.at(i));
    }

    list.clear();

}
