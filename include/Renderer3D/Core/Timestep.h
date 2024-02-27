#pragma once
#include <ostream>

namespace Renderer3D{
	
	class Timestep{
	public:
		Timestep(float time = 0.f) : _time(time) {}

		float getSeconds() const { return _time; }

		float getMilliseconds() const { return _time * 1000.0f; }
		
		operator float() { return _time; }

		friend std::ostream& operator<<(std::ostream& outs, const Timestep& step){
			return outs << step._time;
		}

	private:
		float _time;
	};
};
