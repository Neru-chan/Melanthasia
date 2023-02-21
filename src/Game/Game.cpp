#include "Game.h"

Game::Game() {
#ifdef DEBUG
	std::cout << "Game::Game()" << std::endl;
#endif // DEBUG

	window = nullptr;
	running = true;
}