/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *loginButton;
    QLineEdit *usernameEdit;
    QLineEdit *passEdit;
    QLineEdit *emailEdit;
    QFrame *frame_2;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(630, 640);
        QFont font;
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"   #MainWindow {\n"
"background-image:url(:/ho.jpg);\n"
"}\n"
"QFrame{\n"
" background-color: rgba(200, 200, 200, 0.5); \n"
"border-radius: 20px;\n"
"\n"
"}\n"
"#frame_2{\n"
"	\n"
"background-image: url(:/logo_ig.png);\n"
" background-color: transparent;\n"
"\n"
"}\n"
"\n"
"#line,#line_2 {\n"
"background-color:#717072;\n"
"}\n"
"\n"
"QLabel{\n"
"background:transparent;\n"
"color:#696969;\n"
"font-size: 18px;\n"
"}\n"
"\n"
"#loginButton {\n"
"color:white;\n"
"    border-radius: 50px;\n"
"    background: #3399cc;\n"
"}\n"
"\n"
"\n"
"QToolButton{\n"
"background:#8B0000;\n"
"border-radius:60px;\n"
"\n"
"}\n"
"\n"
"#pushButton_2{\n"
"color:#3399cc;\n"
"border-radius: 50px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"background:transparent;\n"
"font-size: 18px;\n"
"border:none;\n"
"color:#696969;\n"
"border-bottom: 1px solid #717072;\n"
"}\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(110, 50, 411, 491));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(30, 270, 341, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        loginButton->setFont(font1);
        usernameEdit = new QLineEdit(frame);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(30, 130, 341, 26));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        usernameEdit->setFont(font2);
        usernameEdit->setDragEnabled(true);
        passEdit = new QLineEdit(frame);
        passEdit->setObjectName("passEdit");
        passEdit->setGeometry(QRect(30, 210, 341, 26));
        passEdit->setEchoMode(QLineEdit::Password);
        emailEdit = new QLineEdit(frame);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(30, 170, 341, 26));
        emailEdit->setFont(font2);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(80, 20, 260, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 330, 41, 16));
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(220, 340, 151, 1));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(frame);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(30, 340, 151, 1));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 360, 221, 41));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 360, 101, 41));
        pushButton_2->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 630, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        usernameEdit->setText(QString());
        usernameEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passEdit->setText(QString());
        passEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        emailEdit->setText(QString());
        emailEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "OR", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Dont't have an account yet?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
