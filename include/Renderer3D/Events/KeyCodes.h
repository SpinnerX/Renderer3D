#pragma once
#include <cstdint>

namespace Renderer3D{
	typedef enum class KeyCode : uint16_t {
		// From glfw3.h
		Space               = 32,
		Apostrophe          = 39, /* ' */
		Comma               = 44, /* , */
		Minus               = 45, /* - */
		Period              = 46, /* . */
		Slash               = 47, /* / */

		D0                  = 48, /* 0 */
		D1                  = 49, /* 1 */
		D2                  = 50, /* 2 */
		D3                  = 51, /* 3 */
		D4                  = 52, /* 4 */
		D5                  = 53, /* 5 */
		D6                  = 54, /* 6 */
		D7                  = 55, /* 7 */
		D8                  = 56, /* 8 */
		D9                  = 57, /* 9 */

		Semicolon           = 59, /* ; */
		Equal               = 61, /* = */

		A                   = 65,
		B                   = 66,
		C                   = 67,
		D                   = 68,
		E                   = 69,
		F                   = 70,
		G                   = 71,
		H                   = 72,
		I                   = 73,
		J                   = 74,
		K                   = 75,
		L                   = 76,
		M                   = 77,
		N                   = 78,
		O                   = 79,
		P                   = 80,
		Q                   = 81,
		R                   = 82,
		S                   = 83,
		T                   = 84,
		U                   = 85,
		V                   = 86,
		W                   = 87,
		X                   = 88,
		Y                   = 89,
		Z                   = 90,

		LeftBracket         = 91,  /* [ */
		Backslash           = 92,  /* \ */
		RightBracket        = 93,  /* ] */
		GraveAccent         = 96,  /* ` */

		World1              = 161, /* non-US #1 */
		World2              = 162, /* non-US #2 */

		/* Function keys */
		Escape              = 256,
		Enter               = 257,
		Tab                 = 258,
		Backspace           = 259,
		Insert              = 260,
		Delete              = 261,
		Right               = 262,
		Left                = 263,
		Down                = 264,
		Up                  = 265,
		PageUp              = 266,
		PageDown            = 267,
		Home                = 268,
		End                 = 269,
		CapsLock            = 280,
		ScrollLock          = 281,
		NumLock             = 282,
		PrintScreen         = 283,
		Pause               = 284,
		F1                  = 290,
		F2                  = 291,
		F3                  = 292,
		F4                  = 293,
		F5                  = 294,
		F6                  = 295,
		F7                  = 296,
		F8                  = 297,
		F9                  = 298,
		F10                 = 299,
		F11                 = 300,
		F12                 = 301,
		F13                 = 302,
		F14                 = 303,
		F15                 = 304,
		F16                 = 305,
		F17                 = 306,
		F18                 = 307,
		F19                 = 308,
		F20                 = 309,
		F21                 = 310,
		F22                 = 311,
		F23                 = 312,
		F24                 = 313,
		F25                 = 314,

		/* Keypad */
		KP0                 = 320,
		KP1                 = 321,
		KP2                 = 322,
		KP3                 = 323,
		KP4                 = 324,
		KP5                 = 325,
		KP6                 = 326,
		KP7                 = 327,
		KP8                 = 328,
		KP9                 = 329,
		KPDecimal           = 330,
		KPDivide            = 331,
		KPMultiply          = 332,
		KPSubtract          = 333,
		KPAdd               = 334,
		KPEnter             = 335,
		KPEqual             = 336,

		LeftShift           = 340,
		LeftControl         = 341,
		LeftAlt             = 342,
		LeftSuper           = 343,
		RightShift          = 344,
		RightControl        = 345,
		RightAlt            = 346,
		RightSuper          = 347,
		Menu                = 348
	} Key;
}

