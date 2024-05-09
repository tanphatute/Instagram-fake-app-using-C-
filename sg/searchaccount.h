#ifndef SEARCHACCOUNT_H
#define SEARCHACCOUNT_H
#include <string>
#include <QDialog>
class MainWindow;

namespace Ui {
class SearchAccount;
}

class SearchAccount : public QDialog
{
    Q_OBJECT

public:
    SearchAccount(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~SearchAccount();


private slots:

    void on_Search_clicked();

private:
    Ui::SearchAccount *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // SEARCHACCOUNT_H
