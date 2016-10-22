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
    admindlg.cpp \
    stationdlg.cpp \
    addstationdlg.cpp \
    modifystationdlg.cpp \
    addtraindlg.cpp \
    addpassengerdlg.cpp \
    modifypassengerdlg.cpp \
    modifytraindlg.cpp

HEADERS  += mainwindow.h \
    logindlg.h \
    register.h \
    inquire.h \
    bookdlg.h \
    admindlg.h \
    stationdlg.h \
    addstationdlg.h \
    modifystationdlg.h \
    addtraindlg.h \
    addpassengerdlg.h \
    modifypassengerdlg.h \
    modifytraindlg.h

FORMS    += mainwindow.ui \
    logindlg.ui \
    register.ui \
    inquire.ui \
    bookdlg.ui \
    admindlg.ui \
    stationdlg.ui \
    addstationdlg.ui \
    modifystationdlg.ui \
    addtraindlg.ui \
    addpassengerdlg.ui \
    modifypassengerdlg.ui \
    modifytraindlg.ui
