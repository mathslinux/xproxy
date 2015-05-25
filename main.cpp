#include <QApplication>
#include <QIcon>

#include "icon.h"
#include "Tray.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Do not close after config window is close
    QApplication::setQuitOnLastWindowClosed(false);

    Tray *tray = new Tray();
    tray->show();

    return a.exec();
}