// From glfw3.h
#define RENDER_KEY_SPACE           ::Renderer3D::Key::Space
#define RENDER_KEY_APOSTROPHE      ::Renderer3D::Key::Apostrophe    /* ' */
#define RENDER_KEY_COMMA           ::Renderer3D::Key::Comma         /* , */
#define RENDER_KEY_MINUS           ::Renderer3D::Key::Minus         /* - */
#define RENDER_KEY_PERIOD          ::Renderer3D::Key::Period        /* . */
#define RENDER_KEY_SLASH           ::Renderer3D::Key::Slash         /* / */
#define RENDER_KEY_0               ::Renderer3D::Key::D0
#define RENDER_KEY_1               ::Renderer3D::Key::D1
#define RENDER_KEY_2               ::Renderer3D::Key::D2
#define RENDER_KEY_3               ::Renderer3D::Key::D3
#define RENDER_KEY_4               ::Renderer3D::Key::D4
#define RENDER_KEY_5               ::Renderer3D::Key::D5
#define RENDER_KEY_6               ::Renderer3D::Key::D6
#define RENDER_KEY_7               ::Renderer3D::Key::D7
#define RENDER_KEY_8               ::Renderer3D::Key::D8
#define RENDER_KEY_9               ::Renderer3D::Key::D9
#define RENDER_KEY_SEMICOLON       ::Renderer3D::Key::Semicolon     /* ; */
#define RENDER_KEY_EQUAL           ::Renderer3D::Key::Equal         /* = */
#define RENDER_KEY_A               ::Renderer3D::Key::A
#define RENDER_KEY_B               ::Renderer3D::Key::B
#define RENDER_KEY_C               ::Renderer3D::Key::C
#define RENDER_KEY_D               ::Renderer3D::Key::D
#define RENDER_KEY_E               ::Renderer3D::Key::E
#define RENDER_KEY_F               ::Renderer3D::Key::F
#define RENDER_KEY_G               ::Renderer3D::Key::G
#define RENDER_KEY_H               ::Renderer3D::Key::H
#define RENDER_KEY_I               ::Renderer3D::Key::I
#define RENDER_KEY_J               ::Renderer3D::Key::J
#define RENDER_KEY_K               ::Renderer3D::Key::K
#define RENDER_KEY_L               ::Renderer3D::Key::L
#define RENDER_KEY_M               ::Renderer3D::Key::M
#define RENDER_KEY_N               ::Renderer3D::Key::N
#define RENDER_KEY_O               ::Renderer3D::Key::O
#define RENDER_KEY_P               ::Renderer3D::Key::P
#define RENDER_KEY_Q               ::Renderer3D::Key::Q
#define RENDER_KEY_R               ::Renderer3D::Key::R
#define RENDER_KEY_S               ::Renderer3D::Key::S
#define RENDER_KEY_T               ::Renderer3D::Key::T
#define RENDER_KEY_U               ::Renderer3D::Key::U
#define RENDER_KEY_V               ::Renderer3D::Key::V
#define RENDER_KEY_W               ::Renderer3D::Key::W
#define RENDER_KEY_X               ::Renderer3D::Key::X
#define RENDER_KEY_Y               ::Renderer3D::Key::Y
#define RENDER_KEY_Z               ::Renderer3D::Key::Z
#define RENDER_KEY_LEFT_BRACKET    ::Renderer3D::Key::LeftBracket   /* [ */
#define RENDER_KEY_BACKSLASH       ::Renderer3D::Key::Backslash     /* \ */
#define RENDER_KEY_RIGHT_BRACKET   ::Renderer3D::Key::RightBracket  /* ] */
#define RENDER_KEY_GRAVE_ACCENT    ::Renderer3D::Key::GraveAccent   /* ` */
#define RENDER_KEY_WORLD_1         ::Renderer3D::Key::World1        /* non-US #1 */
#define RENDER_KEY_WORLD_2         ::Renderer3D::Key::World2        /* non-US #2 */

