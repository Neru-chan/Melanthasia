#include "Graphics.h"

Graphics::Graphics() {
	#ifdef DEBUG
	std::cout << "Graphics::Graphics()" << std::endl;
	#endif
}

Graphics::~Graphics() {

}

RenderWindow* Graphics::getRenderWindow() {
	return this->_win;
}

void Graphics::onInit() {
#ifdef DEBUG
	std::cout << "Graphics::onInit()" << std::endl;
#endif

	if (_win == nullptr) {
		_win = new RenderWindow("Engine", 640, 480);
	}
}

void Graphics::LoadTexture(const std::string& name, const std::string& path) {
	_res->LoadTexture(name, path);
}

SDL_Texture* Graphics::GetTexture(const std::string& name) {
	return _res->GetTexture(name);
}


//void Graphics::createWindow(const std::string& title, const int& x, const int& y) {
//	auto window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, SDL_WINDOW_SHOWN);
//	if (window == NULL) {
//		std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y) ERROR: " << SDL_GetError() << std::endl;
//	}
//	this->_window = window;
//}
//
//void Graphics::createRenderer(SDL_Window* window) {
//	auto renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//	if (renderer == NULL) {
//		std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y) ERROR: " << SDL_GetError() << std::endl;
//	}
//	this->_renderer = renderer;
//}
//
//SDL_Window* Graphics::getWindow() {
//	return this->_window;
//}
//
//SDL_Renderer* Graphics::getRenderer() {
//	return this->_renderer;
//}

//RenderWindow::RenderWindow() {
//#ifdef DEBUG
//	std::cout << "RenderWindow::RenderWindow()" << std::endl;
//#endif // DEBUG
//}

//RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y)
//	: _window(nullptr), _renderer(nullptr) {
//#ifdef DEBUG
//	std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y)" << std::endl;
//#endif // DEBUG
//
//	_window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, SDL_WINDOW_SHOWN);
//	if (_window == NULL) {
//		std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y) ERROR: " << SDL_GetError() << std::endl;
//	}
//
//	_renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);
//	if (_renderer == NULL) {
//		std::cout << "RenderWindow::RenderWindow(const std::string& title, const int& x, const int& y) ERROR: " << SDL_GetError() << std::endl;
//	}
//}

//void RenderWindow::onDraw(Drawable* obj) {
//#ifdef DEBUG
//	std::cout << "RenderWindow::OnDraw(Drawable* obj)" << std::endl;
//#endif // DEBUG
//
//	int e = SDL_RenderCopy(
//		_renderer,
//		obj->getTexture(),
//		obj->getSrc(),
//		obj->getDst()
//	);
//
//	if (e < 0) {
//		std::cout << "RenderWindow::OnDraw(Drawable* obj) ERROR: " << SDL_GetError() << std::endl;
//	}
//}



	//void Graphics::onDraw() {
	//#ifdef DEBUG
	//	std::cout << "RenderWindow::onDraw()" << std::endl;
	//#endif // DEBUG
	//
	//	/*int e = SDL_RenderCopy(
	//		_renderer,
	//		obj->getTexture(),
	//		obj->getSrc(),
	//		obj->getDst()
	//	);*/
	//
	//	/*if (e < 0) {
	//		std::cout << "RenderWindow::OnDraw ERROR: " << SDL_GetError() << std::endl;
	//	}*/
	//}

//void Graphics::clear() {
//#ifdef DEBUG
//	std::cout << "RenderWindow::clear()" << std::endl;
//#endif // DEBUG
//
//	if (SDL_RenderClear(_renderer) < 0) {
//		std::cout << "RenderWindow::clear ERROR: " << SDL_GetError() << std::endl;
//	}
//}

//void Graphics::destroy() {
//#ifdef DEBUG
//	std::cout << "RenderWindow::destroy()" << std::endl;
//#endif // DEBUG
//
//	SDL_DestroyWindow(_window);
//}

//void Graphics::display() {
//#ifdef DEBUG
//	std::cout << "RenderWindow::display()" << std::endl;
//#endif // DEBUG
//
//	SDL_RenderPresent(_renderer);
//}

//SDL_Texture* RenderWindow::loadTexture(const std::string& filepath) {
//#ifdef DEBUG
//	std::cout << "RenderWindow::loadTexture(const std::string& filepath)" << std::endl;
//#endif // DEBUG
//
//	SDL_Texture* t = nullptr;
//	t = IMG_LoadTexture(_renderer, filepath.c_str());
//
//	if (!t) {
//		std::cout << "RenderWindow::loadTexture ERROR: " << SDL_GetError() << std::endl;
//	}
//
//	return t;
//}