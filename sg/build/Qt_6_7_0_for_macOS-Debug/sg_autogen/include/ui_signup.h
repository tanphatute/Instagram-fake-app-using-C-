/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SIGNUP
{
public:
    QFrame *frame;
    QLineEdit *usernameEdit;
    QLineEdit *passEdit;
    QLineEdit *emailEdit;
    QLineEdit *phoneEdit;
    QLineEdit *dobEdit;
    QLineEdit *genderEdit;
    QLineEdit *privacyEdit;
    QPushButton *createButton;
    QLabel *label_3;
    QFrame *frame_2;

    void setupUi(QDialog *SIGNUP)
    {
        if (SIGNUP->objectName().isEmpty())
            SIGNUP->setObjectName("SIGNUP");
        SIGNUP->resize(630, 640);
        SIGNUP->setStyleSheet(QString::fromUtf8("#SIGNUP {\n"
"background-image:url(:/ho.jpg);\n"
"}\n"
"\n"
"QFrame{\n"
"background-color: rgba(200, 200, 200, 0.5); \n"
"border-radius: 20px;\n"
"}\n"
"\n"
"#frame_2{\n"
"background-image: url(:/logo_ig.png);\n"
"background-color: transparent;\n"
"}\n"
"\n"
"#createButton {\n"
"background-color: #3399cc;\n"
"border-radius: 50px;\n"
"color: white;\n"
"}\n"
"\n"
"Line {\n"
"background-color: #696969;\n"
"}\n"
"\n"
"QToolButton{\n"
"background:#8B0000;\n"
"border-radius:60px;\n"
"\n"
"}\n"
"QLabel{\n"
"background:transparent;\n"
"color:#696969;\n"
"}\n"
"\n"
"#label_4{\n"
"color:white;\n"
"font-family: forte;\n"
"font-size: 40px;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#696969;\n"
"border-bottom: 1px solid #717072;\n"
"}\n"
"\n"
"\n"
""));
        frame = new QFrame(SIGNUP);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 40, 531, 561));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        usernameEdit = new QLineEdit(frame);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(90, 200, 351, 24));
        passEdit = new QLineEdit(frame);
        passEdit->setObjectName("passEdit");
        passEdit->setGeometry(QRect(90, 260, 351, 24));
        passEdit->setEchoMode(QLineEdit::Password);
        emailEdit = new QLineEdit(frame);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(90, 230, 351, 24));
        phoneEdit = new QLineEdit(frame);
        phoneEdit->setObjectName("phoneEdit");
        phoneEdit->setGeometry(QRect(90, 290, 351, 24));
        dobEdit = new QLineEdit(frame);
        dobEdit->setObjectName("dobEdit");
        dobEdit->setGeometry(QRect(90, 320, 351, 24));
        genderEdit = new QLineEdit(frame);
        genderEdit->setObjectName("genderEdit");
        genderEdit->setGeometry(QRect(90, 350, 351, 24));
        privacyEdit = new QLineEdit(frame);
        privacyEdit->setObjectName("privacyEdit");
        privacyEdit->setGeometry(QRect(90, 380, 351, 24));
        createButton = new QPushButton(frame);
        createButton->setObjectName("createButton");
        createButton->setGeometry(QRect(90, 430, 351, 30));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 160, 281, 20));
        QFont font;
        font.setBold(true);
        label_3->setFont(font);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setEnabled(true);
        frame_2->setGeometry(QRect(140, 60, 251, 99));
        QFont font1;
        font1.setKerning(false);
        frame_2->setFont(font1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        retranslateUi(SIGNUP);

        QMetaObject::connectSlotsByName(SIGNUP);
    } // setupUi

    void retranslateUi(QDialog *SIGNUP)
    {
        SIGNUP->setWindowTitle(QCoreApplication::translate("SIGNUP", "SIGN UP", nullptr));
        usernameEdit->setText(QString());
        usernameEdit->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Username", nullptr));
        passEdit->setText(QString());
        passEdit->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Password", nullptr));
        emailEdit->setText(QString());
        emailEdit->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Email", nullptr));
        phoneEdit->setText(QString());
        phoneEdit->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Phone", nullptr));
        dobEdit->setText(QString());
        dobEdit->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Date of Birth", nullptr));
        genderEdit->setText(QString());
        genderEdit->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Gender", nullptr));
        privacyEdit->setText(QString());
        privacyEdit->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Private/Public", nullptr));
        createButton->setText(QCoreApplication::translate("SIGNUP", "Register", nullptr));
        label_3->setText(QCoreApplication::translate("SIGNUP", "Sign up to see new posts from your friends", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SIGNUP: public Ui_SIGNUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
