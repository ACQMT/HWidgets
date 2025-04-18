CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(htabwidgetplugin)
TEMPLATE    = lib

HEADERS     = htabwidgetplugin.h
SOURCES     = htabwidgetplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

QT += designer

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(htabwidget.pri)
