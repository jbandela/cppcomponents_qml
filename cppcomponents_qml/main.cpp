#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include "cppcomponents_qml.hpp"

int main(int argc, char *argv[])
{
//    QGuiApplication app(argc, argv);

//    QtQuick2ApplicationViewer viewer;
//    viewer.setMainQmlFile(QStringLiteral("qml/jrbqt/main.qml"));
//    viewer.showExpanded();

    return Extension::Main(argc,argv);
//    return app.exec();
}
