QT += core
QT += gui
QT += webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hcv.out
TEMPLATE = lib

HEADERS += src/includes/main.hpp
SOURCES += src/main.cpp

HEADERS += ./src/includes/MainWindow.hpp
SOURCES += ./src/MainWindow.cpp

# HEADERS += ./src/includes/HCV.hpp
# SOURCES += ./src/HCV.cpp
