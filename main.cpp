#include <QApplication>
#include <QIcon>

#include "icon.h"
#include "Tray.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Tray *tray = new Tray();
    tray->show();

    return a.exec();
}
