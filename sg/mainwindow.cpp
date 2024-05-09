#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>
#include <string>
#include <QDir>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrSIGNUP = new SIGNUP();
    ptrMenu = new Menu(this);
    connect(ui->loginButton, SIGNAL(clicked()), this, SLOT(loginAccount()));
}

MainWindow::~MainWindow()
{
    delete ptrSIGNUP;
    delete ptrMenu;
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ptrSIGNUP->show();
}

void MainWindow::loginAccount()
{
    fstream file;
    int c = 0;

    user_account = ui->usernameEdit->text().toStdString();
    user_e = ui->emailEdit->text().toStdString();
    user_p = ui->passEdit->text().toStdString();

    QString absolutePath = QDir::current().absoluteFilePath("account.txt");
    string absolutePathStd = absolutePath.toStdString();
    file.open(absolutePathStd, ios::in);

    if (!file)
    {
        QMessageBox::critical(this, "Error", "Database is Empty...");
    }
    else
    {
        string user, email, password;
        while (file >> user >> email >> password)
        {
            if (user_account == user && user_e == email && user_p == password)
            {
                c++;
                break;
            }
        }

        file.close();

        if (c == 1)
        {
            QMessageBox::information(this, "Success", "Login Successful");
            previous_user_account = user_account;
            setUserAccount(user_account); //bonus
            ptrMenu->show();
        }
        else
        {
            QMessageBox::critical(this, "Error", "This User is Invalid...");
        }
    }
}

string MainWindow::getPreviousUserAccount() const {
    return previous_user_account;
}

void MainWindow::setUserAccount(const string& account)
{
    user_now = account;
}

string MainWindow::getUserAccount() const
{
    return user_now;
}
