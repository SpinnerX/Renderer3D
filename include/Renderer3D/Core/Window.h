#pragma once
#include <Renderer3D/Renderer3DPrecompiledHeader.h>
#include <Renderer3D/Core/core.h>
#include <Renderer3D/Events/Event.h>

namespace Renderer3D{
	
	/*
	 * @struct WindowProperties
	 * @note contains all related properties for the window handler
	 * */
	struct WindowProps{
		WindowProps(const std::string& name = "3D Renderer", uint32_t w = 1280, uint32_t h = 720) : title(name), width(w), height(h) {}


		std::string title="";
		uint32_t width = 0;
		uint32_t height = 0;
	};

	/*
	 * @class Window
	 * @note This is a class that contains properties related to handling windows.
	 *
	 * @function onUpdate()
	 * @note will contain events and updating per-frame
	 *
	 * @function getNativeWindow()
	 * @note returns the windows implementation native window (Whether this is GLFWwindow*, or Vulkans window, etc.)
	 *
	 * @function create(WindowProps&)
	 * @note create factory function for creating this specific instance of a window.
	 *
	 * */
	class RENDER_API Window{
	public:
		using EventCallbackFn = std::function<void(Event& event)>;

		virtual ~Window(){}

		virtual void onUpdate() = 0;
		
		virtual void setEventCallback(const EventCallbackFn& callback) = 0;

		virtual uint32_t GetWidth() const = 0;

		virtual uint32_t GetHeight() const = 0;

		virtual void setVSync(bool enabled) = 0;

		virtual bool getVSync() const = 0;

		virtual void* getNativeWindow() const = 0;

		static Window* create(const WindowProps& props = WindowProps());
		/* static Window* create(const std::string& title="3D Renderer", uint32_t w=1280, uint32_t h=720); */
	};



};
