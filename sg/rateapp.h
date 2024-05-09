#ifndef RATEAPP_H
#define RATEAPP_H
#include <string>
#include <QDialog>
class MainWindow;

namespace Ui {
class RateApp;
}

class RateApp : public QDialog
{
    Q_OBJECT

public:
    RateApp(MainWindow *mainWindowParent, QWidget *parent = nullptr);
    ~RateApp();

private slots:
    void rate();
    void limitTextEdit();

private:
    Ui::RateApp *ui;
    MainWindow* mainWindow;
    std::string user_now;
};

#endif // RATEAPP_H
