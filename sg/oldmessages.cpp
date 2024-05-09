#include "oldmessages.h"
#include "ui_oldmessages.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

OldMessages::OldMessages(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OldMessages)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->oldButton, SIGNAL(clicked()), this, SLOT(old_msg()));
    user_now = mainWindow->getUserAccount();
}

OldMessages::~OldMessages()
{
    delete ui;
}

void OldMessages::old_msg()
{
    fstream messageFile;
    string sender, recipient, message, date, time;
    string line;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }
    qDebug() << "User account: " << user_now.c_str();

    messageFile.open("message.txt", ios::in);
    if (!messageFile)
        return;

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

        if(sender == user_now) {
            allMessages += "Sender: " + QString::fromStdString(sender) + "\n" +
                           "Recipient: " + QString::fromStdString(recipient) + "\n" +
                           "Message: " + QString::fromStdString(message) + "\n" +
                           "Date: " + QString::fromStdString(date) + "\n" +
                           "Time: " + QString::fromStdString(time) + "\n\n";
        }
    }
    ui->textEdit->setText(allMessages);
    messageFile.close();
}