#-------------------------------------------------
#
# Project created by QtCreator 2018-10-03T22:27:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cardioid
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qtcardoid.cpp \
    zeichenflaeche.cpp

HEADERS  += mainwindow.h \
    qtcardoid.h \
    zeichenflaeche.h

FORMS    += mainwindow.ui \
    qtcardoid.ui \
    zeichenflaeche.ui
