/********************************************************************************
** Form generated from reading UI file 'oldmessages.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OLDMESSAGES_H
#define UI_OLDMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_OldMessages
{
public:
    QFrame *line;
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line_4;
    QTextEdit *textEdit;
    QPushButton *oldButton;

    void setupUi(QDialog *OldMessages)
    {
        if (OldMessages->objectName().isEmpty())
            OldMessages->setObjectName("OldMessages");
        OldMessages->resize(537, 512);
        OldMessages->setStyleSheet(QString::fromUtf8("#OldMessages{\n"
"	background-image: url(:/om.jpg);\n"
"}\n"
"#label{\n"
"color:white;\n"
"}\n"
"QTextEdit {\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}\n"
"QPushButton {\n"
"background:transparent;\n"
"color:white;\n"
"}"));
        line = new QFrame(OldMessages);
        line->setObjectName("line");
        line->setGeometry(QRect(30, 460, 461, 16));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(OldMessages);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 120, 20, 351));
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(OldMessages);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(30, 110, 461, 16));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(OldMessages);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(480, 120, 20, 351));
        line_4->setLineWidth(3);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        textEdit = new QTextEdit(OldMessages);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 140, 421, 301));
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font.setPointSize(14);
        textEdit->setFont(font);
        oldButton = new QPushButton(OldMessages);
        oldButton->setObjectName("oldButton");
        oldButton->setGeometry(QRect(160, 40, 211, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(17);
        oldButton->setFont(font1);

        retranslateUi(OldMessages);

        QMetaObject::connectSlotsByName(OldMessages);
    } // setupUi

    void retranslateUi(QDialog *OldMessages)
    {
        OldMessages->setWindowTitle(QCoreApplication::translate("OldMessages", "Dialog", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("OldMessages", "Information", nullptr));
        oldButton->setText(QCoreApplication::translate("OldMessages", "OLD MESSAGES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OldMessages: public Ui_OldMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OLDMESSAGES_H
