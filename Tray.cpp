#include "Tray.h"
#include "icon.h"

Tray::Tray () :window(new Window())
{
    this->tray_menu = new TrayMenu(window);
    const QIcon icon(icon_file);
    this->setIcon(icon);

    // menu initial
    this->setContextMenu(tray_menu);
}

Tray::~Tray()
{
    delete tray_menu;
}

