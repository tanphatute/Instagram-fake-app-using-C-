#ifndef FOLLOWING_H
#define FOLLOWING_H
#include <string>
#include <QDialog>

class MainWindow;

namespace Ui {
class Following;
}

class Following : public QDialog
{
    Q_OBJECT

public:
    Following(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~Following();

private slots:
    void following_user();

private:
    Ui::Following *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // FOLLOWING_H
