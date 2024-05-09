/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QFrame *frame;
    QPushButton *SearchAccount;
    QPushButton *UpdateAccount;
    QPushButton *DeleteAccount;
    QPushButton *Follow;
    QPushButton *Followers;
    QPushButton *Following;
    QFrame *frame_2;
    QPushButton *Messages;
    QPushButton *OldMessages;
    QPushButton *RecentMessages;
    QPushButton *BlockUser;
    QPushButton *BlockedUser;
    QPushButton *RateApp;
    QPushButton *AppRating;
    QLabel *label;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(450, 800);
        Menu->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Menu);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 450, 800));
        QFont font;
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(false);
        frame->setFont(font);
        frame->setMouseTracking(true);
        frame->setStyleSheet(QString::fromUtf8("#frame {\n"
"background-image: url(:/bg_menu.jpeg);\n"
"}\n"
"#frame_2{\n"
"background-image: url(:/icon.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        SearchAccount = new QPushButton(frame);
        SearchAccount->setObjectName("SearchAccount");
        SearchAccount->setEnabled(true);
        SearchAccount->setGeometry(QRect(59, 70, 161, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font1.setBold(false);
        SearchAccount->setFont(font1);
        SearchAccount->setMouseTracking(false);
        SearchAccount->setLayoutDirection(Qt::LeftToRight);
        SearchAccount->setAutoFillBackground(false);
        SearchAccount->setStyleSheet(QString::fromUtf8(""));
        SearchAccount->setAutoDefault(true);
        UpdateAccount = new QPushButton(frame);
        UpdateAccount->setObjectName("UpdateAccount");
        UpdateAccount->setGeometry(QRect(230, 70, 161, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        UpdateAccount->setFont(font2);
        UpdateAccount->setMouseTracking(false);
        UpdateAccount->setLayoutDirection(Qt::LeftToRight);
        UpdateAccount->setAutoFillBackground(false);
        DeleteAccount = new QPushButton(frame);
        DeleteAccount->setObjectName("DeleteAccount");
        DeleteAccount->setGeometry(QRect(60, 120, 161, 51));
        DeleteAccount->setFont(font2);
        DeleteAccount->setLayoutDirection(Qt::LeftToRight);
        DeleteAccount->setAutoFillBackground(false);
        Follow = new QPushButton(frame);
        Follow->setObjectName("Follow");
        Follow->setGeometry(QRect(230, 120, 161, 51));
        Follow->setFont(font2);
        Follow->setLayoutDirection(Qt::LeftToRight);
        Follow->setAutoFillBackground(false);
        Followers = new QPushButton(frame);
        Followers->setObjectName("Followers");
        Followers->setGeometry(QRect(60, 170, 161, 51));
        Followers->setFont(font2);
        Followers->setLayoutDirection(Qt::LeftToRight);
        Followers->setAutoFillBackground(false);
        Following = new QPushButton(frame);
        Following->setObjectName("Following");
        Following->setGeometry(QRect(230, 170, 161, 51));
        Following->setFont(font2);
        Following->setLayoutDirection(Qt::LeftToRight);
        Following->setAutoFillBackground(false);
        Following->setStyleSheet(QString::fromUtf8(""));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 10, 41, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);
        Messages = new QPushButton(frame);
        Messages->setObjectName("Messages");
        Messages->setGeometry(QRect(60, 220, 161, 51));
        Messages->setFont(font2);
        Messages->setLayoutDirection(Qt::LeftToRight);
        Messages->setAutoFillBackground(false);
        OldMessages = new QPushButton(frame);
        OldMessages->setObjectName("OldMessages");
        OldMessages->setGeometry(QRect(230, 220, 161, 51));
        OldMessages->setFont(font2);
        OldMessages->setLayoutDirection(Qt::LeftToRight);
        OldMessages->setAutoFillBackground(false);
        RecentMessages = new QPushButton(frame);
        RecentMessages->setObjectName("RecentMessages");
        RecentMessages->setGeometry(QRect(60, 270, 331, 51));
        RecentMessages->setFont(font2);
        RecentMessages->setMouseTracking(false);
        RecentMessages->setLayoutDirection(Qt::LeftToRight);
        RecentMessages->setAutoFillBackground(false);
        BlockUser = new QPushButton(frame);
        BlockUser->setObjectName("BlockUser");
        BlockUser->setGeometry(QRect(60, 320, 161, 51));
        BlockUser->setFont(font2);
        BlockUser->setLayoutDirection(Qt::LeftToRight);
        BlockUser->setAutoFillBackground(false);
        BlockedUser = new QPushButton(frame);
        BlockedUser->setObjectName("BlockedUser");
        BlockedUser->setGeometry(QRect(230, 320, 161, 51));
        BlockedUser->setFont(font2);
        BlockedUser->setLayoutDirection(Qt::LeftToRight);
        BlockedUser->setAutoFillBackground(false);
        RateApp = new QPushButton(frame);
        RateApp->setObjectName("RateApp");
        RateApp->setGeometry(QRect(60, 370, 161, 51));
        RateApp->setFont(font2);
        RateApp->setLayoutDirection(Qt::LeftToRight);
        RateApp->setAutoFillBackground(false);
        AppRating = new QPushButton(frame);
        AppRating->setObjectName("AppRating");
        AppRating->setGeometry(QRect(230, 370, 161, 51));
        AppRating->setFont(font2);
        AppRating->setLayoutDirection(Qt::LeftToRight);
        AppRating->setAutoFillBackground(false);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 131, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FVF Fernando 08")});
        font3.setPointSize(16);
        label->setFont(font3);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Dialog", nullptr));
        SearchAccount->setText(QCoreApplication::translate("Menu", "Search Account", nullptr));
        UpdateAccount->setText(QCoreApplication::translate("Menu", "Update Account", nullptr));
        DeleteAccount->setText(QCoreApplication::translate("Menu", "Delete Account", nullptr));
        Follow->setText(QCoreApplication::translate("Menu", "Follow", nullptr));
        Followers->setText(QCoreApplication::translate("Menu", "Followers", nullptr));
        Following->setText(QCoreApplication::translate("Menu", "Following", nullptr));
        Messages->setText(QCoreApplication::translate("Menu", "Messages", nullptr));
        OldMessages->setText(QCoreApplication::translate("Menu", "Old Messages", nullptr));
        RecentMessages->setText(QCoreApplication::translate("Menu", "Recent Messages", nullptr));
        BlockUser->setText(QCoreApplication::translate("Menu", "Block User", nullptr));
        BlockedUser->setText(QCoreApplication::translate("Menu", "Blocked User", nullptr));
        RateApp->setText(QCoreApplication::translate("Menu", "Rate App", nullptr));
        AppRating->setText(QCoreApplication::translate("Menu", "App Rating", nullptr));
        label->setText(QCoreApplication::translate("Menu", "Instagram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
