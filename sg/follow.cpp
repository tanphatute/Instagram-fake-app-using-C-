#include "follow.h"
#include "ui_follow.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>
#include <string>
#include <QDebug>
using namespace std;
Follow::Follow(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Follow)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->followButton, SIGNAL(clicked()), this, SLOT(on_followButton_clicked()));
    connect(ui->usernameEdit, SIGNAL(textChanged(const QString &)), this, SLOT(on_followButton_clicked()));

    user_now = mainWindow->getUserAccount();
}

Follow::~Follow()
{
    delete ui;
}

void Follow::on_followButton_clicked()
{
    fstream file, file1;
    int a = 0, b = 0;
    string user_follow, u, f, line;
    string user, email, password, phone, dob, gender, privacy;
    int follower, following;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }

    user_follow = ui->usernameEdit->text().toStdString();

    bool isBlocked = false;
    file1.open("block.txt", ios::in);
    if (!file1)
        return;

    while (getline(file1, line))
    {
        if (line == user_follow)
        {
            isBlocked = true;
            break;
        }
    }
    file1.close();

    if (isBlocked) {
        ui->textEdit->setText(QString::fromStdString(user_follow) + " is blocked or has privated their account.");
        return;
    }

    if (user_follow == user_now) {
        ui->textEdit->setText("You can't follow yourself");
        return;
    }

    file.open("account.txt", ios::in);
    if (!file)
        return;

    while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
        if (user_follow == user) {
            a++;
            if (privacy == "private") {
                ui->textEdit->setText(QString::fromStdString(user_follow) + " has privated their account. You can't follow them.");
                return;
            }
            break;
        }
    }
    file.close();

    file.open("follower.txt", ios::in);
    if (!file)
        return;

    while (file >> u >> f) {
        if (user_now == u && user_follow == f) {
            b++;
            break;
        }
    }
    file.close();

    if (a == 1 && b == 0) {
        file.open("account.txt", ios::in);
        file1.open("tempAccount.txt", ios::out); // Temporary file to store modified account data
        if (!file1)
            return;

        while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
            if (user_now == user) {
                following++;
            }
            else if (user_follow == user) {
                follower++;
            }
            file1 << user << " " << email << " " << password << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << "\n";
        }
        file.close();
        file1.close();
        remove("account.txt");
        rename("tempAccount.txt", "account.txt");

        file.open("follower.txt", ios::app);
        if (!file)
            return;
        file << user_now << " " << user_follow << "\n";
        file.close();
        ui->textEdit->setText(QString::fromStdString("You followed " + user_follow));
    }
    else if (a == 1 && b == 1) {
        ui->textEdit->setText(QString::fromStdString("You are already following " + user_follow));
    }
    else {
        ui->textEdit->setText(QString::fromStdString("Invalid user: " + user_follow));
    }
}

