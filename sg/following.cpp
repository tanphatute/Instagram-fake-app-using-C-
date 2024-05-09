#include "following.h"
#include "ui_following.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QDir>
#include <QDebug>
#include <sstream>
#include <QMessageBox>
#include <QInputDialog>
#include <QLineEdit>
using namespace std;
Following::Following(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Following)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(following_user()));
    user_now = mainWindow->getUserAccount();
}

Following::~Following()
{
    delete ui;
}

void Following::following_user() {
    fstream file("follower.txt", ios::in);
    fstream file1("follower1.txt", ios::out | ios::app);
    int b = 0, follower, following;
    string user_fr, user_fg, user_n;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }

    if (!file.is_open() || !file1.is_open()) {
        ui->textEdit->append("Database is Empty or Error in file handling...");
        return;
    }

    while (file >> user_fr >> user_fg) {
        if (user_fr == user_now) {
            ui->textEdit->append(QString::fromStdString("You are currently following: " + user_fg));
        }
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Unfollow", "Do you want to unfollow anyone?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        bool ok;
        QString text = QInputDialog::getText(this, tr("Unfollow"),
                                             tr("Enter User Name to Unfollow:"), QLineEdit::Normal,
                                             QDir::home().dirName(), &ok);
        if (ok && !text.isEmpty()) {
            user_n = text.toStdString();
            file.clear(); // Clear error flags
            file.seekg(0, ios::beg); // Reset file pointer to the beginning

            while (file >> user_fr >> user_fg) {
                if (!(user_fr == user_now && user_fg == user_n)) {
                    file1 << user_fr << " " << user_fg << "\n";
                }
                else {
                    b = 1; 
                }
            }
            file.close();
            file1.close();

            remove("follower.txt");
            rename("follower1.txt", "follower.txt");
            if (b != 0) {
                file.open("account.txt", ios::in);
                file1.open("account1.txt", ios::app);

                string user, email, password, phone, dob, gender, privacy;
                while (file >> user >> email >> password >> phone >> dob >> gender >> privacy >> follower >> following) {
                    if (user == user_n) {
                        follower--;
                    } else if (user == user_now) {
                        following--;
                    }
                    file1 << user << " " << email << " " << password << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << "\n";
                }
                file.close();
                file1.close();

                remove("account.txt");
                rename("account1.txt", "account.txt");

                ui->textEdit->append(QString::fromStdString(user_now + " has unfollowed " + user_n));
            } else {
                ui->textEdit->append(QString::fromStdString(user_now + " was not following " + user_n));
            }
        }
    }
}