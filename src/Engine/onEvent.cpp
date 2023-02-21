#include "Engine.h"

void Engine::OnEvent(SDL_Event* Event) {
#ifdef DEBUG
	std::cout << "Engine::OnEvent(SDL_Event* Event)" << std::endl;
#endif // DEBUG

	Event::OnEvent(Event);
}