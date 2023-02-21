#pragma once

#define DEBUG

#include <iostream>
#include <vector>

#include "Engine/Engine.h"

#include "Tile.h"

class Game : public Engine{
public:
	Game();


	bool onInit();
	void OnLoop();


private:
	class Resources {
	public:
		static bool load();

		static SDL_Texture* loadTexture(const std::string& title);

		static Tile getTile(const int& id);
	private:
		static std::vector<Tile> tiles;
	};
};