QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QMAKE_CXXFLAGS += -std=c++0x

TARGET = TabBarDemonstrator
TEMPLATE = app

SOURCES += $$PWD/src/main.cpp \
    $$PWD/src/demowindow.cpp \

HEADERS  += $$PWD/src/demowindow.h

RESOURCES += \
    $$PWD/res/Resources.qrc

include(../FancyTabBar.pri)
