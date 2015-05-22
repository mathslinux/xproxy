#ifndef TRAY_H
#define TRAY_H

#include <QSystemTrayIcon>
#include <QWidget>
#include "TrayMenu.h"
#include "Window.h"

class Tray : public QSystemTrayIcon
{
    Q_OBJECT
public:
    Tray();
    ~Tray();
private:
    QMenu *tray_menu;
    Window *window;
};

#endif // TRAY_H
