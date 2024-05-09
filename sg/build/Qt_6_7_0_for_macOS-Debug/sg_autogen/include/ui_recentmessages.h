/********************************************************************************
** Form generated from reading UI file 'recentmessages.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTMESSAGES_H
#define UI_RECENTMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RecentMessages
{
public:
    QTextEdit *textEdit;
    QPushButton *REP;
    QFrame *frame_2;
    QLabel *label;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line_4;
    QFrame *line_5;
    QPushButton *recentButton;

    void setupUi(QDialog *RecentMessages)
    {
        if (RecentMessages->objectName().isEmpty())
            RecentMessages->setObjectName("RecentMessages");
        RecentMessages->resize(499, 522);
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        RecentMessages->setFont(font);
        RecentMessages->setStyleSheet(QString::fromUtf8("#RecentMessages{\n"
"	background-image: url(:/rm.jpg);\n"
"}\n"
"\n"
"#frame_2{\n"
"	background-image: url(:/icon.png);\n"
"}\n"
"#label_2{\n"
"color:white\n"
"}\n"
"#textEdit{\n"
" background-color: rgba(255, 255, 255, 0.35);\n"
"}\n"
"\n"
"#recentButton {\n"
"background: transparent;\n"
"color: black;\n"
"}"));
        textEdit = new QTextEdit(RecentMessages);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 160, 331, 301));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(14);
        textEdit->setFont(font1);
        REP = new QPushButton(RecentMessages);
        REP->setObjectName("REP");
        REP->setGeometry(QRect(190, 470, 121, 41));
        REP->setFont(font);
        frame_2 = new QFrame(RecentMessages);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(220, 10, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(0);
        label = new QLabel(RecentMessages);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 30, 201, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(18);
        font2.setWeight(QFont::Black);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(RecentMessages);
        line->setObjectName("line");
        line->setGeometry(QRect(330, 480, 121, 20));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(RecentMessages);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(40, 90, 20, 401));
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(RecentMessages);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(50, 80, 401, 20));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(RecentMessages);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(440, 90, 20, 401));
        line_4->setLineWidth(3);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(RecentMessages);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(50, 480, 121, 20));
        line_5->setLineWidth(3);
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        recentButton = new QPushButton(RecentMessages);
        recentButton->setObjectName("recentButton");
        recentButton->setGeometry(QRect(130, 90, 231, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font3.setPointSize(17);
        recentButton->setFont(font3);

        retranslateUi(RecentMessages);

        QMetaObject::connectSlotsByName(RecentMessages);
    } // setupUi

    void retranslateUi(QDialog *RecentMessages)
    {
        RecentMessages->setWindowTitle(QCoreApplication::translate("RecentMessages", "Dialog", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("RecentMessages", "Information", nullptr));
        REP->setText(QCoreApplication::translate("RecentMessages", "REPLY", nullptr));
        label->setText(QCoreApplication::translate("RecentMessages", "Instagram", nullptr));
        recentButton->setText(QCoreApplication::translate("RecentMessages", "RECENT MESSAGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecentMessages: public Ui_RecentMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTMESSAGES_H
