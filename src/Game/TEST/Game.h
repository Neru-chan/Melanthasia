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
	std::vector<Drawable> tiles;
};