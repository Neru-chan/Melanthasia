#pragma once

#include "Engine/Drawable.h"

#ifdef DEBUG
#include <iostream>
#endif

class Tile : public Drawable {
public:
	const int WIDTH	 = 32;
	const int HEIGHT = 32;

	Tile();
	Tile(const int& x, const int& y, SDL_Texture* t);
	~Tile();

	int getX();
	int getY();

	void setX(const int& x);
	void setY(const int& y);

private:
	int x;
	int y;
};