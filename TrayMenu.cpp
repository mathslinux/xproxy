#include <QApplication>
#include "TrayMenu.h"

TrayMenu::TrayMenu(Window *window)
{
    this->_win = window;
    this->addAction("Show configuration", this->_win, SLOT(show()));
    this->addAction("Quit", QApplication::instance(), SLOT(quit()));
}

TrayMenu::~TrayMenu()
{

}
