#ifndef UPDATEACCOUNT_H
#define UPDATEACCOUNT_H

#include <QDialog>
#include "updateaccountnext.h"

namespace Ui {
class UpdateAccount;
}

class UpdateAccount : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateAccount(QWidget *parent = nullptr);
    ~UpdateAccount();

private slots:

    void updateAccount();

private:
    Ui::UpdateAccount *ui;
    UpdateAccountnext *ptrUpdateAccountnext;
};

#endif // UPDATEACCOUNT_H
