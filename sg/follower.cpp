#include "follower.h"
#include "ui_follower.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QDebug>
using namespace std;

Follower::Follower(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Follower)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(follower_user()));
    user_now = mainWindow->getUserAccount();
}

Follower::~Follower()
{
    delete ui;
}

void Follower::follower_user()
{
    fstream file("follower.txt");
    int followerCount = 0;
    string follower, following;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }

    if (!file) {
        ui->textEdit->append("\n\n\n Database is Empty or not found...");
    }
    else {
        while (file >> follower >> following) {
            if (following == user_now) {
                ui->textEdit->append("\n " + QString::fromStdString(follower));
                followerCount++;
            }
        }
        file.close();

        if (followerCount == 0) {
            ui->textEdit->append("\n You don't have any followers");
        }
        else {
            ui->textEdit->append("\n You have " + QString::number(followerCount) + " followers");
        }
    }
}
