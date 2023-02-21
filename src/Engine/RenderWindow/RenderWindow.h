#define DEBUG

#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class RenderWindow {
public:
	RenderWindow();
	RenderWindow(const std::string& title, const int& x, const int& y);

	SDL_Texture* loadTexture(const std::string& filepath);

	void render(SDL_Texture* texture);

private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;
};