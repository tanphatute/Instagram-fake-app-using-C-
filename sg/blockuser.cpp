#include "blockuser.h"
#include "ui_blockuser.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QDebug>
using namespace std;

BlockUser::BlockUser(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BlockUser)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->Block, SIGNAL(clicked()), this, SLOT(on_Block_clicked()));

    user_now = mainWindow->getUserAccount();
}

BlockUser::~BlockUser()
{
    delete ui;
}

void BlockUser::on_Block_clicked()
{
    fstream file, blockFile;
    string username;
    bool userExist = false;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }

    username = ui->lineEdit->text().toStdString();
    qDebug() << "User account: " << user_now.c_str();
    qDebug() << "Input data: " << username.c_str();

    file.open("account.txt", ios::in);
    if (!file)
    {
        qDebug() << "cannot read account.txt";
        return;
    }

    string user;
    while (file >> user)
    {
        if (user == username){
            qDebug() << "This user exist";
            userExist = true;
            break;
        }
    }
    file.close();

    if (!userExist) {
        qDebug() << "This user doesn't exist";
        return;
    }

    if (username == user_now) {
        ui->textEdit->setText("You cannot block yourself.");
        return;
    }

    blockFile.open("block.txt", ios::in);
    if (!blockFile) {
        ui->textEdit->setText("Error: Could not open block.txt for reading.");
        return;
    }

    string userToBlock;
    while (blockFile >> user >> userToBlock) {
        if (user_now == user && username == userToBlock) {
            ui->textEdit->setText(QString::fromStdString(username) + " is already blocked.");
            blockFile.close();
            return;
        }
    }
    blockFile.close();

    blockFile.open("block.txt", ios::app);
    if (!blockFile) {
        ui->textEdit->setText("Error: Could not open block.txt for writing.");
        return;
    }

    blockFile << user_now << " " << username << endl;
    blockFile.close();

    ui->textEdit->setText(QString::fromStdString(username) + " has been blocked successfully.");
}