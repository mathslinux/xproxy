#include <QApplication>
#include "tray.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Tray *tray = new Tray();
    tray->show();

    return a.exec();
}