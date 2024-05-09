#ifndef UPDATEACCOUNTNEXT_H
#define UPDATEACCOUNTNEXT_H

#include <QDialog>

namespace Ui {
class UpdateAccountnext;
}

class UpdateAccountnext : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateAccountnext(QWidget *parent = nullptr);
    ~UpdateAccountnext();

    void setEmailPass(const QString& email, const QString& pass) {
        email_update = email;
        pass_update = pass;
    }

public slots:
    void updateAccountNext();

private:
    Ui::UpdateAccountnext *ui;
    QString email_update;
    QString pass_update;
};

#endif // UPDATEACCOUNTNEXT_H
