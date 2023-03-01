#include "AssetManager.h"

void AssetManager::LoadTexture(const std::string& name, const std::string& path) {
	#ifdef DEBUG
	std::cout << "AssetManager::LoadTexture(const std::string& name, const std::string& path)" << std::endl;
	#endif

	SDL_Texture* t = IMG_LoadTexture(_renderer, path.c_str());
	if (!t) {
		std::cout << "ResourceManager::LoadTexture(const std::string& name, const std::string& path) ERROR: " << SDL_GetError() << std::endl;
	}

	this->_textures[name] = t;
}

SDL_Texture* AssetManager::GetTexture(const std::string& name) {
	#ifdef DEBUG
	std::cout << "AssetManager::GetTexture(const std::string& name)" << std::endl;
	#endif

	return this->_textures.at(name);
}