#include "Tile.h"

Tile::Tile() {
#ifdef DEBUG
	std::cout << "Tile::Tile()" << std::endl;
#endif // DEBUG
}

Tile::Tile(const unsigned int& x, const unsigned int& y, SDL_Texture* t) {
#ifdef DEBUG
	std::cout << "Tile::Tile(const unsigned int& x, const unsigned int& y, SDL_Texture* t)" << std::endl;
#endif // DEBUG

	setX(x);
	setY(y);

	setSrc(0, 0, TILE_WIDTH, TILE_HEIGHT);
	setDst(x, y, TILE_WIDTH, TILE_HEIGHT);

	setTexture(t);
}

int Tile::getX() {
#ifdef DEBUG
	std::cout << "Tile::getX()" << std::endl;
#endif // DEBUG

	return this->x;
}

int Tile::getY() {
#ifdef DEBUG
	std::cout << "Tile::getY()" << std::endl;
#endif // DEBUG

	return this->y;
}

void Tile::setX(const unsigned int& x) {
#ifdef DEBUG
	std::cout << "Tile::setX()" << std::endl;
#endif // DEBUG

	this->x = x;
}

void Tile::setY(const unsigned int& y) {
#ifdef DEBUG
	std::cout << "Tile::setY()" << std::endl;
#endif // DEBUG

	this->y = y;
}