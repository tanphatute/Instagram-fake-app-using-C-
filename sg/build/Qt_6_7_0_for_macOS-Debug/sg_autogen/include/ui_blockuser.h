/********************************************************************************
** Form generated from reading UI file 'blockuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKUSER_H
#define UI_BLOCKUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BlockUser
{
public:
    QLabel *label_2;
    QFrame *frame_2;
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *Block;

    void setupUi(QDialog *BlockUser)
    {
        if (BlockUser->objectName().isEmpty())
            BlockUser->setObjectName("BlockUser");
        BlockUser->resize(543, 526);
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        BlockUser->setFont(font);
        BlockUser->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"	background-image: url(:/icon.png);\n"
"}\n"
"#BlockUser{\n"
"	background-image: url(:/bl.jpg);\n"
"}\n"
"QLabel{\n"
"color:black;}\n"
"#lineEdit{\n"
"color:black;}"));
        label_2 = new QLabel(BlockUser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 60, 191, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(BlockUser);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(250, 40, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        frame = new QFrame(BlockUser);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 150, 431, 251));
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(18);
        font2.setWeight(QFont::Black);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 80, 371, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font3.setPointSize(18);
        lineEdit->setFont(font3);
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 140, 371, 131));
        Block = new QPushButton(BlockUser);
        Block->setObjectName("Block");
        Block->setGeometry(QRect(230, 420, 101, 41));
        Block->setFont(font);
        Block->setMouseTracking(false);

        retranslateUi(BlockUser);

        QMetaObject::connectSlotsByName(BlockUser);
    } // setupUi

    void retranslateUi(QDialog *BlockUser)
    {
        BlockUser->setWindowTitle(QCoreApplication::translate("BlockUser", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("BlockUser", "Instagram", nullptr));
        label->setText(QCoreApplication::translate("BlockUser", "BLOCK USER", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("BlockUser", "Username", nullptr));
        Block->setText(QCoreApplication::translate("BlockUser", "Block!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlockUser: public Ui_BlockUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKUSER_H
