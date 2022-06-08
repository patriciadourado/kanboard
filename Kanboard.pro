#-------------------------------------------------
#
# Project created by QtCreator 2022-12-07T23:17:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kanboard
TEMPLATE = app


SOURCES += main.cpp\
        kanboard.cpp \
    secdialog.cpp

HEADERS  += kanboard.h \
    secdialog.h

FORMS    += kanboard.ui \
    secdialog.ui

RC_ICONS = icon.ico
