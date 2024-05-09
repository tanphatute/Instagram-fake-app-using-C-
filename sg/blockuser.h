#ifndef BLOCKUSER_H
#define BLOCKUSER_H
#include <string>
#include <QDialog>
class MainWindow;

namespace Ui {
class BlockUser;
}

class BlockUser : public QDialog
{
    Q_OBJECT

public:
    BlockUser(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~BlockUser();

private slots:
    void on_Block_clicked();

private:
    Ui::BlockUser *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // BLOCKUSER_H
