/********************************************************************************
** Form generated from reading UI file 'blockeduser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKEDUSER_H
#define UI_BLOCKEDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BlockedUser
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QFrame *frame_2;
    QPushButton *pushButton;

    void setupUi(QDialog *BlockedUser)
    {
        if (BlockedUser->objectName().isEmpty())
            BlockedUser->setObjectName("BlockedUser");
        BlockedUser->resize(557, 659);
        BlockedUser->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"	background-image: url(:/icon.png);\n"
"}\n"
"#textEdit{\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}\n"
"#BlockedUser{\n"
"	background-image: url(:/blk.jpg);\n"
"}\n"
"QLabel{\n"
"color:black;}\n"
"QPushButton {\n"
"color:black;}"));
        textEdit = new QTextEdit(BlockedUser);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(60, 230, 451, 361));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font.setPointSize(14);
        textEdit->setFont(font);
        label = new QLabel(BlockedUser);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 60, 201, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label->setFont(font1);
        frame_2 = new QFrame(BlockedUser);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(250, 40, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(0);
        pushButton = new QPushButton(BlockedUser);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(169, 141, 231, 51));
        pushButton->setFont(font);

        retranslateUi(BlockedUser);

        QMetaObject::connectSlotsByName(BlockedUser);
    } // setupUi

    void retranslateUi(QDialog *BlockedUser)
    {
        BlockedUser->setWindowTitle(QCoreApplication::translate("BlockedUser", "Dialog", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("BlockedUser", "Information", nullptr));
        label->setText(QCoreApplication::translate("BlockedUser", "Instagram", nullptr));
        pushButton->setText(QCoreApplication::translate("BlockedUser", "Show my blocked users", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlockedUser: public Ui_BlockedUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKEDUSER_H
