#pragma once
#include <Renderer3D/Core/core.h>
#include <Renderer3D/Events/Event.h>
#include <Renderer3D/Core/RendererLogger.h>
#include <Renderer3D/Events/ApplicationEvent.h>
#include <Renderer3D/Core/Timestep.h>

namespace Renderer3D{
	
	class RENDER_API Layer{
	public:
		Layer(const std::string& name = "Layer");

		virtual ~Layer();

		virtual void onAttach(){
			coreLogInfo("Default onAttach() called instead!");
		}

		virtual void onDettach(){
			coreLogInfo("Default onDettach() called instead!");
		}

		virtual void onUpdate(Timestep ts){}

		virtual void onRender(){}

		virtual void onEvent(Event& event){}

		inline const std::string& getName() const { return _debugName; }
		
		friend std::ostream& operator<<(std::ostream& outs, const Layer* l){
			return outs << l->_debugName;
		}

	protected:
		std::string _debugName;
	};
};
