#pragma once

#define DEBUG

#ifdef DEBUG
#include <iostream>
#endif // DEBUG

#include <string>
#include <map>

#include <SDL2/SDL_image.h>

class ResourceManager {
public:
	ResourceManager() {

	}

	ResourceManager(SDL_Renderer* renderer) {
		this->_renderer = renderer;
	}

	~ResourceManager();

	void			LoadTexture(const std::string& name, const std::string& path);
	SDL_Texture*	GetTexture (const std::string& name);

private:
	SDL_Renderer* _renderer;

	std::map<std::string, SDL_Texture*> _textures;
};