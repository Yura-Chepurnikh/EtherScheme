QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    WorkSpace.cpp \
    main.cpp \
    mainwindow.cpp \
    ../LogicGateSymbols/AndLogicGateSymbol.cpp \
    ../LogicGateSymbols/LogicGateSymbol.cpp \
    ../LogicGateSymbols/NotLogicGateSymbol.cpp \
    ../BondingWires/BondingWire.cpp \


HEADERS += \
    WorkSpace.h \
    mainwindow.h \
    ../LogicGateSymbols/AndLogicGateSymbol.h \
    ../LogicGateSymbols/LogicGateSymbol.h \
    ../LogicGateSymbols/NotLogicGateSymbol.h \
    ../BondingWires/BondingWire.h \


FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
