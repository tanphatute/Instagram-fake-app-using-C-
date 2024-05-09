#ifndef APPRATING_H
#define APPRATING_H

#include <QDialog>

namespace Ui {
class AppRating;
}

class AppRating : public QDialog
{
    Q_OBJECT

public:
    explicit AppRating(QWidget *parent = nullptr);
    ~AppRating();

private slots:
    void app_rating();

private:
    Ui::AppRating *ui;
};

#endif // APPRATING_H
