#pragma once
#include <Renderer3D/Core/core.h>
#include <Renderer3D/Core/Window.h>
#include <Renderer3D/Events/Event.h>
#include <Renderer3D/Events/ApplicationEvent.h>
#include <Renderer3D/Core/LayerStack.h>

namespace Renderer3D{
	class RENDER_API Application{
	public:
		Application();
		~Application();

		void Run();

		void onEvent(Event& event);

		void pushLayer(Layer* layer);

		void pushOverlay(Layer* overlay);

		inline static Application& Get() { return *instance; }
		
		void close();
		
		inline Window& GetWindow() { return *_window; }

	private:
		bool onWindowClose(WindowCloseEvent& event);

	private:
		Scope<Window> _window;
		bool isRunning;
		float lastFrameTime = 0.0f;
		LayerStack _layerStack;
		static Application* instance;
	};

	Application* CreateApplication();
};
