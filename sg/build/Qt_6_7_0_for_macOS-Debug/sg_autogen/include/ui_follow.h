/********************************************************************************
** Form generated from reading UI file 'follow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOW_H
#define UI_FOLLOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Follow
{
public:
    QFrame *line;
    QFrame *line_5;
    QLabel *label;
    QFrame *frame_2;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit_2;
    QFrame *line_6;
    QFrame *line_2;
    QTextEdit *textEdit;
    QLineEdit *usernameEdit;
    QPushButton *followButton;

    void setupUi(QDialog *Follow)
    {
        if (Follow->objectName().isEmpty())
            Follow->setObjectName("Follow");
        Follow->resize(521, 733);
        Follow->setStyleSheet(QString::fromUtf8("#Follow{ \n"
"	background-image: url(:/fl.jpg);\n"
"}\n"
"\n"
"#label{\n"
"color:white\n"
";\n"
"}\n"
"#lineEdit{\n"
"background-color:rgba(255, 255, 255,1);\n"
"color:black;\n"
"}\n"
"QPushButton{\n"
"background-color:#362854;\n"
"color:black;\n"
"}\n"
"\n"
"QLineEdit {\n"
"background-color:rgba(255, 255, 255,0.5);\n"
"color:white;\n"
"}\n"
"\n"
"QTextEdit {\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}\n"
"#frame_2{\n"
"	background-image: url(:/icon.png);\n"
"}\n"
""));
        line = new QFrame(Follow);
        line->setObjectName("line");
        line->setGeometry(QRect(50, 680, 431, 20));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(Follow);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(470, 50, 20, 641));
        line_5->setLineWidth(3);
        line_5->setMidLineWidth(0);
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(Follow);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 110, 201, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font.setPointSize(18);
        font.setWeight(QFont::Black);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label->setFont(font);
        frame_2 = new QFrame(Follow);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(230, 100, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);
        lineEdit_2 = new QLineEdit(Follow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(390, 760, 231, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(15);
        lineEdit_2->setFont(font1);
        lineEdit_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_2->setToolTipDuration(0);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        textEdit_2 = new QTextEdit(Follow);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(350, 830, 311, 301));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(14);
        textEdit_2->setFont(font2);
        line_6 = new QFrame(Follow);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(40, 50, 20, 641));
        line_6->setLineWidth(3);
        line_6->setMidLineWidth(0);
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(Follow);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(50, 40, 431, 20));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        textEdit = new QTextEdit(Follow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 260, 371, 291));
        textEdit->setFont(font2);
        usernameEdit = new QLineEdit(Follow);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(90, 190, 351, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font3.setPointSize(18);
        usernameEdit->setFont(font3);
        usernameEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        followButton = new QPushButton(Follow);
        followButton->setObjectName("followButton");
        followButton->setGeometry(QRect(220, 580, 101, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        followButton->setFont(font4);
        followButton->setMouseTracking(false);

        retranslateUi(Follow);

        QMetaObject::connectSlotsByName(Follow);
    } // setupUi

    void retranslateUi(QDialog *Follow)
    {
        Follow->setWindowTitle(QCoreApplication::translate("Follow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Follow", "Instagram", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Follow", "FOLLOWER", nullptr));
        textEdit_2->setPlaceholderText(QCoreApplication::translate("Follow", "Information", nullptr));
        textEdit->setPlaceholderText(QString());
        usernameEdit->setPlaceholderText(QCoreApplication::translate("Follow", "Username", nullptr));
        followButton->setText(QCoreApplication::translate("Follow", "Follow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Follow: public Ui_Follow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOW_H
