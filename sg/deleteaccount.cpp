#include "deleteaccount.h"
#include "ui_deleteaccount.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QDebug>
#include <QMessageBox>
using namespace std;


DeleteAccount::DeleteAccount(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteAccount)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->deleteButton, SIGNAL(clicked()), this, SLOT(deleteAccount()));

    user_now = mainWindow->getUserAccount();
}

DeleteAccount::~DeleteAccount()
{
    delete ui;
}

void DeleteAccount::deleteAccount()
{
    fstream file("account.txt", ios::in);
    string user , email , password , phone , dob , gender , privacy , follower , following;
    int c = 0;
    string tempFileName = "tempAccount.txt";

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }
    qDebug() << "User account: " << user_now.c_str();

    string email_del = ui->emailEdit->text().toStdString();
    string pass_del = ui->passEdit->text().toStdString();

    if (!file.is_open())
        return;

    ofstream tempFile(tempFileName);
    if (!tempFile.is_open())
        return;

    while (!file.eof())
    {
        file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following;
        if (user_now == user && email == email_del && password == pass_del) {
            QMessageBox::information(this, "Success", "Delete Account Successful!!!!");
            c++;
        }
        else {
            tempFile << user << " " << email << " " << password << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << "\n";
        }
    }

    file.close();
    tempFile.close();

    if (c == 0) {
        QMessageBox::critical(this, "Error", "E-mail or Password is Wrong...");
    }
    else {
        remove("account.txt");
        rename(tempFileName.c_str(), "account.txt");
    }
}
