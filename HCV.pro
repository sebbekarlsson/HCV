QT += core
QT += gui
QT += webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hcv.out
TEMPLATE = app

HEADERS += ./src/includes/license.hpp
SOURCES += ./src/main.cpp

HEADERS += ./src/includes/HCV.hpp
SOURCES += ./src/HCV.cpp
