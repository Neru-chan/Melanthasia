#define SDL_MAIN_HANDLED

#include "Game/Game.h"

int main() {
	Game game;
	return game.onExecute();
}