/* Function keys */
#define RENDER_KEY_ESCAPE          ::Renderer3D::Key::Escape
#define RENDER_KEY_ENTER           ::Renderer3D::Key::Enter
#define RENDER_KEY_TAB             ::Renderer3D::Key::Tab
#define RENDER_KEY_BACKSPACE       ::Renderer3D::Key::Backspace
#define RENDER_KEY_INSERT          ::Renderer3D::Key::Insert
#define RENDER_KEY_DELETE          ::Renderer3D::Key::Delete
#define RENDER_KEY_RIGHT           ::Renderer3D::Key::Right
#define RENDER_KEY_LEFT            ::Renderer3D::Key::Left
#define RENDER_KEY_DOWN            ::Renderer3D::Key::Down
#define RENDER_KEY_UP              ::Renderer3D::Key::Up
#define RENDER_KEY_PAGE_UP         ::Renderer3D::Key::PageUp
#define RENDER_KEY_PAGE_DOWN       ::Renderer3D::Key::PageDown
#define RENDER_KEY_HOME            ::Renderer3D::Key::Home
#define RENDER_KEY_END             ::Renderer3D::Key::End
#define RENDER_KEY_CAPS_LOCK       ::Renderer3D::Key::CapsLock
#define RENDER_KEY_SCROLL_LOCK     ::Renderer3D::Key::ScrollLock
#define RENDER_KEY_NUM_LOCK        ::Renderer3D::Key::NumLock
#define RENDER_KEY_PRINT_SCREEN    ::Renderer3D::Key::PrintScreen
#define RENDER_KEY_PAUSE           ::Renderer3D::Key::Pause
#define RENDER_KEY_F1              ::Renderer3D::Key::F1
#define RENDER_KEY_F2              ::Renderer3D::Key::F2
#define RENDER_KEY_F3              ::Renderer3D::Key::F3
#define RENDER_KEY_F4              ::Renderer3D::Key::F4
#define RENDER_KEY_F5              ::Renderer3D::Key::F5
#define RENDER_KEY_F6              ::Renderer3D::Key::F6
#define RENDER_KEY_F7              ::Renderer3D::Key::F7
#define RENDER_KEY_F8              ::Renderer3D::Key::F8
#define RENDER_KEY_F9              ::Renderer3D::Key::F9
#define RENDER_KEY_F10             ::Renderer3D::Key::F10
#define RENDER_KEY_F11             ::Renderer3D::Key::F11
#define RENDER_KEY_F12             ::Renderer3D::Key::F12
#define RENDER_KEY_F13             ::Renderer3D::Key::F13
#define RENDER_KEY_F14             ::Renderer3D::Key::F14
#define RENDER_KEY_F15             ::Renderer3D::Key::F15
#define RENDER_KEY_F16             ::Renderer3D::Key::F16
#define RENDER_KEY_F17             ::Renderer3D::Key::F17
#define RENDER_KEY_F18             ::Renderer3D::Key::F18
#define RENDER_KEY_F19             ::Renderer3D::Key::F19
#define RENDER_KEY_F20             ::Renderer3D::Key::F20
#define RENDER_KEY_F21             ::Renderer3D::Key::F21
#define RENDER_KEY_F22             ::Renderer3D::Key::F22
#define RENDER_KEY_F23             ::Renderer3D::Key::F23
#define RENDER_KEY_F24             ::Renderer3D::Key::F24
#define RENDER_KEY_F25             ::Renderer3D::Key::F25

/* Keypad */
#define RENDER_KEY_KP_0            ::Renderer3D::Key::KP0
#define RENDER_KEY_KP_1            ::Renderer3D::Key::KP1
#define RENDER_KEY_KP_2            ::Renderer3D::Key::KP2
#define RENDER_KEY_KP_3            ::Renderer3D::Key::KP3
#define RENDER_KEY_KP_4            ::Renderer3D::Key::KP4
#define RENDER_KEY_KP_5            ::Renderer3D::Key::KP5
#define RENDER_KEY_KP_6            ::Renderer3D::Key::KP6
#define RENDER_KEY_KP_7            ::Renderer3D::Key::KP7
#define RENDER_KEY_KP_8            ::Renderer3D::Key::KP8
#define RENDER_KEY_KP_9            ::Renderer3D::Key::KP9
#define RENDER_KEY_KP_DECIMAL      ::Renderer3D::Key::KPDecimal
#define RENDER_KEY_KP_DIVIDE       ::Renderer3D::Key::KPDivide
#define RENDER_KEY_KP_MULTIPLY     ::Renderer3D::Key::KPMultiply
#define RENDER_KEY_KP_SUBTRACT     ::Renderer3D::Key::KPSubtract
#define RENDER_KEY_KP_ADD          ::Renderer3D::Key::KPAdd
#define RENDER_KEY_KP_ENTER        ::Renderer3D::Key::KPEnter
#define RENDER_KEY_KP_EQUAL        ::Renderer3D::Key::KPEqual

#define RENDER_KEY_LEFT_SHIFT      ::Renderer3D::Key::LeftShift
#define RENDER_KEY_LEFT_CONTROL    ::Renderer3D::Key::LeftControl
#define RENDER_KEY_LEFT_ALT        ::Renderer3D::Key::LeftAlt
#define RENDER_KEY_LEFT_SUPER      ::Renderer3D::Key::LeftSuper
#define RENDER_KEY_RIGHT_SHIFT     ::Renderer3D::Key::RightShift
#define RENDER_KEY_RIGHT_CONTROL   ::Renderer3D::Key::RightControl
#define RENDER_KEY_RIGHT_ALT       ::Renderer3D::Key::RightAlt
#define RENDER_KEY_RIGHT_SUPER     ::Renderer3D::Key::RightSuper
#define RENDER_KEY_MENU            ::Renderer3D::Key::Menu