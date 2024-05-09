/********************************************************************************
** Form generated from reading UI file 'updateaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEACCOUNT_H
#define UI_UPDATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UpdateAccount
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *emailEdit;
    QLineEdit *passEdit;
    QPushButton *nextButton;
    QFrame *frame_2;
    QLabel *label_2;

    void setupUi(QDialog *UpdateAccount)
    {
        if (UpdateAccount->objectName().isEmpty())
            UpdateAccount->setObjectName("UpdateAccount");
        UpdateAccount->resize(551, 810);
        UpdateAccount->setMouseTracking(true);
        UpdateAccount->setStyleSheet(QString::fromUtf8("#UpdateAccount {\n"
"	background-image: url(:/bg_update.jpeg);\n"
"}\n"
"#frame_2{\n"
"background-image: url(:/icon.png);\n"
"}\n"
"#label{\n"
"color:white;\n"
"}\n"
"#label_2{\n"
"color:white;\n"
"}"));
        frame = new QFrame(UpdateAccount);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(70, 140, 431, 251));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);
        frame->setMidLineWidth(1);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 351, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        emailEdit = new QLineEdit(frame);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(30, 80, 371, 31));
        emailEdit->setFont(font);
        emailEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        passEdit = new QLineEdit(frame);
        passEdit->setObjectName("passEdit");
        passEdit->setGeometry(QRect(30, 120, 371, 31));
        passEdit->setFont(font);
        passEdit->setEchoMode(QLineEdit::Password);
        passEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        nextButton = new QPushButton(frame);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(160, 190, 101, 41));
        nextButton->setFont(font);
        nextButton->setMouseTracking(false);
        frame_2 = new QFrame(UpdateAccount);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(250, 40, 41, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(UpdateAccount);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 60, 191, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(15);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(UpdateAccount);

        QMetaObject::connectSlotsByName(UpdateAccount);
    } // setupUi

    void retranslateUi(QDialog *UpdateAccount)
    {
        UpdateAccount->setWindowTitle(QCoreApplication::translate("UpdateAccount", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UpdateAccount", "YOUR ACCOUNT", nullptr));
        emailEdit->setPlaceholderText(QCoreApplication::translate("UpdateAccount", "Email", nullptr));
        passEdit->setPlaceholderText(QCoreApplication::translate("UpdateAccount", "Password", nullptr));
        nextButton->setText(QCoreApplication::translate("UpdateAccount", "Next", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateAccount", "Instagram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateAccount: public Ui_UpdateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEACCOUNT_H
