/********************************************************************************
** Form generated from reading UI file 'follower.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOWER_H
#define UI_FOLLOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Follower
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QFrame *frame_2;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line;
    QFrame *line_5;
    QPushButton *pushButton;

    void setupUi(QDialog *Follower)
    {
        if (Follower->objectName().isEmpty())
            Follower->setObjectName("Follower");
        Follower->resize(521, 733);
        Follower->setStyleSheet(QString::fromUtf8("#Follower{ \n"
"	background-image: url(:/follow\306\260.jpg);\n"
"}\n"
"\n"
"#label{\n"
"color:white\n"
";\n"
"}\n"
"#pushButton{\n"
"background-color:rgba(112, 57, 135,1);\n"
"color:black;\n"
"}\n"
"QPushButton{\n"
"background-color:#362854;\n"
"color:white;\n"
"}\n"
"\n"
"QLineEdit {\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}\n"
"\n"
"QTextEdit {\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}\n"
"#frame_2{\n"
"	background-image: url(:/icon.png);\n"
"}"));
        textEdit = new QTextEdit(Follower);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(100, 300, 311, 301));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font.setPointSize(14);
        textEdit->setFont(font);
        label = new QLabel(Follower);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 110, 201, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label->setFont(font1);
        frame_2 = new QFrame(Follower);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(230, 90, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);
        line_2 = new QFrame(Follower);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(100, 290, 311, 16));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(Follower);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(90, 300, 20, 301));
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line = new QFrame(Follower);
        line->setObjectName("line");
        line->setGeometry(QRect(100, 590, 311, 16));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(Follower);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(400, 300, 20, 301));
        line_5->setLineWidth(3);
        line_5->setMidLineWidth(0);
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton = new QPushButton(Follower);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 210, 191, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setBold(false);
        pushButton->setFont(font2);

        retranslateUi(Follower);

        QMetaObject::connectSlotsByName(Follower);
    } // setupUi

    void retranslateUi(QDialog *Follower)
    {
        Follower->setWindowTitle(QCoreApplication::translate("Follower", "Dialog", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("Follower", "Information", nullptr));
        label->setText(QCoreApplication::translate("Follower", "Instagram", nullptr));
        pushButton->setText(QCoreApplication::translate("Follower", "Show my followers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Follower: public Ui_Follower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOWER_H
