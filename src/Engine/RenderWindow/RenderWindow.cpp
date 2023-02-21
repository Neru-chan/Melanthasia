#include "RenderWindow.h"

//RenderWindow::RenderWindow() {
//#ifdef DEBUG
//	std::cout << "RenderWindow::RenderWindow()" << std::endl;
//#endif // DEBUG
//}

RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y)
	: _window(nullptr), _renderer(nullptr) {
#ifdef DEBUG
	std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y)" << std::endl;
#endif // DEBUG

	_window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, SDL_WINDOW_SHOWN);
	if (_window == NULL) {
		std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y) ERROR: " << SDL_GetError() << std::endl;
	}

	_renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);
	if (_renderer == NULL) {
		std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y) ERROR: " << SDL_GetError() << std::endl;
	}
}