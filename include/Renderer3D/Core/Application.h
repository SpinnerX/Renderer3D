#pragma once
#include <Renderer3D/Core/core.h>
#include <Renderer3D/Core/Window.h>
#include <Renderer3D/Events/Event.h>
#include <Renderer3D/Events/ApplicationEvent.h>

namespace Renderer3D{
	class RENDER_API Application{
	public:
		Application();
		~Application();

		void Run();

		void close();

		void onEvent(Event& event);

		inline static Application& Get() { return *instance; }

		inline Window& GetWindow() { return *_window; }

	private:
		bool onWindowClose(WindowCloseEvent& event);

	private:
		Scope<Window> _window;
		bool isRunning;
		static Application* instance;
	};

	Application* CreateApplication();
};
