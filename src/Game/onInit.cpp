#include "Game.h"

bool Game::onInit() {
#ifdef DEBUG
	std::cout << "Game::onInit()" << std::endl;
#endif // DEBUG

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << SDL_GetError() << std::endl;
		return false;
	}

	window = new RenderWindow("Melanthasia", 640, 480);

	Tile grass(0, 0, window->loadTexture("src/Assets/tile_0.png"));
	tiles.push_back(grass);

	return true;
}