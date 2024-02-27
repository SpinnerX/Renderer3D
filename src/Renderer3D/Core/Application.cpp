#include <Renderer3D/Renderer3DPrecompiledHeader.h>
#include <Renderer3D/Core/Application.h>
#include <GLFW/glfw3.h>
#include <Renderer3D/Events/Event.h>
#include <Renderer3D/Core/RendererLogger.h>

namespace Renderer3D{
	Application* Application::instance = nullptr;

	Application::Application(){
		_window = std::unique_ptr<Window>(Window::create());
		instance = this;
		_window->setEventCallback(bind_function(this, &Application::onEvent));
		isRunning = true;
	}

	Application::~Application(){}

	void Application::onEvent(Event& event){
		EventDispatcher dispatcher(event);

		dispatcher.Dispatch<WindowCloseEvent>(bind_function(this, &Application::onWindowClose));
		coreLogTrace("{}", event);


	}

	void Application::Run(){
		while(isRunning){
			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);

			_window->onUpdate();
		}
	}

	void Application::close(){
		isRunning = false;
	}

	bool Application::onWindowClose(WindowCloseEvent& e){
		isRunning = false;
		return true;
	}
};
