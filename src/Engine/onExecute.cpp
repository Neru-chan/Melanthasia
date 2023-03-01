#include "Engine.h"

int Engine::onExecute() {
#ifdef DEBUG
	std::cout << "Engine::onExecute()" << std::endl;
#endif // DEBUG

	if (onInit() == false) return -1;

	SDL_Event e;

	running = true;

	while (running) {
		while (SDL_PollEvent(&e)) OnEvent(&e);

		OnLoop();

		OnRender();
	}

	//Cleanup
	OnCleanup();

	return 0;
}