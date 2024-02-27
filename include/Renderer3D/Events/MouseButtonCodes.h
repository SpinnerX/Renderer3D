#pragma once
#include <cstdint>

namespace Renderer3D{
	typedef enum class MouseCode : uint16_t{
		// From glfw3.h
		Button0                = 0,
		Button1                = 1,
		Button2                = 2,
		Button3                = 3,
		Button4                = 4,
		Button5                = 5,
		Button6                = 6,
		Button7                = 7,

		ButtonLast             = Button7,
		ButtonLeft             = Button0,
		ButtonRight            = Button1,
		ButtonMiddle           = Button2
	} Mouse;
	
	// inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	// {
	// 	os << static_cast<int32_t>(mouseCode);
	// 	return os;
	// }
}

#define RENDER_MOUSE_BUTTON_0      ::Renderer3D::Mouse::Button0
#define RENDER_MOUSE_BUTTON_1      ::Renderer3D::Mouse::Button1
#define RENDER_MOUSE_BUTTON_2      ::Renderer3D::Mouse::Button2
#define RENDER_MOUSE_BUTTON_3      ::Renderer3D::Mouse::Button3
#define RENDER_MOUSE_BUTTON_4      ::Renderer3D::Mouse::Button4
#define RENDER_MOUSE_BUTTON_5      ::Renderer3D::Mouse::Button5
#define RENDER_MOUSE_BUTTON_6      ::Renderer3D::Mouse::Button6
#define RENDER_MOUSE_BUTTON_7      ::Renderer3D::Mouse::Button7
#define RENDER_MOUSE_BUTTON_LAST   ::Renderer3D::Mouse::ButtonLast
#define RENDER_MOUSE_BUTTON_LEFT   ::Renderer3D::Mouse::ButtonLeft
#define RENDER_MOUSE_BUTTON_RIGHT  ::Renderer3D::Mouse::ButtonRight
#define RENDER_MOUSE_BUTTON_MIDDLE ::Renderer3D::Mouse::ButtonMiddle