#include "RenderWindow.h"

void RenderWindow::destroy() {
#ifdef DEBUG
	std::cout << "RenderWindow::destroy()" << std::endl;
#endif // DEBUG

	SDL_DestroyWindow(_window);
}