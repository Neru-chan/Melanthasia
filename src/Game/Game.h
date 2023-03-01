#pragma once

#include "Engine/Engine.h"

#include "Game/World/Tile.h"

class Game : public Engine {
public:
	bool OnInit();
	void OnRender();

private:
	Tile* tile;
};