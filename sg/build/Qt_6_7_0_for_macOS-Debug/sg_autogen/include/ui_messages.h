/********************************************************************************
** Form generated from reading UI file 'messages.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGES_H
#define UI_MESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Messages
{
public:
    QFrame *frame;
    QPushButton *messageButton;
    QLineEdit *userEdit;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Messages)
    {
        if (Messages->objectName().isEmpty())
            Messages->setObjectName("Messages");
        Messages->resize(558, 547);
        Messages->setStyleSheet(QString::fromUtf8("#Messages{\n"
"	background-image: url(:/ms.jpg);\n"
"}\n"
"#frame{\n"
" background-color: rgba(255, 255, 255, 0.25); \n"
"border-radius: 35px;\n"
"}\n"
"#lineEdit{\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}\n"
"\n"
"#messageButton {\n"
"color:black;}"));
        frame = new QFrame(Messages);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(70, 50, 451, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        messageButton = new QPushButton(frame);
        messageButton->setObjectName("messageButton");
        messageButton->setGeometry(QRect(150, 400, 111, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        messageButton->setFont(font);
        userEdit = new QLineEdit(frame);
        userEdit->setObjectName("userEdit");
        userEdit->setGeometry(QRect(60, 110, 311, 31));
        userEdit->setFont(font);
        userEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 351, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 160, 311, 211));
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(Messages);

        QMetaObject::connectSlotsByName(Messages);
    } // setupUi

    void retranslateUi(QDialog *Messages)
    {
        Messages->setWindowTitle(QCoreApplication::translate("Messages", "Dialog", nullptr));
        messageButton->setText(QCoreApplication::translate("Messages", "SEND", nullptr));
        userEdit->setPlaceholderText(QCoreApplication::translate("Messages", "Username", nullptr));
        label->setText(QCoreApplication::translate("Messages", "MESSAGES", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Messages", "Enter your message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Messages: public Ui_Messages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGES_H
