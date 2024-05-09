#ifndef BLOCKEDUSER_H
#define BLOCKEDUSER_H
#include <string>
#include <QDialog>
class MainWindow;

namespace Ui {
class BlockedUser;
}

class BlockedUser : public QDialog
{
    Q_OBJECT

public:
    BlockedUser(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~BlockedUser();

private slots:
    void on_Blocked_clicked();

private:
    Ui::BlockedUser *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // BLOCKEDUSER_H
