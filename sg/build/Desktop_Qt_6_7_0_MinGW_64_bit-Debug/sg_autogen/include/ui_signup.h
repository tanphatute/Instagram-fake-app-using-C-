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
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLabel *label_9;

    void setupUi(QDialog *SIGNUP)
    {
        if (SIGNUP->objectName().isEmpty())
            SIGNUP->setObjectName("SIGNUP");
        SIGNUP->resize(796, 701);
        SIGNUP->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"font-family:century gothic;\n"
"font-size:24px;\n"
"\n"
"}\n"
"QFrame{\n"
" background-color: rgba(255, 255, 255, 0.35); \n"
"border-radius: 35px;\n"
"\n"
"}\n"
"\n"
"#SIGNUP{\n"
"background-image: url(:/ho.jpg);\n"
"    weight:100%;\n"
"   \n"
"}\n"
"QPushButton {\n"
"    border-radius: 60px;\n"
"    \n"
" background:transparent;\n"
"}\n"
"\n"
"\n"
"QToolButton{\n"
"background:#8B0000;\n"
"border-radius:60px;\n"
"\n"
"}\n"
"QLabel{\n"
"background:transparent;\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"color:white;\n"
"border-radius:15px;\n"
"}\n"
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
        frame->setGeometry(QRect(120, 20, 541, 641));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 60, 181, 31));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 570, 151, 51));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 130, 351, 26));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 130, 181, 31));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(170, 250, 351, 26));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 250, 181, 31));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(170, 190, 351, 26));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 10, 201, 31));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 190, 181, 31));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 310, 181, 31));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 310, 351, 26));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 370, 181, 31));
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(170, 370, 351, 26));
        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(170, 430, 351, 26));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 430, 181, 31));
        lineEdit_7 = new QLineEdit(frame);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(170, 490, 351, 26));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 490, 181, 31));

        retranslateUi(SIGNUP);

        QMetaObject::connectSlotsByName(SIGNUP);
    } // setupUi

    void retranslateUi(QDialog *SIGNUP)
    {
        SIGNUP->setWindowTitle(QCoreApplication::translate("SIGNUP", "SIGN UP", nullptr));
        label->setText(QCoreApplication::translate("SIGNUP", "SIGN UP HERE", nullptr));
        pushButton->setText(QCoreApplication::translate("SIGNUP", "SIGN UP", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("SIGNUP", "Username", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("SIGNUP", "Username", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("SIGNUP", "Instagram", nullptr));
        label_5->setText(QCoreApplication::translate("SIGNUP", "Email", nullptr));
        label_6->setText(QCoreApplication::translate("SIGNUP", "Phone", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Phone", nullptr));
        label_7->setText(QCoreApplication::translate("SIGNUP", "Date of Birth", nullptr));
        lineEdit_5->setText(QString());
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Date of Birth", nullptr));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Gender", nullptr));
        label_8->setText(QCoreApplication::translate("SIGNUP", "Gender", nullptr));
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("SIGNUP", "Private/Public", nullptr));
        label_9->setText(QCoreApplication::translate("SIGNUP", "Privacy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SIGNUP: public Ui_SIGNUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
