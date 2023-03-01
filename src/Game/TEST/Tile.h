#pragma once

#define DEBUG

#include <iostream>
#include "Engine/Drawable.h"

class Tile : public Drawable {
public:

	const int TILE_WIDTH  = 32;
	const int TILE_HEIGHT = 32;

	Tile();
	Tile(const unsigned int& x, const unsigned int& y, SDL_Texture* t);

	int getX();
	int getY();

	void setX(const unsigned int& x);
	void setY(const unsigned int& y);

private:
	unsigned int x;
	unsigned int y;
};