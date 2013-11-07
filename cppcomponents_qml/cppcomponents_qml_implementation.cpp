#include "cppcomponents_qml.hpp"
#include <QtGui/QGuiApplication>
#include <QtQuick/QQuickView>
#include <QtQml/QQmlEngine>
#include <iostream>
using namespace cppcomponents;
struct ImplementApp:implement_runtime_class<ImplementApp,App_t>
{
    QGuiApplication app_;

    ImplementApp(int argc, char **argv):app_(argc,argv){}
     int Exec(){

         return app_.exec();
     }


};

struct ImplementQuickView:implement_runtime_class<ImplementQuickView,QuickView_t>
{
    QQuickView* view_;


    ImplementQuickView(){
        try{
           view_ = nullptr;
        view_ = new QQuickView();
        }
        catch(std::exception& e){
            auto str = e.what();
            std::cerr << str << "\n";
            throw;
        }

    }
    void SetMainQmlFile(std::string url){
       view_->setSource(QUrl::fromLocalFile(QString(url.c_str())));
    }

    void ShowExpanded(){
        view_->show();
    }

    ~ImplementQuickView(){
        delete view_;
    }

};


