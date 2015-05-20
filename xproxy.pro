QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = helloworld
TEMPLATE = app


SOURCES += main.cpp \
    tray.cpp

HEADERS  += tray.h

DISTFILES += \
    icons/proxy.png
