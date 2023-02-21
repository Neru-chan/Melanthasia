#pragma once

#define DEBUG

#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Engine/Drawable.h"

class RenderWindow {
public:
	RenderWindow();
	RenderWindow(const std::string& title, const int& x, const int& y);

	SDL_Texture* loadTexture(const std::string& filepath);

	void OnDraw(Drawable* obj);

	void clear();
	void display();
	void destroy();

private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;
};