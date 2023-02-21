#include "Game.h"

bool Game::onInit() {
#ifdef DEBUG
	std::cout << "Game::onInit()" << std::endl;
#endif // DEBUG

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << SDL_GetError() << std::endl;
		return false;
	}

	/*if (Resources::load() == false) {
		return false;
	}*/

	window = new RenderWindow("Melanthasia", 640, 480);

	return true;
}