#-------------------------------------------------
#
# Project created by QtCreator 2016-10-19T16:10:15
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = trainticket
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindlg.cpp \
    register.cpp \
    inquire.cpp \
    bookdlg.cpp \
    admindlg.cpp

HEADERS  += mainwindow.h \
    logindlg.h \
    register.h \
    inquire.h \
    bookdlg.h \
    admindlg.h

FORMS    += mainwindow.ui \
    logindlg.ui \
    register.ui \
    inquire.ui \
    bookdlg.ui \
    admindlg.ui
