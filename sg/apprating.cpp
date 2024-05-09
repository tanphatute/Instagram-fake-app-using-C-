#include "apprating.h"
#include "ui_apprating.h"
#include <fstream>
#include <iostream>
using namespace std;
AppRating::AppRating(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AppRating)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(app_rating()));
    app_rating();
}

AppRating::~AppRating()
{
    delete ui;
}

void AppRating::app_rating() {
    fstream file("rate.txt", ios::in);
    string rate_user, rate_date, rate_msg;
    QString ratingData;

    if (!file.is_open()) {
        ui->textEdit->setText("Database is Empty...");
        return;
    }

    ratingData += "\n";
    while (file >> rate_user >> rate_date && getline(file, rate_msg)) {
        ratingData += QString::fromStdString("\n" + rate_user + "\t" + rate_date + "\t" + rate_msg); // Display data with tabs
    }

    file.close();
    ui->textEdit->setText(ratingData);
}
