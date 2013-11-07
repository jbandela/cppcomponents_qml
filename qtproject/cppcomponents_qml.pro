# Add more folders to ship with the application, here
#folder_01.source = qml/jrbqt
#folder_01.target = qml
#DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

# If your application uses the Qt Mobility libraries, uncomment the following
# lines and add the respective components to the MOBILITY variable.
# CONFIG += mobility
# MOBILITY +=

INCLUDEPATH += ../../cppcomponents
INCLUDEPATH += ../cppcomponents_qml

QMAKE_CXXFLAGS += -std=c++0x

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += ../cppcomponents_qml/main.cpp \
    ../cppcomponents_qml/cppcomponents_qml_implementation.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(../cppcomponents_qml/qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    cppcomponents_qml.hpp
