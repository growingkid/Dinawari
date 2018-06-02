#***************************************
#****Dinawari, serial port terminal*****
#****Created by growingkid**************
#***************************************

QT += core gui widgets serialport

TARGET = dinawari
TEMPLATE = app
#QMAKE_CXXFLAGS += -std=c++17
#QMAKE_LFLAGS += -no-pie

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        trax.cpp \
        sth.cpp \
        hth.cpp

HEADERS += \
        trax.h \
        sth.h \
        hth.h

RESOURCES += \
    resources.qrc
