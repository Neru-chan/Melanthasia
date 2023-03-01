#include "Engine.h"

bool Engine::onInit() {
	#ifdef DEBUG
	std::cout << "Engine::onInit()" << std::endl;
	#endif

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << SDL_GetError() << std::endl;
		return false;
	}

	graphics.onInit();

	return true;
}