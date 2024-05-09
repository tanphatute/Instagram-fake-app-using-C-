#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "searchaccount.h"
#include "updateaccount.h"
#include "deleteaccount.h"
#include "follow.h"
#include "messages.h"
#include "follower.h"
#include "following.h"
#include "recentmessages.h"
#include "rateapp.h"
#include "apprating.h"
#include "oldmessages.h"
#include "blockuser.h"
#include "blockeduser.h"

class MainWindow;

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    //explicit Menu(QWidget *parent = nullptr);
    Menu(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_SearchAccount_clicked();

    void on_UpdateAccount_clicked();

    void on_DeleteAccount_clicked();

    void on_Follow_clicked();

    void on_Messages_clicked();

    void on_Followers_clicked();

    void on_Following_clicked();

    void on_RecentMessages_clicked();

    void on_RateApp_clicked();

    void on_AppRating_clicked();

    void on_OldMessages_clicked();

    void on_BlockUser_clicked();

    void on_BlockedUser_clicked();

private:
    Ui::Menu *ui;
    MainWindow* mainWindow;
    SearchAccount *ptrSearchAccount;
    UpdateAccount *ptrUpdateAccount;
    DeleteAccount *ptrDeleteAccount;
    Follow *ptrFollow;
    Follower *ptrFollower;
    Messages *ptrMessages;
    Following *ptrFollowing;
    RecentMessages *ptrRecentMessages;
    RateApp *ptrRateApp;
    AppRating *ptrAppRating;
    OldMessages *ptrOldMessages;
    BlockUser *ptrBlockUser;
    BlockedUser *ptrBlockedUser;
};

#endif // MENU_H
