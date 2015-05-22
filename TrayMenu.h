#ifndef TRAYMENU_H
#define TRAYMENU_H

#include <QMenu>
#include "Window.h"

class TrayMenu : public QMenu
{
    Q_OBJECT
public:
    TrayMenu(Window *window);
    ~TrayMenu();
private:
    Window *_win;
};

#endif // TRAYMENU_H
