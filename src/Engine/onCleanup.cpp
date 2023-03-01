#include "Engine.h"

void Engine::OnCleanup() {
#ifdef DEBUG
	std::cout << "Engine::OnCleanup()" << std::endl;
#endif

	//window->destroy();
	SDL_Quit();
}