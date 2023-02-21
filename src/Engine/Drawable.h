#pragma once

#define DEBUG

#include <SDL2/SDL_image.h>

class Drawable {
public:
	Drawable();

	void setTexture(SDL_Texture* t);
	void setSrc(int x, int y, int w, int h);
	void setDst(int x, int y, int w, int h);

	SDL_Texture* getTexture();
	SDL_Rect*	 getSrc();
	SDL_Rect*	 getDst();

private:
	SDL_Texture* t;
	SDL_Rect*	 src;
	SDL_Rect*	 dst;
};