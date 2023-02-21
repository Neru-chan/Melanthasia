#include "RenderWindow.h"

RenderWindow::RenderWindow() {
#ifdef DEBUG
	std::cout << "RenderWindow::RenderWindow()" << std::endl;
#endif // DEBUG
}

RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y)
	: _window(nullptr), _renderer(nullptr) {

#ifdef DEBUG
	std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y)" << std::endl;
#endif // DEBUG

	if (_window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, SDL_WINDOW_SHOWN)) {
		std::cout << SDL_GetError() << std::endl;
	}
	if (_renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED)) {
		std::cout << SDL_GetError() << std::endl;
	}
}

SDL_Texture* RenderWindow::loadTexture(const std::string& filepath) {
#ifdef DEBUG
	std::cout << "SDL_Texture* RenderWindow::loadTexture(const std::string& filepath)" << std::endl;
#endif // DEBUG

	SDL_Texture* t = nullptr;
	t = IMG_LoadTexture(_renderer, filepath.c_str());

	if (!t) {
		std::cout << "RenderWindow::loadTexture ERROR:\n" << SDL_GetError() << std::endl;
	}

	return t;
}