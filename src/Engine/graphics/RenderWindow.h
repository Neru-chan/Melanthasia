#pragma once

#include <iostream>

#include "SDL2/SDL_image.h"

#include "Engine/Drawable.h"

class RenderWindow {
public:
	RenderWindow();
	RenderWindow(const std::string& title, const int& x, const int& y);
	~RenderWindow();

	SDL_Window*		getWindow();
	SDL_Renderer*	getRenderer();
	
	void Draw();
	void Draw(Drawable* obj);
	void Clear();
	void Destroy();
	void Display();

private:
	SDL_Window*		_window;
	SDL_Renderer*	_renderer;
};