#include "RenderWindow.h"

SDL_Texture* RenderWindow::loadTexture(const std::string& filepath) {
#ifdef DEBUG
	std::cout << "RenderWindow::loadTexture(const std::string& filepath)" << std::endl;
#endif // DEBUG

	SDL_Texture* t = nullptr;
	t = IMG_LoadTexture(_renderer, filepath.c_str());

	if (!t) {
		std::cout << "RenderWindow::loadTexture ERROR: " << SDL_GetError() << std::endl;
	}

	return t;
}