#include "recentmessages.h"
#include "ui_recentmessages.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QDebug>
#include <QMessageBox>
#include <sstream>
using namespace std;

RecentMessages::RecentMessages(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RecentMessages)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->recentButton, SIGNAL(clicked()), this, SLOT(recent_msg()));
    user_now = mainWindow->getUserAccount();
    ptrRep = new Rep(mainWindow);
}

RecentMessages::~RecentMessages()
{
    delete ptrRep;
    delete ui;
}

void RecentMessages::recent_msg() {
    qDebug() << "Recent Messages";
    int a = 0;
    fstream messageFile;
    string line, sender, recipient, message, date, time;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }
    qDebug() << "User account: " << user_now.c_str();

    messageFile.open("message.txt", ios::in);
    if (!messageFile) {
        ui->textEdit->setText("\n\n\n Database is Empty...");
    } else {
        QString allMessages;
        while (getline(messageFile, line)) {
            istringstream iss(line);
            if (!(iss >> sender >> recipient)) { break; } // error

            // read the rest of the line into 'message'
            getline(iss, message);

            // remove leading spaces from 'message'
            message.erase(message.begin(), find_if(message.begin(), message.end(), [](unsigned char ch) {
                return !isspace(ch);
            }));

            // split 'message' into 'message' and 'date' 'time'
            size_t last_space = message.rfind(' ');
            time = message.substr(last_space + 1);
            message.erase(last_space);
            last_space = message.rfind(' ');
            date = message.substr(last_space + 1);
            message.erase(last_space);

            if (recipient == user_now) {
                a++;
                allMessages += "Sender: " + QString::fromStdString(sender) + "\n" +
                               "Recipient: " + QString::fromStdString(recipient) + "\n" +
                               "Message: " + QString::fromStdString(message) + "\n" +
                               "Date: " + QString::fromStdString(date) + "\n" +
                               "Time: " + QString::fromStdString(time) + "\n\n";
            }
        }
        ui->textEdit->setText(allMessages);
        ui->textEdit->append("Have " + QString::number(a) + " Message");
        if (a != 0) {
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Reply", "Do You Want to Add a Reply?",
                                            QMessageBox::Yes|QMessageBox::No);
            if (reply == QMessageBox::Yes) {
                on_REP_clicked();
            }
        } else {
            ui->textEdit->setText("No Message");
        }
        messageFile.close();
    }
}

void RecentMessages::on_REP_clicked()
{
    ptrRep->show();
}

