#include <Renderer3D/Core/EntryPoint.h>
#include <Renderer3D/Core/Application.h>
#include <Renderer3D/Core/RendererLogger.h>


#ifdef RENDER_PLATFORM_WINDOWS
#error "Engine3D does not suport windows!"
#else

extern Renderer3D::Application* Renderer3D::CreateApplication();

 int main(int argc, char** argv){
	Renderer3D::RendererLogger::Init();
	auto app = Renderer3D::CreateApplication();
	app->Run();
	delete app;
 }
#endif
