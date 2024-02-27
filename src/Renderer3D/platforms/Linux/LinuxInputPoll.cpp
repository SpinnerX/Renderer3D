#include <Renderer3D/Renderer3DPrecompiledHeader.h>
#include <Renderer3D/platforms/Linux/LinuxInputPoll.h>
#include <Renderer3D/Core/Application.h>
#include <GLFW/glfw3.h>

namespace Renderer3D{
	InputPoll* InputPoll::instance = new LinuxInputPoll();

	bool LinuxInputPoll::isKeyPressedImpl(Key keycode){
		auto window = static_cast<GLFWwindow *>(Application::Get().GetWindow().getNativeWindow());

		auto state = glfwGetKey(window, static_cast<int32_t>(keycode));

		return state == GLFW_PRESS || state == GLFW_REPEAT;
	}

	bool LinuxInputPoll::isMouseButtonPressedImpl(Mouse button){
		auto window = static_cast<GLFWwindow *>(Application::Get().GetWindow().getNativeWindow());

		auto state = glfwGetMouseButton(window, static_cast<int32_t>(button));

		return state == GLFW_PRESS;
	}

	float LinuxInputPoll::getMouseXImpl(){
		/* auto[x, y] = getMousePositionImpl(); */
		return getMousePosition().x;
	}

	float LinuxInputPoll::getMouseYImpl(){
		/* auto[x, y] = getMousePositionImpl(); */
		return getMousePosition().y;
	}

	glm::vec2 LinuxInputPoll::getMousePositionImpl(){
		auto window = static_cast<GLFWwindow *>(Application::Get().GetWindow().getNativeWindow());

		double xpos, ypos;
		glfwGetCursorPos(window, &xpos, &ypos);

		glm::vec2 position = {(float)xpos, (float)ypos};
		return position;
	}
};
