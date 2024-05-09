#include "menu.h"
#include "ui_menu.h"

Menu::Menu(MainWindow *mainWindowParent, QWidget *parent)
    : QDialog(parent)
    , mainWindow(mainWindowParent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
        ptrRecentMessages = new RecentMessages(mainWindow);
    ptrSearchAccount = new SearchAccount(mainWindow);
    ptrUpdateAccount = new UpdateAccount();
    ptrDeleteAccount = new DeleteAccount(mainWindow);
    ptrFollow = new Follow(mainWindow);
    ptrMessages = new Messages(mainWindow);
    ptrFollower = new Follower(mainWindow);
    ptrFollowing = new Following(mainWindow);

    ptrRateApp = new RateApp(mainWindow);
    ptrAppRating = new AppRating();
    ptrOldMessages = new OldMessages(mainWindow);
    ptrBlockUser = new BlockUser(mainWindow);
    ptrBlockedUser = new BlockedUser(mainWindow);
}

Menu::~Menu()
{
    delete ptrSearchAccount;
    delete ptrUpdateAccount;
    delete ptrDeleteAccount;
    delete ptrFollow;
    delete ptrMessages;
    delete ptrFollower;
    delete ptrFollowing;
    delete ptrRecentMessages;
    delete ptrRateApp;
    delete ptrAppRating;
    delete ptrOldMessages;
    delete ptrBlockUser;
    delete ptrBlockedUser;
    delete ui;
}

void Menu::on_SearchAccount_clicked()
{
    ptrSearchAccount->show();
}


void Menu::on_UpdateAccount_clicked()
{
    ptrUpdateAccount->show();
}


void Menu::on_DeleteAccount_clicked()
{
    ptrDeleteAccount->show();
}


void Menu::on_Follow_clicked()
{
    ptrFollow->show();
}


void Menu::on_Messages_clicked()
{
    ptrMessages->show();
}


void Menu::on_Followers_clicked()
{
    ptrFollower->show();
}


void Menu::on_Following_clicked()
{
    ptrFollowing->show();
}


void Menu::on_RecentMessages_clicked()
{
    ptrRecentMessages->show();
}


void Menu::on_RateApp_clicked()
{
    ptrRateApp->show();
}


void Menu::on_AppRating_clicked()
{
    ptrAppRating->show();
}


void Menu::on_OldMessages_clicked()
{
    ptrOldMessages->show();
}


void Menu::on_BlockUser_clicked()
{
    ptrBlockUser->show();
}


void Menu::on_BlockedUser_clicked()
{
    ptrBlockedUser->show();
}

