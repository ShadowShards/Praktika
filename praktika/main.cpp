#include "mainwindow.h"
#include "tablewindow.h"
#include <QApplication>
#include "Book.h"

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
