#include <Renderer3D/Renderer3DPrecompiledHeader.h>
#include <Renderer3D/Core/Layer.h>

namespace Renderer3D{
	Layer::Layer(const std::string& name) : _debugName(name) {}

	Layer::~Layer(){}
};
