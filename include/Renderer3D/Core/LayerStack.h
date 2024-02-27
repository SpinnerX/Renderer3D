#pragma once
#include <Renderer3D/Core/core.h>
#include <Renderer3D/Core/Layer.h>
#include <vector>

namespace Renderer3D{

	class RENDER_API LayerStack{
		using iterator = std::vector<Layer *>::iterator;
	public:
		LayerStack();
		~LayerStack();

		void pushLayer(Layer* layer);
		void pushOverlay(Layer* overlay);

		void popLayer(Layer* layer);
		void popOverlay(Layer* layer);
		
		iterator begin(){ return _layers.begin(); }

		iterator end(){ return _layers.end(); }
	private:
		std::vector<Layer *> _layers;
		uint32_t _layersInsertIndex = 0;
	};
};

