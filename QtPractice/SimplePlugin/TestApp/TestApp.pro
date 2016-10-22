#-------------------------------------------------
#
# Project created by QtCreator 2016-10-22T09:14:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestApp
TEMPLATE = app

DESTDIR = ../bin


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    ../interfaces.h

FORMS    += mainwindow.ui

INCLUDEPATH += \
    += ../ \
