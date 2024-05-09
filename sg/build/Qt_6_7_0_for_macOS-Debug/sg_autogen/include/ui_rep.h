/********************************************************************************
** Form generated from reading UI file 'rep.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REP_H
#define UI_REP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Rep
{
public:
    QPushButton *repButton;
    QLineEdit *userEdit;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_2;
    QFrame *line_5;
    QLineEdit *lineEdit;
    QPushButton *sendButton;

    void setupUi(QDialog *Rep)
    {
        if (Rep->objectName().isEmpty())
            Rep->setObjectName("Rep");
        Rep->resize(513, 541);
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        Rep->setFont(font);
        Rep->setStyleSheet(QString::fromUtf8("#lineEdit {\n"
"background-color:rgba(255, 255, 255,0.5);\n"
"color:black;\n"
"}\n"
"#Rep{\n"
"	background-image: url(:/re.jpg);\n"
"}\n"
"#sendButton {\n"
"background:transparent;\n"
"color:black;\n"
"}\n"
"\n"
"#repButton {\n"
"color:black;\n"
"}"));
        repButton = new QPushButton(Rep);
        repButton->setObjectName("repButton");
        repButton->setGeometry(QRect(180, 450, 151, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        repButton->setFont(font1);
        userEdit = new QLineEdit(Rep);
        userEdit->setObjectName("userEdit");
        userEdit->setGeometry(QRect(140, 80, 231, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(13);
        userEdit->setFont(font2);
        userEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        userEdit->setToolTipDuration(0);
        userEdit->setAlignment(Qt::AlignCenter);
        line = new QFrame(Rep);
        line->setObjectName("line");
        line->setGeometry(QRect(100, 140, 311, 16));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(Rep);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(90, 50, 20, 101));
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(Rep);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(400, 50, 20, 101));
        line_4->setLineWidth(3);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(Rep);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(100, 40, 91, 16));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(Rep);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(320, 40, 91, 16));
        line_5->setLineWidth(3);
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        lineEdit = new QLineEdit(Rep);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 170, 311, 271));
        lineEdit->setFont(font2);
        lineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit->setToolTipDuration(0);
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        sendButton = new QPushButton(Rep);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(190, 10, 131, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font3.setPointSize(25);
        sendButton->setFont(font3);

        retranslateUi(Rep);

        QMetaObject::connectSlotsByName(Rep);
    } // setupUi

    void retranslateUi(QDialog *Rep)
    {
        Rep->setWindowTitle(QCoreApplication::translate("Rep", "Dialog", nullptr));
        repButton->setText(QCoreApplication::translate("Rep", "SEND", nullptr));
        userEdit->setPlaceholderText(QCoreApplication::translate("Rep", "Username", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Rep", "Enter your message", nullptr));
        sendButton->setText(QCoreApplication::translate("Rep", "REPLY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rep: public Ui_Rep {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REP_H
