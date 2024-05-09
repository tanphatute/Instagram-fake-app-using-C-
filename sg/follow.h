#ifndef FOLLOW_H
#define FOLLOW_H
#include <string>
#include <QDialog>

class MainWindow;

namespace Ui {
class Follow;
}

class Follow : public QDialog
{
    Q_OBJECT

public:
    Follow(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~Follow();

private slots:
    void on_followButton_clicked();

private:
    Ui::Follow *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // FOLLOW_H
