#ifndef CPPCOMPONENTS_QML_HPP
#define CPPCOMPONENTS_QML_HPP

#include <cppcomponents/cppcomponents.hpp>



struct IApp:cppcomponents::define_interface<cppcomponents::uuid<0xdef7a143, 0xf4d0, 0x44cf, 0xb435, 0xf40526ad8d46>>
{
    int Exec();

    CPPCOMPONENTS_CONSTRUCT(IApp,Exec);

};

struct IAppConstructor:cppcomponents::define_interface<cppcomponents::uuid<0xf509b6cc, 0xac7f, 0x4b2f, 0x8e1a, 0xaa2eaace47dd>>
{
    cppcomponents::use<cppcomponents::InterfaceUnknown> Create(int argc, char **);

    CPPCOMPONENTS_CONSTRUCT(IAppConstructor,Create);

};

inline std::string AppId(){return "cppcomponents.qml.App";}
typedef cppcomponents::runtime_class<AppId,cppcomponents::object_interfaces<IApp>,
cppcomponents::factory_interface<IAppConstructor>> App_t;

typedef cppcomponents::use_runtime_class<App_t> App;


struct IQuickView:cppcomponents::define_interface<cppcomponents::uuid<0xe638ad35, 0xb2dd, 0x4b52, 0x8b85, 0xd39782a49d53>>
{
    void SetMainQmlFile(std::string url);
    void ShowExpanded();

    CPPCOMPONENTS_CONSTRUCT(IQuickView,SetMainQmlFile,ShowExpanded);
};

inline std::string QuickViewId(){return "cppcomponents.qml.View";}


typedef cppcomponents::runtime_class<QuickViewId,cppcomponents::object_interfaces<IQuickView>> QuickView_t;
typedef cppcomponents::use_runtime_class<QuickView_t> QuickView;


struct IExtensionStatics : cppcomponents::define_interface<cppcomponents::uuid<0x0521a6b4, 0x89f8, 0x457a, 0x8b17, 0xe1311c0bc79e>>
{
    int Main(int argc, char** argv);

    CPPCOMPONENTS_CONSTRUCT(IExtensionStatics,Main)


};

inline std::string ExtensionId(){return "Extension!cppcomponents_qml_extension";}
typedef cppcomponents::runtime_class<ExtensionId,cppcomponents::static_interfaces<IExtensionStatics>> Extension_t;
typedef cppcomponents::use_runtime_class<Extension_t> Extension;

#endif // CPPCOMPONENTS_QML_HPP
