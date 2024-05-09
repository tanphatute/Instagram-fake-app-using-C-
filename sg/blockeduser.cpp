#include "blockeduser.h"
#include "ui_blockeduser.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QDebug>
using namespace std;
BlockedUser::BlockedUser(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BlockedUser)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_Blocked_clicked()));
    user_now = mainWindow->getUserAccount();
}

BlockedUser::~BlockedUser()
{
    delete ui;
}

void BlockedUser::on_Blocked_clicked()
{
    fstream file;
    int found = 0;
    string blockedUser;
    string user;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }
    qDebug() << "User account: " << user_now.c_str();

    file.open("block.txt", ios::in);
    if (!file) {
        ui->textEdit->setText("Database is Empty...");
        return;
    }

    while (file >> user >> blockedUser) {
        qDebug() << "Reading from file: " << user.c_str() << " " << blockedUser.c_str();
        if (user == user_now) {
            ui->textEdit->append(QString::fromStdString(blockedUser) + " is in block");
            found++;
        }
    }
    file.close();

    if (found == 0) {
        ui->textEdit->setText(QString::fromStdString(user_now) + " You haven't blocked anyone yet.");
    }
}
