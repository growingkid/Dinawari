#***************************************
#****Dinawari, serial port terminal*****
#****Created by growingkid**************
#***************************************

QT += core gui widgets serialport

TARGET = Dinawari
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++1y
#QMAKE_LFLAGS += -no-pie

target.path = /bin
INSTALLS += target

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
