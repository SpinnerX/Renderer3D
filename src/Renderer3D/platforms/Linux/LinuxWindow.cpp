#include <Renderer3D/platforms/Linux/LinuxWindow.h>
#include <Renderer3D/Core/RendererLogger.h>
#include <Renderer3D/Events/KeyEvent.h>
#include <Renderer3D/Events/MouseEvent.h>
#include <Renderer3D/Events/ApplicationEvent.h>

namespace Renderer3D{
	static bool isGlfwInitialized = false;

	static void GLFWErrorCallback(int error, const char* description){
		coreLogFatal("GLFW Error ({}): {}", error, description);
	}

	Window* Window::create(const WindowProps& props){
		return new OpenGLWindow(props);
	}

	OpenGLWindow::OpenGLWindow(const WindowProps& props){
		init(props);
	}

	OpenGLWindow::~OpenGLWindow(){
		shutdown();
	}

	void OpenGLWindow::init(const WindowProps& props){
		_data.title = props.title;
		_data.width = props.width;
		_data.height = props.height;
		
		if(!isGlfwInitialized){
			int success = glfwInit();

			render_core_assert(success, "Could not initialize GLFW!");
			
			if(!success){
				coreLogFatal("Could not initialize GLFW!");
				return;
			}

			glfwSetErrorCallback(GLFWErrorCallback);
			isGlfwInitialized = true;
		}

		_window = glfwCreateWindow((int)props.width, (int)props.height, _data.title.c_str(), nullptr, nullptr);

		if(!_window){
			coreLogError("GLFWwindow* was nullptr meaning window not made!");
			return;
		}

		glfwMakeContextCurrent(_window);
		glfwSetWindowUserPointer(_window, &_data);

		setVSync(false);


		// @note setting/initializing event callbacks
		glfwSetWindowCloseCallback(_window, [](GLFWwindow* window){
            WindowData& data =  *(WindowData *)glfwGetWindowUserPointer(window);
            WindowCloseEvent event;
            data.callback(event);
        });

		glfwSetKeyCallback(_window, [](GLFWwindow* window, int key, int scancode, int action, int modes){
            WindowData& data =  *(WindowData *)glfwGetWindowUserPointer(window);

            // So when are doing a key call back the function takes in GLFWwindow, int, int, int
            //  action specified what action is occuring when with our key events, like are we pressing, releasing or repeating key events.
            // Event Usage: event(key, count) and for release is event(key)
            switch(action){
                case GLFW_PRESS:
                {
                    KeyPressedEvent event(key, 0);
                    data.callback(event);
                    break;
                }
                case GLFW_RELEASE:
                {
                    KeyReleasedEvent event(key);
                    data.callback(event);
                    break;
                }
                case GLFW_REPEAT:
                {
                    KeyPressedEvent event(key, 1);
                    data.callback(event);
                    break;
                }
            }
        });

		glfwSetMouseButtonCallback(_window, [](GLFWwindow* window, int button, int action, int modes){
            WindowData& data =  *(WindowData *)glfwGetWindowUserPointer(window);

            switch(action){
                case GLFW_PRESS:
                {
                    MouseButtonPressedEvent event(button);
                    data.callback(event);
                    break;
                }
                case GLFW_RELEASE:
                {
                    MouseButtonReleasedEvent event(button);
                    data.callback(event);
                    break;
                }
            }
        });
		
		glfwSetScrollCallback(_window, [](GLFWwindow* window, double xOffset, double yOffset){
            WindowData& data =  *(WindowData *)glfwGetWindowUserPointer(window);

            MouseScrolledEvent event((float)xOffset, (float)yOffset);
            data.callback(event);
        });

        glfwSetCursorPosCallback(_window, [](GLFWwindow* window, double xPos, double yPos){
            WindowData& data =  *(WindowData *)glfwGetWindowUserPointer(window);

            MouseMovedEvent event((float)xPos, (float)yPos);
            data.callback(event);
        });
	}

	void OpenGLWindow::shutdown(){
		glfwDestroyWindow(_window);
	}

	void OpenGLWindow::onUpdate(){
		glfwPollEvents();
		glfwSwapBuffers(_window);
	}

	void OpenGLWindow::setVSync(bool enabled){
		if(enabled){
			glfwSwapInterval(1);
		}
		else{
			glfwSwapInterval(0);
		}
	}
};
