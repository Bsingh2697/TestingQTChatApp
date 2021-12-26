/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msg_receiver;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *sendbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QString::fromUtf8("Server"));
        Server->resize(467, 267);
        centralwidget = new QWidget(Server);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        msg_receiver = new QTextBrowser(centralwidget);
        msg_receiver->setObjectName(QString::fromUtf8("msg_receiver"));

        verticalLayout->addWidget(msg_receiver);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        sendbutton = new QPushButton(centralwidget);
        sendbutton->setObjectName(QString::fromUtf8("sendbutton"));

        horizontalLayout->addWidget(sendbutton);


        verticalLayout->addLayout(horizontalLayout);

        Server->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Server);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 467, 22));
        Server->setMenuBar(menubar);
        statusbar = new QStatusBar(Server);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Server->setStatusBar(statusbar);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QMainWindow *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
        sendbutton->setText(QCoreApplication::translate("Server", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
