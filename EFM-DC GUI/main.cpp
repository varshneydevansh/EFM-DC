#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOrganizationName("Devansh Varshney");
    QApplication::setOrganizationDomain("devanshvarshney.blogspot.com");
    QApplication::setApplicationName("EFM-DC");

    MainWindow w;
    w.show();

    return a.exec();
}
