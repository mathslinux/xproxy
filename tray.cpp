#include "tray.h"
#include <QSystemTrayIcon>

Tray::Tray ()
{
    // FIXME: hard code
    const QIcon icon(QString("/Users/dunrong/Develop/xproxy/icons/proxy.png"));
    this->setIcon(icon);
}

Tray::~Tray()
{

}

