#include "Game/Game.h"

#ifdef DEBUG
#include <chrono>
#endif // DEBUG

bool Game::OnInit() {
	#ifdef DEBUG
	std::cout << "Game::onInit()" << std::endl;
	#endif
	
	if (graphics.onInit() == false) return false;

	//resources.init() ???????????
	graphics.LoadTexture("grass", "src/Assets/tile_0.png");
	this->tile = new Tile(1, 1, graphics.GetTexture("grass"));

	return true;
}



void Game::OnRender() {
	#ifdef DEBUG
	std::cout << "Game::OnRender()" << std::endl;
	auto begin = std::chrono::high_resolution_clock::now();
	#endif

	graphics.getRenderWindow()->Clear();
	graphics.getRenderWindow()->Draw(tile);
	graphics.getRenderWindow()->Display();

	#ifdef DEBUG
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - begin;
	std::cout << "Game::OnRender() FRAME TIME: " << duration.count() << "s. (fps: " << 1 / duration.count() << ")" << std::endl;
	#endif
}