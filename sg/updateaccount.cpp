#include "updateaccount.h"
#include "ui_updateaccount.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>
#include <string>
#include <QDir>
using namespace std;

UpdateAccount::UpdateAccount(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateAccount)
{
    ui->setupUi(this);
    ptrUpdateAccountnext = new UpdateAccountnext();
    connect(ui->nextButton, SIGNAL(clicked()), this, SLOT(updateAccount()));
}

UpdateAccount::~UpdateAccount()
{
    delete ptrUpdateAccountnext;
    delete ui;
}

// void UpdateAccount::updateAccount()
// {
//     QFile file("account.txt");
//     int c = 0;
//     string email_update, pass_update, e, pass, ph, g, d, p;
//     QString tempFileName = "tempAccount.txt";

//     email_update = ui->emailEdit->text().toStdString();
//     pass_update = ui->passEdit->text().toStdString();

//     if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
//         return;

//     QTextStream in(&file);
//     QFile tempFile(tempFileName);
//     if (!tempFile.open(QIODevice::WriteOnly | QIODevice::Text))
//         return;

//     QTextStream out(&tempFile);

//     while (!in.atEnd()) {
//         QString line = in.readLine();
//         QStringList fields = line.split(" ");
//         if (fields[1] == email_update && fields[2] == pass_update) {
//             e = QInputDialog::getText(this, "Update Account", "E-mail:");
//             pass = QInputDialog::getText(this, "Update Account", "Password:", QLineEdit::Password);
//             ph = QInputDialog::getText(this, "Update Account", "Phone No.:");
//             g = QInputDialog::getText(this, "Update Account", "Gender:");
//             p = QInputDialog::getText(this, "Update Account", "Privacy (Private/Public):");
//             out << fields[0] << " " << e << " " << pass << " " << ph << " " << fields[4] << " " << g << " " << p << " " << fields[7] << " " << fields[8] << "\n";
//             c++;
//         }
//         else {
//             out << line << "\n";
//         }
//     }

//     file.close();
//     tempFile.close();

//     if (c == 0) {
//         QMessageBox::critical(this, "Error", "E-mail & password is Wrong...");
//     }
//     else {
//         QFile::remove("account.txt");
//         QFile::rename(tempFileName, "account.txt");
//         QMessageBox::information(this, "Success", "Account Updated Successfully");
//     }
// }

void UpdateAccount::updateAccount()
{
    QString email_update = ui->emailEdit->text();
    QString pass_update = ui->passEdit->text();

    QFile file("account.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields[1] == email_update && fields[2] == pass_update) {
            UpdateAccountnext updateAccountNextDialog(this);
            updateAccountNextDialog.setEmailPass(email_update, pass_update);
            updateAccountNextDialog.exec();
            return;
        }
    }

    QMessageBox::critical(this, "Error", "E-mail & password is Wrong...");
}
