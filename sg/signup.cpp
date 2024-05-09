#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>
#include <string>
#include <QDir>

using namespace std;

SIGNUP::SIGNUP(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SIGNUP)
{
    ui->setupUi(this);
    connect(ui->createButton, SIGNAL(clicked()), this, SLOT(createAccount()));
}

SIGNUP::~SIGNUP()
{
    delete ui;
}

void SIGNUP::createAccount()
{
    fstream file;
    string user, email, pass, phone, dob, gender, privacy;
    int follower = 0, following = 0;
    user = ui->usernameEdit->text().toStdString();
    email = ui->emailEdit->text().toStdString();
    pass = ui->passEdit->text().toStdString();
    phone = ui->phoneEdit->text().toStdString();
    dob = ui->dobEdit->text().toStdString();
    gender = ui->genderEdit->text().toStdString();
    privacy = ui->privacyEdit->text().toStdString();

    QString absolutePath = QDir::current().absoluteFilePath("account.txt");
    string absolutePathStd = absolutePath.toStdString();
    file.open(absolutePathStd, ios::in);
    if (!file)
    {
        file.open(absolutePathStd, ios::app | ios::out);
        file << user << " " << email << " " << pass << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << std::endl;
        file.close();
        QMessageBox::information(this, "Success", "Thank You For Create Account");
        std::cout << "File is located at: " << absolutePathStd << std::endl;
    }
    else
    {
        std::string u, e, p, ph, d, g, pr;
        int fr, fg;
        int count = 0;
        while (file >> u >> e >> p >> ph >> d >> g >> pr >> fr >> fg)
        {
            if (u == user)
                count++;
        }
        file.close();
        if (count == 0)
        {
            file.open(absolutePathStd, ios::app | ios::out);
            file << user << " " << email << " " << pass << " " << phone << " " << dob << " " << gender << " " << privacy << " " << follower << " " << following << std::endl;
            file.close();
            QMessageBox::information(this, "Success", "Thank You For Create Account");
        }
        else
        {
            QMessageBox::critical(this, "Error", "This User Name is Already Taken");
        }
        cout << "File is located at: " << absolutePathStd << endl;
    }
}
