#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QCloseEvent>

class Window : public QWidget
{
    Q_OBJECT
public:
    Window();
    ~Window();
    virtual void closeEvent(QCloseEvent *event);
};

#endif // WINDOW_H
