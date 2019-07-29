#-------------------------------------------------
#
# Project created by QtCreator 2019-07-28T04:10:22
#
#-------------------------------------------------


TEMPLATE = lib

CONFIG  += plugin

QT       += gui

DEFINES += STARDUSTXRKEYBOARDPLUGIN_LIBRARY

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        src/samplekeyboard.cpp \
        src/keyboardplugin.cpp

HEADERS += \
        src/samplekeyboard.h \
        src/keyboardplugin.h \
        $$PWD/../stardust-xr/src/keyboard/keyboard.h

TARGET   = $$qtLibraryTarget(stardust_samplekeyboard)

DESTDIR  = ~/.config/stardust/extensions/keyboard

INCLUDEPATH += $$PWD/../stardust-xr/src/core \
               $$PWD/../stardust-xr/src/keyboard

RESOURCES += \
    resources/resources.qrc
