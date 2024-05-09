#include "rateapp.h"
#include "ui_rateapp.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>
using namespace std;

RateApp::RateApp(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RateApp)
    , mainWindow(mainWindowParent)
{
    ui->setupUi(this);
    connect(ui->rateButton, SIGNAL(clicked()), this, SLOT(rate()));
    connect(ui->commentEdit, &QTextEdit::textChanged, this, &RateApp::limitTextEdit);


    user_now = mainWindow->getUserAccount();
}

RateApp::~RateApp()
{
    delete ui;
}

void RateApp::limitTextEdit() {
    QString text = ui->commentEdit->toPlainText();
    if(text.length() > 100) {
        text = text.left(100);
        ui->commentEdit->setPlainText(text);
        ui->commentEdit->moveCursor(QTextCursor::End);
    }
}

void RateApp::rate()
{
    fstream file("rate.txt", ios::app | ios::out);
    string msg;

    if (user_now.empty()) {
        user_now = mainWindow->getPreviousUserAccount();
    }
    qDebug() << "User account: " << user_now.c_str();

    msg = ui->commentEdit->toPlainText().toStdString();

    if (!file.is_open())
        return;

    QDateTime currentDateTime = QDateTime::currentDateTime();
    string formattedDate = currentDateTime.toString("yyyy-MM-dd").toStdString();

    file << user_now << " " << formattedDate << " " << msg << endl;
    file.close();

    QMessageBox::information(this, "Success", "Thank you so much for your rating!");
}

