#include <Renderer3D/Core/Application.h>
#include <Renderer3D/Core/RendererLogger.h>
#include <Renderer3D/Core/EntryPoint.h>
#include <Renderer3D/Events/KeyEvent.h>
#include <Renderer3D/Events/KeyCodes.h>
#include <Renderer3D/platforms/Linux/LinuxInputPoll.h>
#include <Renderer3D/Core/Layer.h>

class ExampleLayer : public Renderer3D::Layer{
public:
	
	void onUpdate(Renderer3D::Timestep ts) override {
	}

	void onEvent(Renderer3D::Event& event) override{
		if(Renderer3D::LinuxInputPoll::isKeyPressed(RENDER_KEY_ESCAPE)){
			Renderer3D::Application::Get().close();
		}
	}
};

class ExampleApp : public Renderer3D::Application{
public:
	ExampleApp() : Application(){
		pushLayer(new ExampleLayer());
	}
};

Renderer3D::Application* Renderer3D::CreateApplication(){
	return new ExampleApp();
}
