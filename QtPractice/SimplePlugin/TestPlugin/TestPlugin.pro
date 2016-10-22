#-------------------------------------------------
#
# Project created by QtCreator 2016-10-22T10:11:36
#
#-------------------------------------------------

QT       -= gui

TARGET = TestPlugin
TEMPLATE = lib
CONFIG       += plugin

DEFINES += TESTPLUGIN_LIBRARY

DESTDIR = ../bin/plugins

SOURCES += testplugin.cpp

HEADERS += testplugin.h\
        testplugin_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

INCLUDEPATH += \
    += ../ \
