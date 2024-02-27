#pragma once
#include <Renderer3D/Core/core.h>
#include <Renderer3D/Events/KeyCodes.h>
#include <Renderer3D/Events/MouseButtonCodes.h>
#include <glm/glm.hpp>

namespace Renderer3D{

	/*
	 *
	 * @class InputPoll
	 * @note class is a pure virtual class instance
	 * @note specific for creating different platform specific event input pollings
	 *
	 *
	 *
	 * */

	class RENDER_API InputPoll{
	public:
		
		inline static bool isKeyPressed(Key key){
			return instance->isKeyPressedImpl(key);
		}

		inline static bool isMouseButtonPressed(Mouse button){
			return instance->isMouseButtonPressedImpl(button);
		}

		inline static glm::vec2 getMousePosition(){
			return instance->getMousePositionImpl();
		}

		inline static float getMouseX() {
			return instance->getMouseXImpl();
		}

		inline static float getMouseY(){
			return instance->getMouseYImpl();
		}

	private:
		virtual bool isKeyPressedImpl(Key keycode) = 0;

		virtual bool isMouseButtonPressedImpl(Mouse button) = 0;

		virtual glm::vec2 getMousePositionImpl() =0;

		virtual float getMouseXImpl() = 0;

		virtual float getMouseYImpl() = 0;

	private:
		static InputPoll* instance;
	};
};
