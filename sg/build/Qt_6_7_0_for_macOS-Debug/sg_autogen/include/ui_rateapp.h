/********************************************************************************
** Form generated from reading UI file 'rateapp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATEAPP_H
#define UI_RATEAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RateApp
{
public:
    QFrame *frame;
    QLabel *label;
    QTextEdit *commentEdit;
    QPushButton *rateButton;
    QLabel *label_2;
    QFrame *frame_2;

    void setupUi(QDialog *RateApp)
    {
        if (RateApp->objectName().isEmpty())
            RateApp->setObjectName("RateApp");
        RateApp->resize(611, 552);
        QFont font;
        font.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        RateApp->setFont(font);
        RateApp->setStyleSheet(QString::fromUtf8("\n"
"#frame{\n"
" background-color: rgba(255, 255, 255, 0.25); \n"
"border-radius: 35px;\n"
"}\n"
"#textEdit{\n"
"background-color:rgba(82, 82, 82,0.5);\n"
"color:white;\n"
"}\n"
"#RateApp{\n"
"	background-image: url(:/ra.jpg);\n"
"}\n"
"#frame_2{\n"
"	background-image: url(:/icon.png);\n"
"}\n"
"QLabel{\n"
"color:black;}"));
        frame = new QFrame(RateApp);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 130, 481, 401));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 351, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Black);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        commentEdit = new QTextEdit(frame);
        commentEdit->setObjectName("commentEdit");
        commentEdit->setGeometry(QRect(70, 90, 341, 231));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font2.setPointSize(14);
        commentEdit->setFont(font2);
        rateButton = new QPushButton(frame);
        rateButton->setObjectName("rateButton");
        rateButton->setGeometry(QRect(190, 330, 111, 41));
        rateButton->setFont(font);
        label_2 = new QLabel(RateApp);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 50, 201, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font3.setPointSize(18);
        font3.setWeight(QFont::Black);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        label_2->setFont(font3);
        frame_2 = new QFrame(RateApp);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(270, 30, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);

        retranslateUi(RateApp);

        QMetaObject::connectSlotsByName(RateApp);
    } // setupUi

    void retranslateUi(QDialog *RateApp)
    {
        RateApp->setWindowTitle(QCoreApplication::translate("RateApp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RateApp", "RATE APP", nullptr));
        commentEdit->setPlaceholderText(QString());
        rateButton->setText(QCoreApplication::translate("RateApp", "SEND", nullptr));
        label_2->setText(QCoreApplication::translate("RateApp", "Instagram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RateApp: public Ui_RateApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATEAPP_H
