#ifndef FOLLOWER_H
#define FOLLOWER_H
#include <string>
#include <QDialog>

class MainWindow;

namespace Ui {
class Follower;
}

class Follower : public QDialog
{
    Q_OBJECT

public:
    Follower(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~Follower();

private slots:
    void follower_user();

private:
    Ui::Follower *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // FOLLOWER_H
