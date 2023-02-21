#include "Engine.h"

bool Engine::onInit() {
#ifdef DEBUG
	std::cout << "Engine::onInit()" << std::endl;
#endif // DEBUG

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << SDL_GetError() << std::endl;
		return false;
	}

	window = new RenderWindow("Engine", 640, 480);

	return true;
}