#include "../../../cppcomponents_qml/cppcomponents_qml.hpp"

struct ImpExtension :cppcomponents::implement_runtime_class<ImpExtension, Extension_t>{

	ImpExtension(){}

	static int Main(int argc, char** argv){
		App app(argc, argv);

		QuickView viewer;
		viewer.SetMainQmlFile("../testing/qml/jrbqt/main.qml");
		viewer.ShowExpanded();

		return app.Exec();
	}


};

CPPCOMPONENTS_DEFINE_FACTORY()
