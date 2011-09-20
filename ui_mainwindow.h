/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Sep 20 23:19:26 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Qsci/qsciscintilla.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPassiveNetwork_help;
    QAction *action_Info;
    QAction *actionE_xit;
    QAction *action_Save;
    QAction *action_Open;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *senderConnectionOptionGroup;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QComboBox *senderSocketTypeCombo;
    QComboBox *senderHostCombo;
    QSpinBox *senderPortSpin;
    QLabel *senderStatusLabel;
    QGroupBox *receiverConnectionOptionGroup;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *receiverSocketTypeCombo;
    QComboBox *receiverHostCombo;
    QSpinBox *receiverPortSpin;
    QLabel *receiverStatusLabel;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *connectButton;
    QPushButton *forwardOnlyButton;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QListWidget *senderMessageList;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *senderDeleteItemButton;
    QPushButton *senderFollowButton;
    QTabWidget *senderTabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QsciScintilla *senderScintilla;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_7;
    QTabWidget *receiverTabWidget;
    QWidget *tab_7;
    QGridLayout *gridLayout_3;
    QsciScintilla *receiverScintilla;
    QWidget *tab_8;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_8;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_10;
    QListWidget *receiverMessageList;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *receiverDeleteItemButton;
    QPushButton *receiverFollowButton;
    QHBoxLayout *horizontalLayout_9;
    QTabWidget *senderTab;
    QWidget *tab;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *senderPassAllButton;
    QPushButton *senderPassRequestButton;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *senderRegexpBlockList;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *senderRegexpBlockEdit;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *senderRegexpBlockRemove;
    QPushButton *senderRegexpBlockAdd;
    QWidget *tab_5;
    QHBoxLayout *horizontalLayout_10;
    QListWidget *senderRegexpReplaceList;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_3;
    QLineEdit *senderRegexpSearchEdit;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_4;
    QLineEdit *senderRegexpReplaceEdit;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *senderRegexpReplaceRemove;
    QPushButton *senderRegexpReplaceAdd;
    QWidget *tab_6;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *senderSyntaxHighlightCombo;
    QSpacerItem *verticalSpacer_3;
    QTabWidget *receiverTab;
    QWidget *tab_13;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_21;
    QSpacerItem *verticalSpacer_5;
    QPushButton *receiverPassAllButton;
    QPushButton *receiverPassResponseButton;
    QWidget *tab_14;
    QHBoxLayout *horizontalLayout_8;
    QListWidget *receiverRegexpBlockList;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_16;
    QLineEdit *receiverRegexpBlockEdit;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *receiverRegexpBlockRemove;
    QPushButton *receiverRegexpBlockAdd;
    QWidget *tab_15;
    QHBoxLayout *horizontalLayout_11;
    QListWidget *receiverRegexpReplaceList;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_18;
    QLineEdit *receiverRegexpSearchEdit;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_19;
    QLineEdit *receiverRegexpReplaceEdit;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *receiverRegexpReplaceRemove;
    QPushButton *receiverRegexpReplaceAdd;
    QWidget *tab_16;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_20;
    QComboBox *receiverSyntaxHighlightCombo;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1198, 607);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/gnome-fs-network.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"	border: none;\n"
