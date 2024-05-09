#ifndef DELETEACCOUNT_H
#define DELETEACCOUNT_H
#include <string>
#include <QDialog>

class MainWindow;

namespace Ui {
class DeleteAccount;
}

class DeleteAccount : public QDialog
{
    Q_OBJECT

public:
    DeleteAccount(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~DeleteAccount();

private slots:
    void deleteAccount();

private:
    Ui::DeleteAccount *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // DELETEACCOUNT_H