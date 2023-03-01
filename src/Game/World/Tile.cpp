#include "Tile.h"

Tile::Tile() {

}

Tile::Tile(const int& x, const int& y, SDL_Texture* t) {
	#ifdef DEBUG
	std::cout << "Tile::Tile(const int& x, const int& y, SDL_Texture * t)" << std::endl;
	#endif

	setX(x);
	setY(y);

	setSrc(0, 0, WIDTH, HEIGHT);
	setDst(x, y, WIDTH, HEIGHT);

	setTexture(t);
}

void Tile::setX(const int& x) {
	this->x = x;
}

void Tile::setY(const int& y) {
	this->y = y;
}

int Tile::getX() {
	return this->x;
}

int Tile::getY() {
	return this->y;
}