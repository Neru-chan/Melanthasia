#include "RenderWindow.h"

void RenderWindow::display() {
#ifdef DEBUG
	std::cout << "RenderWindow::display()" << std::endl;
#endif // DEBUG

	SDL_RenderPresent(_renderer);
}