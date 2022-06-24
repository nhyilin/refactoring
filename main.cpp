#include git add . <QCoreApplication>
#include <QDebug>
#include <QApplication>
#include "./mainwindow.h"

int main(int argc, char *argv[]) {
    srand((unsigned) time(nullptr));
    QApplication a(argc, argv);
    MainWindow mainwindow;
    mainwindow.show();
    return QCoreApplication::exec();
}
