#ifndef REP_H
#define REP_H

#include <QDialog>
#include <string>
class MainWindow;

namespace Ui {
class Rep;
}

class Rep : public QDialog
{
    Q_OBJECT

public:
    Rep(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~Rep();

private slots:
    void on_REP_clicked();

private:
    Ui::Rep *ui;
    MainWindow* mainWindow;
    std::string user_now;
    bool isRecipientValid(const std::string& recipientUsername);
};

#endif // REP_H
