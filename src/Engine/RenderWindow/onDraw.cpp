#include "RenderWindow.h"

void RenderWindow::onDraw(Drawable* obj) {
#ifdef DEBUG
	std::cout << "RenderWindow::OnDraw(Drawable* obj)" << std::endl;
#endif // DEBUG

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

void RenderWindow::onDraw() {
#ifdef DEBUG
	std::cout << "RenderWindow::onDraw()" << std::endl;
#endif // DEBUG

	/*int e = SDL_RenderCopy(
		_renderer,
		obj->getTexture(),
		obj->getSrc(),
		obj->getDst()
	);*/

	/*if (e < 0) {
		std::cout << "RenderWindow::OnDraw ERROR: " << SDL_GetError() << std::endl;
	}*/
}