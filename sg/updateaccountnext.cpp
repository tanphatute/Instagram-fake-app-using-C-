#include "updateaccountnext.h"
#include "ui_updateaccountnext.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>
#include <string>
#include <QDir>
using namespace std;

UpdateAccountnext::UpdateAccountnext(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateAccountnext)
{
    ui->setupUi(this);
    connect(ui->updateButton, SIGNAL(clicked()), this, SLOT(updateAccountNext()));
}

UpdateAccountnext::~UpdateAccountnext()
{
    delete ui;
}

void UpdateAccountnext::updateAccountNext()
{
    QFile file("account.txt");
    int c = 0;
    QString e = ui->emailEdit->text(); // Đọc giá trị từ trường nhập email mới
    QString pass = ui->passEdit->text(); // Đọc giá trị từ trường nhập mật khẩu mới
    QString tempFileName = "tempAccount.txt";

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    QFile tempFile(tempFileName);
    if (!tempFile.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&tempFile);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields[1] == email_update && fields[2] == pass_update) {
            QString ph = ui->phoneEdit->text();
            QString d = ui->dobEdit->text();
            QString g = ui->genderEdit->text();
            QString p = ui->privacyEdit->text();
            out << fields[0] << " " << e << " " << pass << " " << ph << " " << d << " " << g << " " << p << " " << fields[7] << " " << fields[8] << "\n";
            c++;
        }
        else {
            out << line << "\n";
        }
    }

    file.close();
    tempFile.close();

    if (c == 0) {
        QMessageBox::critical(this, "Error", "E-mail & password is Wrong...");
    }
    else {
        QFile::remove("account.txt");
        QFile::rename(tempFileName, "account.txt");
        QMessageBox::information(this, "Success", "Account Updated Successfully");
    }
}
