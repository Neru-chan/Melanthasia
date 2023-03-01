#define SDL_MAIN_HANDLED

//#include "Game/Game.h"
#include "Engine/Engine.h"



int main() {
	Engine engine;
	
	return engine.onExecute();
}