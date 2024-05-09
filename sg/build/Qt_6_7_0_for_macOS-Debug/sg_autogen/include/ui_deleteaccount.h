/********************************************************************************
** Form generated from reading UI file 'deleteaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEACCOUNT_H
#define UI_DELETEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteAccount
{
public:
    QLabel *label_2;
    QFrame *frame;
    QLabel *label;
    QLineEdit *emailEdit;
    QLineEdit *passEdit;
    QPushButton *deleteButton;
    QFrame *frame_2;

    void setupUi(QDialog *DeleteAccount)
    {
        if (DeleteAccount->objectName().isEmpty())
            DeleteAccount->setObjectName("DeleteAccount");
        DeleteAccount->resize(512, 734);
        DeleteAccount->setMouseTracking(true);
        DeleteAccount->setStyleSheet(QString::fromUtf8("#DeleteAccount{\n"
"	background-image: url(:/delete.jpg);\n"
"}\n"
"#label{\n"
"color:white;\n"
"}\n"
"#label_2{\n"
"color:white;\n"
"}\n"
"#frame_2{\n"
"	background-image: url(:/icon.png);\n"
"}"));
        label_2 = new QLabel(DeleteAccount);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 90, 211, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font.setPointSize(18);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        frame = new QFrame(DeleteAccount);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 190, 431, 251));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        frame->setFont(font1);
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(18);
        font2.setWeight(QFont::Black);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        emailEdit = new QLineEdit(frame);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(30, 80, 371, 31));
        emailEdit->setFont(font1);
        emailEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        passEdit = new QLineEdit(frame);
        passEdit->setObjectName("passEdit");
        passEdit->setGeometry(QRect(30, 120, 371, 31));
        passEdit->setFont(font1);
        passEdit->setEchoMode(QLineEdit::Password);
        passEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(150, 180, 111, 51));
        deleteButton->setFont(font1);
        deleteButton->setMouseTracking(false);
        frame_2 = new QFrame(DeleteAccount);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(230, 70, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);

        retranslateUi(DeleteAccount);

        QMetaObject::connectSlotsByName(DeleteAccount);
    } // setupUi

    void retranslateUi(QDialog *DeleteAccount)
    {
        DeleteAccount->setWindowTitle(QCoreApplication::translate("DeleteAccount", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteAccount", "Instagram", nullptr));
        label->setText(QCoreApplication::translate("DeleteAccount", "DELETE ACCOUNT", nullptr));
        emailEdit->setPlaceholderText(QCoreApplication::translate("DeleteAccount", "Email", nullptr));
        passEdit->setPlaceholderText(QCoreApplication::translate("DeleteAccount", "Password", nullptr));
        deleteButton->setText(QCoreApplication::translate("DeleteAccount", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteAccount: public Ui_DeleteAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEACCOUNT_H
