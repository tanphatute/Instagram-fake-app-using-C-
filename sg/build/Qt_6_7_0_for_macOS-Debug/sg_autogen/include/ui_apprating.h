/********************************************************************************
** Form generated from reading UI file 'apprating.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPRATING_H
#define UI_APPRATING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AppRating
{
public:
    QFrame *line;
    QTextEdit *textEdit;
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line_5;
    QFrame *line_4;
    QLabel *label_2;
    QFrame *frame_2;
    QPushButton *pushButton;

    void setupUi(QDialog *AppRating)
    {
        if (AppRating->objectName().isEmpty())
            AppRating->setObjectName("AppRating");
        AppRating->resize(640, 650);
        AppRating->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"#lineEdit{\n"
"background-color:rgba(112, 57, 135,1);\n"
"color:black;\n"
"}\n"
"\n"
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
"}\n"
"#AppRating{\n"
"	background-image: url(:/at.jpg);\n"
"}\n"
""));
        line = new QFrame(AppRating);
        line->setObjectName("line");
        line->setGeometry(QRect(30, 620, 591, 20));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        textEdit = new QTextEdit(AppRating);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(60, 140, 531, 461));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font.setPointSize(14);
        textEdit->setFont(font);
        line_3 = new QFrame(AppRating);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 110, 20, 521));
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(AppRating);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(30, 100, 141, 16));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(AppRating);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(610, 110, 20, 521));
        line_5->setStyleSheet(QString::fromUtf8(""));
        line_5->setLineWidth(3);
        line_5->setMidLineWidth(0);
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(AppRating);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(480, 100, 141, 16));
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(AppRating);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, -10, 201, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label_2->setFont(font1);
        frame_2 = new QFrame(AppRating);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(240, 10, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);
        pushButton = new QPushButton(AppRating);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 60, 311, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(25);
        pushButton->setFont(font2);

        retranslateUi(AppRating);

        QMetaObject::connectSlotsByName(AppRating);
    } // setupUi

    void retranslateUi(QDialog *AppRating)
    {
        AppRating->setWindowTitle(QCoreApplication::translate("AppRating", "Dialog", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("AppRating", "Information", nullptr));
        label_2->setText(QCoreApplication::translate("AppRating", "Instagram", nullptr));
        pushButton->setText(QCoreApplication::translate("AppRating", "APP RATING", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppRating: public Ui_AppRating {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPRATING_H
