#include "Engine.h"

void Engine::OnRender() {
#ifdef DEBUG
	std::cout << "Engine::OnRender()" << std::endl;
#endif // DEBUG
	window->clear();
	window->display();
}