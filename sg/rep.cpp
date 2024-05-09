#include "rep.h"
#include "ui_rep.h"
#include "mainwindow.h"
#include <QTextStream>
#include <QDateTime>
#include <QFile>
#include <fstream>
#include <QDebug>
#include <QMessageBox>
using namespace std;

Rep::Rep(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Rep)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->repButton, SIGNAL(clicked()), this, SLOT(on_REP_clicked()));
    user_now = mainWindow->getUserAccount();
}

Rep::~Rep()
{
    delete ui;
}

bool isRecipientValid(const QString& recipientUsername) {
    return true;
}

void Rep::on_REP_clicked()
{
    fstream messageFile, blockFile;
    string recipientUsername, message, user_account;
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
    if (messageFile.is_open()) {
        QDateTime currentTime = QDateTime::currentDateTime();
        messageFile << user_now << " " << recipientUsername << " " << message << " "
                    << currentTime.toString("dd/MM/yyyy hh:mm").toStdString() << "\n";
        messageFile.close();
        QMessageBox::information(this, "Success", "Reply sent successfully.");
    } else {
        QMessageBox::information(this, "Error", "Unable to open message file.");
    }
}