"}"));
        actionPassiveNetwork_help = new QAction(MainWindow);
        actionPassiveNetwork_help->setObjectName(QString::fromUtf8("actionPassiveNetwork_help"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/gtk-help.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPassiveNetwork_help->setIcon(icon1);
        action_Info = new QAction(MainWindow);
        action_Info->setObjectName(QString::fromUtf8("action_Info"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Info->setIcon(icon2);
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/filesaveas.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/fileopen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_11 = new QVBoxLayout(centralWidget);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        senderConnectionOptionGroup = new QGroupBox(centralWidget);
        senderConnectionOptionGroup->setObjectName(QString::fromUtf8("senderConnectionOptionGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(senderConnectionOptionGroup->sizePolicy().hasHeightForWidth());
        senderConnectionOptionGroup->setSizePolicy(sizePolicy);
        senderConnectionOptionGroup->setCheckable(true);
        verticalLayout_7 = new QVBoxLayout(senderConnectionOptionGroup);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        senderSocketTypeCombo = new QComboBox(senderConnectionOptionGroup);
        senderSocketTypeCombo->setObjectName(QString::fromUtf8("senderSocketTypeCombo"));
        senderSocketTypeCombo->setEnabled(false);

        horizontalLayout->addWidget(senderSocketTypeCombo);

        senderHostCombo = new QComboBox(senderConnectionOptionGroup);
        senderHostCombo->setObjectName(QString::fromUtf8("senderHostCombo"));
        senderHostCombo->setEditable(true);

        horizontalLayout->addWidget(senderHostCombo);

        senderPortSpin = new QSpinBox(senderConnectionOptionGroup);
        senderPortSpin->setObjectName(QString::fromUtf8("senderPortSpin"));
        senderPortSpin->setMaximum(65535);
        senderPortSpin->setValue(4444);

        horizontalLayout->addWidget(senderPortSpin);


        verticalLayout_7->addLayout(horizontalLayout);

        senderStatusLabel = new QLabel(senderConnectionOptionGroup);
        senderStatusLabel->setObjectName(QString::fromUtf8("senderStatusLabel"));

        verticalLayout_7->addWidget(senderStatusLabel);


        horizontalLayout_4->addWidget(senderConnectionOptionGroup);

        receiverConnectionOptionGroup = new QGroupBox(centralWidget);
        receiverConnectionOptionGroup->setObjectName(QString::fromUtf8("receiverConnectionOptionGroup"));
        sizePolicy.setHeightForWidth(receiverConnectionOptionGroup->sizePolicy().hasHeightForWidth());
        receiverConnectionOptionGroup->setSizePolicy(sizePolicy);
        receiverConnectionOptionGroup->setCheckable(true);
        receiverConnectionOptionGroup->setChecked(false);
        verticalLayout_8 = new QVBoxLayout(receiverConnectionOptionGroup);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        receiverSocketTypeCombo = new QComboBox(receiverConnectionOptionGroup);
        receiverSocketTypeCombo->setObjectName(QString::fromUtf8("receiverSocketTypeCombo"));
        receiverSocketTypeCombo->setEnabled(false);

        horizontalLayout_2->addWidget(receiverSocketTypeCombo);

        receiverHostCombo = new QComboBox(receiverConnectionOptionGroup);
        receiverHostCombo->setObjectName(QString::fromUtf8("receiverHostCombo"));
        receiverHostCombo->setEditable(true);

        horizontalLayout_2->addWidget(receiverHostCombo);

        receiverPortSpin = new QSpinBox(receiverConnectionOptionGroup);
        receiverPortSpin->setObjectName(QString::fromUtf8("receiverPortSpin"));
        receiverPortSpin->setMaximum(65535);
        receiverPortSpin->setValue(4445);

        horizontalLayout_2->addWidget(receiverPortSpin);


        verticalLayout_8->addLayout(horizontalLayout_2);

        receiverStatusLabel = new QLabel(receiverConnectionOptionGroup);
        receiverStatusLabel->setObjectName(QString::fromUtf8("receiverStatusLabel"));

        verticalLayout_8->addWidget(receiverStatusLabel);


        horizontalLayout_4->addWidget(receiverConnectionOptionGroup);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        connectButton = new QPushButton(groupBox_3);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setCheckable(true);

        horizontalLayout_5->addWidget(connectButton);

        forwardOnlyButton = new QPushButton(groupBox_3);
        forwardOnlyButton->setObjectName(QString::fromUtf8("forwardOnlyButton"));
        forwardOnlyButton->setCheckable(true);

        horizontalLayout_5->addWidget(forwardOnlyButton);


        horizontalLayout_4->addWidget(groupBox_3);


        verticalLayout_11->addLayout(horizontalLayout_4);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        senderMessageList = new QListWidget(layoutWidget);
        senderMessageList->setObjectName(QString::fromUtf8("senderMessageList"));
        senderMessageList->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(senderMessageList->sizePolicy().hasHeightForWidth());
        senderMessageList->setSizePolicy(sizePolicy1);
        senderMessageList->setMinimumSize(QSize(0, 0));

        verticalLayout_9->addWidget(senderMessageList);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        senderDeleteItemButton = new QPushButton(layoutWidget);
        senderDeleteItemButton->setObjectName(QString::fromUtf8("senderDeleteItemButton"));

        horizontalLayout_12->addWidget(senderDeleteItemButton);

        senderFollowButton = new QPushButton(layoutWidget);
        senderFollowButton->setObjectName(QString::fromUtf8("senderFollowButton"));
        senderFollowButton->setCheckable(true);
        senderFollowButton->setChecked(true);

        horizontalLayout_12->addWidget(senderFollowButton);


        verticalLayout_9->addLayout(horizontalLayout_12);

        splitter->addWidget(layoutWidget);
        senderTabWidget = new QTabWidget(splitter);
        senderTabWidget->setObjectName(QString::fromUtf8("senderTabWidget"));
        senderTabWidget->setTabPosition(QTabWidget::South);
        senderTabWidget->setTabShape(QTabWidget::Triangular);
        senderTabWidget->setElideMode(Qt::ElideNone);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        senderScintilla = new QsciScintilla(tab_3);
        senderScintilla->setObjectName(QString::fromUtf8("senderScintilla"));
        senderScintilla->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(senderScintilla->sizePolicy().hasHeightForWidth());
        senderScintilla->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(senderScintilla, 0, 0, 1, 1);

        senderTabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));

        gridLayout_5->addLayout(gridLayout_7, 0, 0, 1, 1);

        senderTabWidget->addTab(tab_4, QString());
        splitter->addWidget(senderTabWidget);
        receiverTabWidget = new QTabWidget(splitter);
        receiverTabWidget->setObjectName(QString::fromUtf8("receiverTabWidget"));
        receiverTabWidget->setTabPosition(QTabWidget::South);
        receiverTabWidget->setTabShape(QTabWidget::Triangular);
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_3 = new QGridLayout(tab_7);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        receiverScintilla = new QsciScintilla(tab_7);
        receiverScintilla->setObjectName(QString::fromUtf8("receiverScintilla"));
        receiverScintilla->setEnabled(true);
        sizePolicy2.setHeightForWidth(receiverScintilla->sizePolicy().hasHeightForWidth());
        receiverScintilla->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(receiverScintilla, 0, 0, 1, 1);

        receiverTabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_6 = new QGridLayout(tab_8);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));

        gridLayout_6->addLayout(gridLayout_8, 0, 0, 1, 1);

        receiverTabWidget->addTab(tab_8, QString());
        splitter->addWidget(receiverTabWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_10 = new QVBoxLayout(layoutWidget1);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        receiverMessageList = new QListWidget(layoutWidget1);
        receiverMessageList->setObjectName(QString::fromUtf8("receiverMessageList"));
        receiverMessageList->setEnabled(true);
        sizePolicy1.setHeightForWidth(receiverMessageList->sizePolicy().hasHeightForWidth());
        receiverMessageList->setSizePolicy(sizePolicy1);

        verticalLayout_10->addWidget(receiverMessageList);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        receiverDeleteItemButton = new QPushButton(layoutWidget1);
        receiverDeleteItemButton->setObjectName(QString::fromUtf8("receiverDeleteItemButton"));

        horizontalLayout_13->addWidget(receiverDeleteItemButton);

        receiverFollowButton = new QPushButton(layoutWidget1);
        receiverFollowButton->setObjectName(QString::fromUtf8("receiverFollowButton"));
        receiverFollowButton->setCheckable(true);
        receiverFollowButton->setChecked(true);

        horizontalLayout_13->addWidget(receiverFollowButton);


        verticalLayout_10->addLayout(horizontalLayout_13);

        splitter->addWidget(layoutWidget1);

        verticalLayout_11->addWidget(splitter);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        senderTab = new QTabWidget(centralWidget);
        senderTab->setObjectName(QString::fromUtf8("senderTab"));
        senderTab->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(senderTab->sizePolicy().hasHeightForWidth());
        senderTab->setSizePolicy(sizePolicy3);
        senderTab->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_19 = new QVBoxLayout(tab);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(9, 6, -1, 6);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setWordWrap(true);

        horizontalLayout_3->addWidget(label_13);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        senderPassAllButton = new QPushButton(tab);
        senderPassAllButton->setObjectName(QString::fromUtf8("senderPassAllButton"));
        senderPassAllButton->setEnabled(false);
        senderPassAllButton->setCheckable(true);

        verticalLayout_2->addWidget(senderPassAllButton);

        senderPassRequestButton = new QPushButton(tab);
        senderPassRequestButton->setObjectName(QString::fromUtf8("senderPassRequestButton"));
        senderPassRequestButton->setEnabled(false);

        verticalLayout_2->addWidget(senderPassRequestButton);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_19->addLayout(horizontalLayout_3);

        senderTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_6 = new QHBoxLayout(tab_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 6, -1, 6);
        senderRegexpBlockList = new QListWidget(tab_2);
        senderRegexpBlockList->setObjectName(QString::fromUtf8("senderRegexpBlockList"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(senderRegexpBlockList->sizePolicy().hasHeightForWidth());
        senderRegexpBlockList->setSizePolicy(sizePolicy4);
        senderRegexpBlockList->setMaximumSize(QSize(16777215, 124));

        horizontalLayout_6->addWidget(senderRegexpBlockList);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_4->addWidget(label_2);

        senderRegexpBlockEdit = new QLineEdit(tab_2);
        senderRegexpBlockEdit->setObjectName(QString::fromUtf8("senderRegexpBlockEdit"));

        verticalLayout_4->addWidget(senderRegexpBlockEdit);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        verticalLayout_4->addWidget(label_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        senderRegexpBlockRemove = new QPushButton(tab_2);
        senderRegexpBlockRemove->setObjectName(QString::fromUtf8("senderRegexpBlockRemove"));

        horizontalLayout_15->addWidget(senderRegexpBlockRemove);

        senderRegexpBlockAdd = new QPushButton(tab_2);
        senderRegexpBlockAdd->setObjectName(QString::fromUtf8("senderRegexpBlockAdd"));

        horizontalLayout_15->addWidget(senderRegexpBlockAdd);


        verticalLayout_4->addLayout(horizontalLayout_15);


        horizontalLayout_6->addLayout(verticalLayout_4);

        senderTab->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        horizontalLayout_10 = new QHBoxLayout(tab_5);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 6, -1, 6);
        senderRegexpReplaceList = new QListWidget(tab_5);
        senderRegexpReplaceList->setObjectName(QString::fromUtf8("senderRegexpReplaceList"));
        sizePolicy4.setHeightForWidth(senderRegexpReplaceList->sizePolicy().hasHeightForWidth());
        senderRegexpReplaceList->setSizePolicy(sizePolicy4);
        senderRegexpReplaceList->setMaximumSize(QSize(16777215, 124));

        horizontalLayout_10->addWidget(senderRegexpReplaceList);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_15->addWidget(label_3);

        senderRegexpSearchEdit = new QLineEdit(tab_5);
        senderRegexpSearchEdit->setObjectName(QString::fromUtf8("senderRegexpSearchEdit"));

        verticalLayout_15->addWidget(senderRegexpSearchEdit);


        horizontalLayout_18->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_16->addWidget(label_4);

        senderRegexpReplaceEdit = new QLineEdit(tab_5);
        senderRegexpReplaceEdit->setObjectName(QString::fromUtf8("senderRegexpReplaceEdit"));

        verticalLayout_16->addWidget(senderRegexpReplaceEdit);


        horizontalLayout_18->addLayout(verticalLayout_16);


        verticalLayout_6->addLayout(horizontalLayout_18);

        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setWordWrap(true);

        verticalLayout_6->addWidget(label_21);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        senderRegexpReplaceRemove = new QPushButton(tab_5);
        senderRegexpReplaceRemove->setObjectName(QString::fromUtf8("senderRegexpReplaceRemove"));

        horizontalLayout_19->addWidget(senderRegexpReplaceRemove);

        senderRegexpReplaceAdd = new QPushButton(tab_5);
        senderRegexpReplaceAdd->setObjectName(QString::fromUtf8("senderRegexpReplaceAdd"));

        horizontalLayout_19->addWidget(senderRegexpReplaceAdd);


        verticalLayout_6->addLayout(horizontalLayout_19);


        horizontalLayout_10->addLayout(verticalLayout_6);

        senderTab->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout = new QGridLayout(tab_6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 6, -1, 6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        senderSyntaxHighlightCombo = new QComboBox(tab_6);
        senderSyntaxHighlightCombo->setObjectName(QString::fromUtf8("senderSyntaxHighlightCombo"));

        verticalLayout->addWidget(senderSyntaxHighlightCombo);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        senderTab->addTab(tab_6, QString());

        horizontalLayout_9->addWidget(senderTab);

        receiverTab = new QTabWidget(centralWidget);
        receiverTab->setObjectName(QString::fromUtf8("receiverTab"));
        receiverTab->setEnabled(true);
        sizePolicy3.setHeightForWidth(receiverTab->sizePolicy().hasHeightForWidth());
        receiverTab->setSizePolicy(sizePolicy3);
        receiverTab->setTabShape(QTabWidget::Triangular);
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        horizontalLayout_14 = new QHBoxLayout(tab_13);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 6, -1, 6);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_15 = new QLabel(tab_13);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setWordWrap(true);

        horizontalLayout_7->addWidget(label_15);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_5);

        receiverPassAllButton = new QPushButton(tab_13);
        receiverPassAllButton->setObjectName(QString::fromUtf8("receiverPassAllButton"));
        receiverPassAllButton->setEnabled(false);
        receiverPassAllButton->setCheckable(true);

        verticalLayout_21->addWidget(receiverPassAllButton);

        receiverPassResponseButton = new QPushButton(tab_13);
        receiverPassResponseButton->setObjectName(QString::fromUtf8("receiverPassResponseButton"));
        receiverPassResponseButton->setEnabled(false);

        verticalLayout_21->addWidget(receiverPassResponseButton);


        horizontalLayout_7->addLayout(verticalLayout_21);


        horizontalLayout_14->addLayout(horizontalLayout_7);

        receiverTab->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QString::fromUtf8("tab_14"));
        horizontalLayout_8 = new QHBoxLayout(tab_14);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 6, -1, 6);
        receiverRegexpBlockList = new QListWidget(tab_14);
        receiverRegexpBlockList->setObjectName(QString::fromUtf8("receiverRegexpBlockList"));
        sizePolicy4.setHeightForWidth(receiverRegexpBlockList->sizePolicy().hasHeightForWidth());
        receiverRegexpBlockList->setSizePolicy(sizePolicy4);
        receiverRegexpBlockList->setMaximumSize(QSize(16777215, 124));

        horizontalLayout_8->addWidget(receiverRegexpBlockList);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_16 = new QLabel(tab_14);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setWordWrap(false);

        verticalLayout_12->addWidget(label_16);

        receiverRegexpBlockEdit = new QLineEdit(tab_14);
        receiverRegexpBlockEdit->setObjectName(QString::fromUtf8("receiverRegexpBlockEdit"));

        verticalLayout_12->addWidget(receiverRegexpBlockEdit);

        label_17 = new QLabel(tab_14);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setWordWrap(true);

        verticalLayout_12->addWidget(label_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        receiverRegexpBlockRemove = new QPushButton(tab_14);
        receiverRegexpBlockRemove->setObjectName(QString::fromUtf8("receiverRegexpBlockRemove"));

        horizontalLayout_16->addWidget(receiverRegexpBlockRemove);

        receiverRegexpBlockAdd = new QPushButton(tab_14);
        receiverRegexpBlockAdd->setObjectName(QString::fromUtf8("receiverRegexpBlockAdd"));

        horizontalLayout_16->addWidget(receiverRegexpBlockAdd);


        verticalLayout_12->addLayout(horizontalLayout_16);


        horizontalLayout_8->addLayout(verticalLayout_12);

        receiverTab->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QString::fromUtf8("tab_15"));
        horizontalLayout_11 = new QHBoxLayout(tab_15);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 6, -1, 6);
        receiverRegexpReplaceList = new QListWidget(tab_15);
        receiverRegexpReplaceList->setObjectName(QString::fromUtf8("receiverRegexpReplaceList"));
        sizePolicy4.setHeightForWidth(receiverRegexpReplaceList->sizePolicy().hasHeightForWidth());
        receiverRegexpReplaceList->setSizePolicy(sizePolicy4);
        receiverRegexpReplaceList->setMaximumSize(QSize(16777215, 124));

        horizontalLayout_11->addWidget(receiverRegexpReplaceList);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(3);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_18 = new QLabel(tab_15);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_3->addWidget(label_18);

        receiverRegexpSearchEdit = new QLineEdit(tab_15);
        receiverRegexpSearchEdit->setObjectName(QString::fromUtf8("receiverRegexpSearchEdit"));

        verticalLayout_3->addWidget(receiverRegexpSearchEdit);


        horizontalLayout_20->addLayout(verticalLayout_3);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        label_19 = new QLabel(tab_15);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_25->addWidget(label_19);

        receiverRegexpReplaceEdit = new QLineEdit(tab_15);
        receiverRegexpReplaceEdit->setObjectName(QString::fromUtf8("receiverRegexpReplaceEdit"));

        verticalLayout_25->addWidget(receiverRegexpReplaceEdit);


        horizontalLayout_20->addLayout(verticalLayout_25);


        verticalLayout_13->addLayout(horizontalLayout_20);

        label_22 = new QLabel(tab_15);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setWordWrap(true);

        verticalLayout_13->addWidget(label_22);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        receiverRegexpReplaceRemove = new QPushButton(tab_15);
        receiverRegexpReplaceRemove->setObjectName(QString::fromUtf8("receiverRegexpReplaceRemove"));

        horizontalLayout_21->addWidget(receiverRegexpReplaceRemove);

        receiverRegexpReplaceAdd = new QPushButton(tab_15);
        receiverRegexpReplaceAdd->setObjectName(QString::fromUtf8("receiverRegexpReplaceAdd"));

        horizontalLayout_21->addWidget(receiverRegexpReplaceAdd);


        verticalLayout_13->addLayout(horizontalLayout_21);


        horizontalLayout_11->addLayout(verticalLayout_13);

        receiverTab->addTab(tab_15, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QString::fromUtf8("tab_16"));
        gridLayout_4 = new QGridLayout(tab_16);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 6, -1, 6);
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        label_20 = new QLabel(tab_16);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_26->addWidget(label_20);

        receiverSyntaxHighlightCombo = new QComboBox(tab_16);
        receiverSyntaxHighlightCombo->setObjectName(QString::fromUtf8("receiverSyntaxHighlightCombo"));

        verticalLayout_26->addWidget(receiverSyntaxHighlightCombo);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_4);


        gridLayout_4->addLayout(verticalLayout_26, 0, 0, 1, 1);

        receiverTab->addTab(tab_16, QString());

        horizontalLayout_9->addWidget(receiverTab);


        verticalLayout_11->addLayout(horizontalLayout_9);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1198, 25));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Save);
        menu_File->addAction(action_Open);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menu_Help->addAction(actionPassiveNetwork_help);
        menu_Help->addAction(action_Info);

        retranslateUi(MainWindow);
        QObject::connect(actionE_xit, SIGNAL(activated()), MainWindow, SLOT(close()));
        QObject::connect(action_Info, SIGNAL(activated()), MainWindow, SLOT(displayInfo()));
        QObject::connect(actionPassiveNetwork_help, SIGNAL(activated()), MainWindow, SLOT(displayHelp()));
        QObject::connect(action_Save, SIGNAL(activated()), MainWindow, SLOT(saveSession()));
        QObject::connect(action_Open, SIGNAL(activated()), MainWindow, SLOT(loadSession()));

        receiverHostCombo->setCurrentIndex(1);
        senderMessageList->setCurrentRow(-1);
        senderTabWidget->setCurrentIndex(0);
        receiverTabWidget->setCurrentIndex(0);
        receiverMessageList->setCurrentRow(-1);
        senderTab->setCurrentIndex(0);
        receiverTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PassiveNetwork", 0, QApplication::UnicodeUTF8));
        actionPassiveNetwork_help->setText(QApplication::translate("MainWindow", "&Help Contents", 0, QApplication::UnicodeUTF8));
        action_Info->setText(QApplication::translate("MainWindow", "&Info", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("MainWindow", "&Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        senderConnectionOptionGroup->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The sender is the <span style=\" font-weight:600;\">client in the connection</span>.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You can either listen for clients on a <span style=\" font-weight:600;\">local port</span> or use directly the <span style=\" font-weight:600;\">GUI</span> to send messages to the receiver.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        senderConnectionOptionGroup->setTitle(QApplication::translate("MainWindow", "Sender connection", 0, QApplication::UnicodeUTF8));
        senderSocketTypeCombo->clear();
        senderSocketTypeCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "TCP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "UDP", 0, QApplication::UnicodeUTF8)
        );
        senderHostCombo->clear();
        senderHostCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "localhost", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "GUI", 0, QApplication::UnicodeUTF8)
        );
        senderStatusLabel->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status: <span style=\" font-weight:600; color:#ff0000;\">not connected</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        receiverConnectionOptionGroup->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The receiver is the <span style=\" font-weight:600;\">server in the connection</span>.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You can either connect to a <span style=\" font-weight:600;\">remote service</span> and forward sender's messages or use the <span style=\" font-weight:600;\">GUI</span> to receive and reply to them.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        receiverConnectionOptionGroup->setTitle(QApplication::translate("MainWindow", "Receiver connection", 0, QApplication::UnicodeUTF8));
        receiverSocketTypeCombo->clear();
        receiverSocketTypeCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "TCP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "UDP", 0, QApplication::UnicodeUTF8)
        );
        receiverHostCombo->clear();
        receiverHostCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "localhost", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "GUI", 0, QApplication::UnicodeUTF8)
        );
        receiverStatusLabel->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status: <span style=\" font-weight:600; color:#ff0000;\">not connected</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Controls", 0, QApplication::UnicodeUTF8));
        connectButton->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        forwardOnlyButton->setText(QApplication::translate("MainWindow", "Forward only", 0, QApplication::UnicodeUTF8));
        senderDeleteItemButton->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        senderFollowButton->setText(QApplication::translate("MainWindow", "Follow stream", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        senderScintilla->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        senderScintilla->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        senderTabWidget->setTabText(senderTabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Text Editor", 0, QApplication::UnicodeUTF8));
        senderTabWidget->setTabText(senderTabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Hex Editor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        receiverScintilla->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        receiverScintilla->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        receiverTabWidget->setTabText(receiverTabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Text Editor", 0, QApplication::UnicodeUTF8));
        receiverTabWidget->setTabText(receiverTabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Hex Editor", 0, QApplication::UnicodeUTF8));
        receiverDeleteItemButton->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        receiverFollowButton->setText(QApplication::translate("MainWindow", "Follow stream", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Automatically <span style=\" font-weight:600;\">forward all the requests</span>, or manually <span style=\" font-weight:600;\">pass/send one request</span> at a time</p></body></html>", 0, QApplication::UnicodeUTF8));
        senderPassAllButton->setText(QApplication::translate("MainWindow", "Forward all requests", 0, QApplication::UnicodeUTF8));
        senderPassRequestButton->setText(QApplication::translate("MainWindow", "Send current request", 0, QApplication::UnicodeUTF8));
        senderTab->setTabText(senderTab->indexOf(tab), QApplication::translate("MainWindow", "Controls", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Regular expression:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "<strong>Block the request</strong> when the regular expression matches:", 0, QApplication::UnicodeUTF8));
        senderRegexpBlockRemove->setText(QApplication::translate("MainWindow", "Remove", 0, QApplication::UnicodeUTF8));
        senderRegexpBlockAdd->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        senderTab->setTabText(senderTab->indexOf(tab_2), QApplication::translate("MainWindow", "RegExp Block", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Replace:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Automatically <strong>replace requests</strong> emitted by the sender:", 0, QApplication::UnicodeUTF8));
        senderRegexpReplaceRemove->setText(QApplication::translate("MainWindow", "Remove", 0, QApplication::UnicodeUTF8));
        senderRegexpReplaceAdd->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        senderTab->setTabText(senderTab->indexOf(tab_5), QApplication::translate("MainWindow", "RegExp Replace", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Syntax highlight:", 0, QApplication::UnicodeUTF8));
        senderSyntaxHighlightCombo->clear();
        senderSyntaxHighlightCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "none", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "HTML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "bash", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "batch", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "cmake", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "c++", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "CSS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "d", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "diff", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "fortran", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "lua", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "makefile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "pascal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "perl", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "postscript", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "POV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "properties", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "python", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ruby", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "spice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SQL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "TCL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "tex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "verilog", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "VHDL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "YAML", 0, QApplication::UnicodeUTF8)
        );
        senderTab->setTabText(senderTab->indexOf(tab_6), QApplication::translate("MainWindow", "Editor", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Samyak Oriya'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Automatically <span style=\" font-weight:600;\">forward all the responses</span>, or manually <span style=\" font-weight:600;\">pass/send one response</span> at a time</p></body></html>", 0, QApplication::UnicodeUTF8));
        receiverPassAllButton->setText(QApplication::translate("MainWindow", "Forward all responses", 0, QApplication::UnicodeUTF8));
        receiverPassResponseButton->setText(QApplication::translate("MainWindow", "Send current response", 0, QApplication::UnicodeUTF8));
        receiverTab->setTabText(receiverTab->indexOf(tab_13), QApplication::translate("MainWindow", "Controls", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Regular expression:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "<strong>Block the response</strong> when the regular expression matches:", 0, QApplication::UnicodeUTF8));
        receiverRegexpBlockRemove->setText(QApplication::translate("MainWindow", "Remove", 0, QApplication::UnicodeUTF8));
        receiverRegexpBlockAdd->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        receiverTab->setTabText(receiverTab->indexOf(tab_14), QApplication::translate("MainWindow", "RegExp Block", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Replace:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Automatically <strong>replace responses</strong> emitted by the receiver:", 0, QApplication::UnicodeUTF8));
        receiverRegexpReplaceRemove->setText(QApplication::translate("MainWindow", "Remove", 0, QApplication::UnicodeUTF8));
        receiverRegexpReplaceAdd->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        receiverTab->setTabText(receiverTab->indexOf(tab_15), QApplication::translate("MainWindow", "RegExp Replace", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Syntax highlight:", 0, QApplication::UnicodeUTF8));
        receiverSyntaxHighlightCombo->clear();
        receiverSyntaxHighlightCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "none", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "HTML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "bash", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "batch", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "cmake", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "c++", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "CSS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "d", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "diff", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "fortran", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "lua", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "makefile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "pascal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "perl", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "postscript", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "POV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "properties", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "python", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ruby", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "spice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SQL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "TCL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "tex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "verilog", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "VHDL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "YAML", 0, QApplication::UnicodeUTF8)
        );
        receiverTab->setTabText(receiverTab->indexOf(tab_16), QApplication::translate("MainWindow", "Editor", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
