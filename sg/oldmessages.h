#ifndef OLDMESSAGES_H
#define OLDMESSAGES_H
#include <string>
#include <QDialog>
class MainWindow;

namespace Ui {
class OldMessages;
}

class OldMessages : public QDialog
{
    Q_OBJECT

public:
    OldMessages(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~OldMessages();

private slots:
    void old_msg();

private:
    Ui::OldMessages *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // OLDMESSAGES_H
