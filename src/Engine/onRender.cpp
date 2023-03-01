#include "Engine.h"

#ifdef DEBUG
#include <chrono>
#endif // DEBUG

void Engine::OnRender() {
#ifdef DEBUG
	std::cout << "Engine::OnRender()" << std::endl;
	auto begin = std::chrono::high_resolution_clock::now();
#endif // DEBUG

	/*window->clear();
	window->onDraw();
	window->display();*/

	graphics.getRenderWindow()->Clear();
	graphics.getRenderWindow()->Draw();
	graphics.getRenderWindow()->Display();

#ifdef DEBUG
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - begin;
	std::cout << "Engine::OnRender() FRAME TIME: " << duration.count() << "s. (fps: " << 1 / duration.count() << ")" << std::endl;
#endif // DEBUG
}