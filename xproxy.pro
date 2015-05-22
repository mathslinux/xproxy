QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xproxy
TEMPLATE = app


SOURCES += main.cpp \
    Tray.cpp \
    TrayMenu.cpp \
    Window.cpp

HEADERS  += Tray.h \
    icon.h \
    TrayMenu.h \
    Window.h

RESOURCES += \
    resources.qrc
