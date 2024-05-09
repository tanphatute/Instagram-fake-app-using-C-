/********************************************************************************
** Form generated from reading UI file 'searchaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHACCOUNT_H
#define UI_SEARCHACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SearchAccount
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *Search;
    QFrame *line_3;
    QFrame *line_5;
    QFrame *line;
    QTextEdit *textEdit;
    QFrame *line_2;

    void setupUi(QDialog *SearchAccount)
    {
        if (SearchAccount->objectName().isEmpty())
            SearchAccount->setObjectName("SearchAccount");
        SearchAccount->resize(451, 674);
        SearchAccount->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(SearchAccount);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 451, 674));
        QFont font;
        font.setPointSize(18);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("#frame {\n"
"	background-image: url(:/bg_search.jpeg);\n"
"}\n"
"#label{\n"
"color:white\n"
";\n"
"}\n"
"#lineEdit{\n"
"background-color:rgba(112, 57, 135,1);\n"
"color:white;\n"
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
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 361, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label->setFont(font1);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 90, 231, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(13);
        lineEdit->setFont(font2);
        lineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit->setToolTipDuration(0);
        lineEdit->setAlignment(Qt::AlignCenter);
        Search = new QPushButton(frame);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(110, 140, 231, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        Search->setFont(font3);
        line_3 = new QFrame(frame);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(60, 65, 16, 150));
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(frame);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(375, 65, 16, 150));
        line_5->setLineWidth(3);
        line_5->setMidLineWidth(0);
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(65, 205, 321, 16));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(70, 240, 311, 301));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font4.setPointSize(14);
        textEdit->setFont(font4);
        line_2 = new QFrame(frame);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(70, 60, 311, 16));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label->raise();
        lineEdit->raise();
        Search->raise();
        line_3->raise();
        line->raise();
        line_5->raise();
        textEdit->raise();
        line_2->raise();

        retranslateUi(SearchAccount);

        QMetaObject::connectSlotsByName(SearchAccount);
    } // setupUi

    void retranslateUi(QDialog *SearchAccount)
    {
        SearchAccount->setWindowTitle(QCoreApplication::translate("SearchAccount", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SearchAccount", "SEARCH ACCOUNT", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("SearchAccount", "Username", nullptr));
        Search->setText(QCoreApplication::translate("SearchAccount", "Search", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("SearchAccount", "Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchAccount: public Ui_SearchAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHACCOUNT_H
