#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
class SIGNUP;
}

class SIGNUP : public QDialog
{
    Q_OBJECT

public:
    explicit SIGNUP(QWidget *parent = nullptr);
    ~SIGNUP();
private slots:
    void createAccount();

private:
    Ui::SIGNUP *ui;
};

#endif // SIGNUP_H
// Forward declaration
