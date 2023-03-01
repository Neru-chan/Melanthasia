#include "ResourceManager.h"

void ResourceManager::LoadTexture(const std::string& name, const std::string& path) {
	SDL_Texture* t = IMG_LoadTexture(_renderer, path.c_str());
	if (!t) {
		std::cout << "ResourceManager::LoadTexture(const std::string& name, const std::string& path) ERROR: " << SDL_GetError() << std::endl;
	}

	this->_textures[name] = t;
}

SDL_Texture* ResourceManager::GetTexture(const std::string& name) {
	return this->_textures.at(name);
}