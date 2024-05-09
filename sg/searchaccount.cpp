#include "searchaccount.h"
#include "ui_searchaccount.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QDebug>
using namespace std;

SearchAccount::SearchAccount(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchAccount)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->Search, SIGNAL(clicked()), this, SLOT(on_Search_clicked()));
    connect(ui->lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(on_Search_clicked()));

    user_now = mainWindow->getUserAccount();

}

SearchAccount::~SearchAccount()
{
    delete ui;
}


void SearchAccount::on_Search_clicked()
{
    fstream file, file1;
    int c = 0, check = 0, k = 0;
    string user_search, user_me, user_follow, line;
    bool isBlocked = false;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }

    user_search = ui->lineEdit->text().toStdString();
    qDebug() << "User account: " << user_now.c_str();
    qDebug() << "Input data: " << user_search.c_str();

    file1.open("block.txt", ios::in);
    if (!file1)
        return;

    while (getline(file1, line))
    {
        if (line == user_search)
        {
            isBlocked = true;
            break;
        }
    }
    file1.close();

    if (isBlocked) {
        ui->textEdit->setText(QString::fromStdString(user_search) + " is blocked or has privated their account.");
        return;
    }

    file1.open("follower.txt", ios::in);
    if (!file1)
        return;

    file1 >> user_me >> user_follow;
    while (!file1.eof())
    {
        if (user_now == user_me && user_search == user_follow)
            check++;
        else if (user_search == user_me && user_now == user_follow)
            check++;
        file1 >> user_me >> user_follow;
    }
    file1.close();

    file.open("account.txt", ios::in);
    string user , email , password , phone , dob , gender , privacy , follower , following;
    file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following;
    while (!file.eof())
    {
        if (user_search == user_now)
        {
            ui->textEdit->setText("User Name : " + QString::fromStdString(user_now) + "\nPhone No. : " + QString::fromStdString(phone) + "\nDate of Birth : " + QString::fromStdString(dob) + "\nGender : " + QString::fromStdString(gender) + "\nFollowers : " + QString::fromStdString(follower) + "\nFollowing : " + QString::fromStdString(following));
            ui->textEdit->append("This is your account");
            c++;
            break;
        }
        else if (user_search == user && privacy == "private") {
            ui->textEdit->setText("The User: " + QString::fromStdString(user_search) + " has privated their account");
            c++;
        }
        else if (user_search == user)
        {
            ui->textEdit->setText("User Name : " + QString::fromStdString(user) + "\nPhone No. : " + QString::fromStdString(phone) + "\nDate of Birth : " + QString::fromStdString(dob) + "\nGender : " + QString::fromStdString(gender) + "\nFollowers : " + QString::fromStdString(follower) + "\nFollowing : " + QString::fromStdString(following));
            if (check > 0)
            {
                ui->textEdit->append("You are currently following \n this user");
            }
            else
            {
                ui->textEdit->append("You are not currently following \n this user");
                qDebug() << "Blocked: "<<isBlocked;
            }
            c++;
            break;
        }
        file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following;
    }
    file.close();

    if (c == 0)
        ui->textEdit->setText("User Name Cannot Found...");
}
