#include <Renderer3D/Renderer3DPrecompiledHeader.h>
#include <Renderer3D/Core/LayerStack.h>
#include <optional>

namespace Renderer3D{
	LayerStack::LayerStack(){
	}

	LayerStack::~LayerStack(){
		for(Layer* layer : _layers){
			delete layer;
		}
	}

	void LayerStack::pushLayer(Layer* layer){
		_layers.emplace(_layers.begin() + _layersInsertIndex, layer);
		_layersInsertIndex++;
	}

	void LayerStack::pushOverlay(Layer* overlay){
		_layers.emplace_back(overlay);
	}

	void LayerStack::popLayer(Layer* layer){
		auto iter = std::find(_layers.begin(), _layers.end(), layer);

		if(iter != _layers.end()){
			_layers.erase(iter);
			_layersInsertIndex--;
		}
	}

	void LayerStack::popOverlay(Layer* overlay){
		auto iter = std::find(_layers.begin(), _layers.end(), overlay);

		if(iter != _layers.end()){
			_layers.erase(iter);
		}
	}

};
