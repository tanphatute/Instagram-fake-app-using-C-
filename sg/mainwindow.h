#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signup.h"
#include "menu.h"
#include <QDebug>
#include <string> // Add this line
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setUserAccount(const string& account);
    string getUserAccount() const;
    string getPreviousUserAccount() const ;

private slots:
    void on_pushButton_2_clicked();
    void loginAccount();

private:
    Ui::MainWindow *ui;
    SIGNUP *ptrSIGNUP;
    string user_now, user_account, user_e, user_p;
    string previous_user_account;
    Menu *ptrMenu;
};
#endif // MAINWINDOW_H