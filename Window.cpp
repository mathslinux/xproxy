#include "Window.h"

Window::Window()
{

}

Window::~Window()
{

}

void Window::closeEvent(QCloseEvent *event)
{
    event->ignore();
    this->hide();
}
