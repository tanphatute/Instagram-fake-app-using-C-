#ifndef RECENTMESSAGES_H
#define RECENTMESSAGES_H

#include <QDialog>
#include "rep.h"
#include <string>
class MainWindow;

namespace Ui {
class RecentMessages;
}

class RecentMessages : public QDialog
{
    Q_OBJECT

public:
    RecentMessages(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~RecentMessages();

private slots:
    void on_REP_clicked();
    void recent_msg();

private:
    Ui::RecentMessages *ui;
    Rep *ptrRep;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // RECENTMESSAGES_H
