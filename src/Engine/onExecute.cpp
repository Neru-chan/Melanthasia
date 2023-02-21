#include "Engine.h"

int Engine::onExecute() {
#ifdef DEBUG
	std::cout << "Game::onExecute()" << std::endl;
#endif // DEBUG

	if (onInit() == false) return -1;

	SDL_Event e;

	while (running) {
		//Event
		while (SDL_PollEvent(&e)) {
			OnEvent(&e);
		}

		//Loop
		OnLoop();

		//Render
		OnRender();
	}

	//Cleanup
	OnCleanup();

	return 0;
}