#pragma once
#include <Renderer3D/Core/Window.h>
#include <GLFW/glfw3.h>

namespace Renderer3D{
	class OpenGLWindow : public Window{
	public:
		OpenGLWindow(const WindowProps& props);

		virtual ~OpenGLWindow();

		void onUpdate() override;
		
		void setEventCallback(const EventCallbackFn& callback) override{ _data.callback = callback; }

		inline uint32_t GetWidth() const override { return _data.width; }

		inline uint32_t GetHeight() const override { return _data.height; }

		void setVSync(bool) override;

		bool getVSync() const override { return _data.vSync; }

		inline void* getNativeWindow() const override { return _window; }

	private:
		void init(const WindowProps& props);

		void shutdown();

	private:
		GLFWwindow* _window;

		struct WindowData{
			std::string title;
			uint32_t width, height;
			bool vSync;
			EventCallbackFn callback;
		};

		WindowData _data;
	};
};
