/********************************************************************************
** Form generated from reading UI file 'updateaccountnext.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEACCOUNTNEXT_H
#define UI_UPDATEACCOUNTNEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UpdateAccountnext
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *emailEdit;
    QLineEdit *passEdit;
    QLineEdit *phoneEdit;
    QLineEdit *genderEdit;
    QLineEdit *privacyEdit;
    QPushButton *updateButton;
    QLineEdit *dobEdit;
    QFrame *frame_2;
    QLabel *label_2;

    void setupUi(QDialog *UpdateAccountnext)
    {
        if (UpdateAccountnext->objectName().isEmpty())
            UpdateAccountnext->setObjectName("UpdateAccountnext");
        UpdateAccountnext->resize(561, 990);
        UpdateAccountnext->setStyleSheet(QString::fromUtf8("#UpdateAccountnext{\n"
"	background-image: url(:/bg_updatenext.jpeg);\n"
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
        frame = new QFrame(UpdateAccountnext);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 110, 461, 521));
        frame->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);
        frame->setMidLineWidth(0);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 281, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        emailEdit = new QLineEdit(frame);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(30, 120, 401, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        emailEdit->setFont(font1);
        emailEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        passEdit = new QLineEdit(frame);
        passEdit->setObjectName("passEdit");
        passEdit->setGeometry(QRect(30, 170, 401, 31));
        passEdit->setFont(font1);
        passEdit->setEchoMode(QLineEdit::Password);
        passEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        phoneEdit = new QLineEdit(frame);
        phoneEdit->setObjectName("phoneEdit");
        phoneEdit->setGeometry(QRect(30, 220, 401, 31));
        phoneEdit->setFont(font1);
        phoneEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        genderEdit = new QLineEdit(frame);
        genderEdit->setObjectName("genderEdit");
        genderEdit->setGeometry(QRect(30, 320, 401, 31));
        genderEdit->setFont(font1);
        genderEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        privacyEdit = new QLineEdit(frame);
        privacyEdit->setObjectName("privacyEdit");
        privacyEdit->setGeometry(QRect(30, 370, 401, 31));
        privacyEdit->setFont(font1);
        privacyEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        updateButton = new QPushButton(frame);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(180, 430, 101, 41));
        updateButton->setFont(font1);
        dobEdit = new QLineEdit(frame);
        dobEdit->setObjectName("dobEdit");
        dobEdit->setGeometry(QRect(30, 270, 401, 31));
        dobEdit->setFont(font1);
        dobEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        frame_2 = new QFrame(UpdateAccountnext);
        frame_2->setObjectName("frame_2");
        frame_2->setEnabled(false);
        frame_2->setGeometry(QRect(200, 40, 41, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setKerning(false);
        frame_2->setFont(font2);
#if QT_CONFIG(tooltip)
        frame_2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        frame_2->setToolTipDuration(0);
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"bacfground:transparent;\n"
"}"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(0);
        label_2 = new QLabel(UpdateAccountnext);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 20, 141, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font3.setPointSize(16);
        label_2->setFont(font3);

        retranslateUi(UpdateAccountnext);

        QMetaObject::connectSlotsByName(UpdateAccountnext);
    } // setupUi

    void retranslateUi(QDialog *UpdateAccountnext)
    {
        UpdateAccountnext->setWindowTitle(QCoreApplication::translate("UpdateAccountnext", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UpdateAccountnext", "YOUR UPDATE", nullptr));
        emailEdit->setPlaceholderText(QCoreApplication::translate("UpdateAccountnext", "Email", nullptr));
        passEdit->setPlaceholderText(QCoreApplication::translate("UpdateAccountnext", "Password", nullptr));
        phoneEdit->setPlaceholderText(QCoreApplication::translate("UpdateAccountnext", "Phone", nullptr));
        genderEdit->setPlaceholderText(QCoreApplication::translate("UpdateAccountnext", "Gender", nullptr));
        privacyEdit->setPlaceholderText(QCoreApplication::translate("UpdateAccountnext", "Private/Public", nullptr));
        updateButton->setText(QCoreApplication::translate("UpdateAccountnext", "UPDATE", nullptr));
        dobEdit->setPlaceholderText(QCoreApplication::translate("UpdateAccountnext", "Date of Birth", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateAccountnext", "Instagram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateAccountnext: public Ui_UpdateAccountnext {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEACCOUNTNEXT_H
