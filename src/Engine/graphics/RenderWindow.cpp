#include "RenderWindow.h"

RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y) {
	#ifdef DEBUG
	std::cout << "RenderWindow::RenderWindow" << std::endl;
	#endif

	_window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, SDL_WINDOW_SHOWN);
	_renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);
}

RenderWindow::~RenderWindow() {
	#ifdef DEBUG
	std::cout << "RenderWindow::~RenderWindow" << std::endl;
	#endif

	/*delete this->_renderer;
	delete this->_window;*/

	SDL_DestroyRenderer(_renderer);
	SDL_DestroyWindow(_window);
}

SDL_Window* RenderWindow::getWindow() {
	#ifdef DEBUG
	std::cout << "RenderWindow::getWindow()" << std::endl;
	#endif

	return this->_window;
}

SDL_Renderer* RenderWindow::getRenderer() {
	#ifdef DEBUG
	std::cout << "RenderWindow::getRenderer()" << std::endl;
	#endif

	return this->_renderer;
}

void RenderWindow::Draw() {
#ifdef DEBUG
	std::cout << "RenderWindow::OnDraw()" << std::endl;
#endif

	/*int e = SDL_RenderCopy(
		_renderer,
		obj->getTexture(),
		obj->getSrc(),
		obj->getDst()
	);

	if (e < 0) {
		std::cout << "RenderWindow::OnDraw(Drawable* obj) ERROR: " << SDL_GetError() << std::endl;
	}*/
}

void RenderWindow::Draw(Drawable* obj) {
	#ifdef DEBUG
	std::cout << "RenderWindow::OnDraw(Drawable* obj)" << std::endl;
	#endif

	int e = SDL_RenderCopy(
		_renderer,
		obj->getTexture(),
		obj->getSrc(),
		obj->getDst()
	);

	if (e < 0) {
		std::cout << "RenderWindow::OnDraw(Drawable* obj) ERROR: " << SDL_GetError() << std::endl;
	}
}

void RenderWindow::Clear() {
	#ifdef DEBUG
	std::cout << "RenderWindow::Clear()" << std::endl;
	#endif

	if (SDL_RenderClear(_renderer) < 0) {
		std::cout << "RenderWindow::clear ERROR: " << SDL_GetError() << std::endl;
	}
}

void RenderWindow::Destroy() {
	#ifdef DEBUG
	std::cout << "RenderWindow::Destroy()" << std::endl;
	#endif

	SDL_DestroyWindow(_window);
}

void RenderWindow::Display() {
	#ifdef DEBUG
	std::cout << "RenderWindow::Display()" << std::endl;
	#endif

	SDL_RenderPresent(_renderer);
}