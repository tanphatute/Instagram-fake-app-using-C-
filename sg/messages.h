#ifndef MESSAGES_H
#define MESSAGES_H
#include <string>
#include <QDialog>
class MainWindow;

namespace Ui {
class Messages;
}

class Messages : public QDialog
{
    Q_OBJECT

public:
    Messages(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~Messages();

private slots:
    void message();

private:
    Ui::Messages *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // MESSAGES_H
