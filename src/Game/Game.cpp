#include "Game.h"

Game::Game() {
#ifdef DEBUG
	std::cout << "Game::Game()" << std::endl;
#endif // DEBUG
}

int Game::onExecute() {
#ifdef DEBUG
	std::cout << "Game::onExecute()" << std::endl;
#endif // DEBUG

	if (onInit() == false) return -1;

	return 0;
}