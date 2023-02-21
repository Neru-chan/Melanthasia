#include "RenderWindow.h"

void RenderWindow::clear() {
#ifdef DEBUG
	std::cout << "RenderWindow::clear()" << std::endl;
#endif // DEBUG

	if (SDL_RenderClear(_renderer) < 0) {
		std::cout << "RenderWindow::clear ERROR: " << SDL_GetError() << std::endl;
	}
}