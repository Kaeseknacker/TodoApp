#-------------------------------------------------
#
# Project created by QtCreator 2017-11-16T20:10:42
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TodoApp
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    Task.cpp

HEADERS  += MainWindow.h \
    Task.h

FORMS    += MainWindow.ui \
    Task.ui
