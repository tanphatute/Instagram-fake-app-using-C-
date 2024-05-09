#include "messages.h"
#include "ui_messages.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>
#include <string>
#include <QDir>
#include <QDateTime>
using namespace std;
Messages::Messages(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Messages)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->messageButton, SIGNAL(clicked()), this, SLOT(message()));

    user_now = mainWindow->getUserAccount();
}

Messages::~Messages()
{
    delete ui;
}

void Messages::message() {
    fstream messageFile, blockFile, accountFile;
    string recipientUsername, message, user_account;
    string user, email, password, phone, dob, gender, privacy, follower, following;
    string line, u, f;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }
    qDebug() << "User account: " << user_now.c_str();

    recipientUsername = ui->userEdit->text().toStdString();

    if (recipientUsername == user_now) {
        QMessageBox::information(this, "Error", "You cannot send messages to yourself.");
        return;
    }

    accountFile.open("account.txt", ios::in);
    if (!accountFile)
    return;

    while (accountFile >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
        if (user == recipientUsername && privacy == "private") {
        QMessageBox::information(this, "Error", QString::fromStdString(recipientUsername) + " is a private user. You cannot send messages to them.");
        return;
        }
    }
    accountFile.close();

    blockFile.open("block.txt", ios::in);
    if (!blockFile)
        return;

    while (blockFile >> u >> f) {
        if ((recipientUsername == u && user_now == f) ||
            (user_now == u && recipientUsername == f)) {
            if (recipientUsername == u) {
                QMessageBox::information(this, "Error", QString::fromStdString(recipientUsername) + " is blocked.");
            } else {
                QMessageBox::information(this, "Error", "You have already blocked " + QString::fromStdString(recipientUsername) + ".");
            }
            return;
        }
    }
    blockFile.close();
    message = ui->lineEdit->text().toStdString();

    messageFile.open("message.txt", ios::app);
    if (!messageFile)
        return;

    QDateTime currentTime = QDateTime::currentDateTime();
    messageFile << user_now << " " << recipientUsername << " " << message << " " << currentTime.toString("dd/MM/yyyy hh:mm").toStdString() << "\n";
    messageFile.close();
    QMessageBox::information(this, "Success", "Message sent successfully.");
}
