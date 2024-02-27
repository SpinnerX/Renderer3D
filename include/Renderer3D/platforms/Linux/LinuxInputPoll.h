#pragma once
#include <Renderer3D/Events/InputPoll.h>

namespace Renderer3D {
	
	class LinuxInputPoll : public InputPoll {
	protected:
		bool isKeyPressedImpl(Key keycode) override;

		bool isMouseButtonPressedImpl(Mouse button) override;

		float getMouseXImpl() override;

		float getMouseYImpl() override;

		glm::vec2 getMousePositionImpl() override;
	};
}
