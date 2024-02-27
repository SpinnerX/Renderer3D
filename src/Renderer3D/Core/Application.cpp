#include <Renderer3D/Renderer3DPrecompiledHeader.h>
#include <Renderer3D/Core/Application.h>
#include <GLFW/glfw3.h>
#include <Renderer3D/Events/Event.h>
#include <Renderer3D/Core/RendererLogger.h>
#include <memory>

namespace Renderer3D{
	Application* Application::instance = nullptr;

	Application::Application(){
		_window = std::unique_ptr<Window>(Window::create());
		instance = this;
		_window->setEventCallback(bind_function(this, &Application::onEvent));
		isRunning = true;
	}

	Application::~Application(){}
	
	void Application::pushLayer(Layer* layer){
		_layerStack.pushLayer(layer);
		layer->onAttach();
	}

	void Application::pushOverlay(Layer* overlay){
		_layerStack.pushOverlay(overlay);
		overlay->onAttach();
	}

	void Application::onEvent(Event& event){
		EventDispatcher dispatcher(event);
		dispatcher.Dispatch<WindowCloseEvent>(bind_function(this, &Application::onWindowClose));

		/* coreLogTrace("{}", event); */


		/* auto iter = _layerStack.begin(){ */
		/* 	if(iter != _layerStack.end()){ */
		/* 		print("Iter -> " iter); */
		/* 	} */
		/* }; */

		auto iter = _layerStack.end();

		while(iter != _layerStack.begin()){
			if(event._handled)
				break;

			(*--iter)->onEvent(event);
		}
	}

	void Application::Run(){
		while(isRunning){
			float time = (float)glfwGetTime();
			Timestep timestep = time - lastFrameTime;
			lastFrameTime = time;

			
			for(Layer* layer : _layerStack){
				layer->onUpdate(timestep);
			}

			for(Layer* layer : _layerStack){
				layer->onRender();
			}

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
