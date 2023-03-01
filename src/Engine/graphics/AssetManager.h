#pragma once

#define DEBUG

#ifdef DEBUG
#include <iostream>
#endif // DEBUG

#include <string>
#include <map>

#include <SDL2/SDL_image.h>

class AssetManager {
public:
	AssetManager(SDL_Renderer* renderer) {
		this->_renderer = renderer;
	}

	~AssetManager();

	/**
	Loads SDL_Texture* into a map
	*/
	void			LoadTexture(const std::string& name, const std::string& path);

	/**
	* \returns SDL_Texture* from map
	*/
	SDL_Texture*	GetTexture (const std::string& name);

private:
	SDL_Renderer* _renderer;

	std::map<std::string, SDL_Texture*> _textures;
};