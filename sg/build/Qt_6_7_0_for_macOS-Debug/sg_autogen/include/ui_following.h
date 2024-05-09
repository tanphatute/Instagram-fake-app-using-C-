/********************************************************************************
** Form generated from reading UI file 'following.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOWING_H
#define UI_FOLLOWING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Following
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QFrame *frame_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Following)
    {
        if (Following->objectName().isEmpty())
            Following->setObjectName("Following");
        Following->resize(523, 746);
        Following->setStyleSheet(QString::fromUtf8("#Following{ \n"
"	background-image: url(:/flw.jpg);\n"
"}\n"
"\n"
"#label{\n"
"color:white\n"
";\n"
"}\n"
"#lineEdit{\n"
"background-color:rgba(112, 57, 135,1);\n"
"color:black;\n"
"}\n"
"QPushButton{\n"
"background-color:#362854;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"\n"
"QTextEdit {\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}\n"
"#frame_2{\n"
"	background-image: url(:/icon.png);\n"
"}\n"
"#lineEdit{\n"
"background-color:rgba(255, 255, 255,0.75);\n"
"}"));
        textEdit = new QTextEdit(Following);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(60, 330, 411, 301));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font.setPointSize(14);
        textEdit->setFont(font);
        label = new QLabel(Following);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 160, 201, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label->setFont(font1);
        frame_2 = new QFrame(Following);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(240, 140, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);
        pushButton = new QPushButton(Following);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 230, 211, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setBold(false);
        pushButton->setFont(font2);

        retranslateUi(Following);

        QMetaObject::connectSlotsByName(Following);
    } // setupUi

    void retranslateUi(QDialog *Following)
    {
        Following->setWindowTitle(QCoreApplication::translate("Following", "Dialog", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("Following", "Information", nullptr));
        label->setText(QCoreApplication::translate("Following", "Instagram", nullptr));
        pushButton->setText(QCoreApplication::translate("Following", "Show my followings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Following: public Ui_Following {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOWING_H
