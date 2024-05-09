#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //SearchAccount searchAccount(&w);
    w.show();
    return a.exec();
}
