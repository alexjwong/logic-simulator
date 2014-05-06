#-------------------------------------------------
#
# Project created by QtCreator 2014-05-01T20:09:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mainwindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    AND.cpp \
    Gate.cpp \
    Input.cpp \
    NAND.cpp \
    NOR.cpp \
    NOT.cpp \
    OR.cpp \
    Output.cpp \
    truthtable.cpp \
    XNOR.cpp \
    XOR.cpp

HEADERS  += mainwindow.h \
    AND.h \
    Gate.h \
    Input.h \
    NAND.h \
    NOR.h \
    NOT.h \
    OR.h \
    Output.h \
    XNOR.h \
    XOR.h \
    gates.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    mainwindow.pro.user
