#include "Drawable.h"

Drawable::Drawable() {

}

void Drawable::setTexture(SDL_Texture* t) {
	this->t = t;
}
void Drawable::setSrc(int x, int y, int w, int h) {

	if (!src) {
		src = new SDL_Rect;
	}

	src->x = x;
	src->y = y;
	src->w = w;
	src->h = h;
}
void Drawable::setDst(int x, int y, int w, int h) {

	if (!dst) {
		dst = new SDL_Rect;
	}

	dst->x = x;
	dst->y = y;
	dst->w = w;
	dst->h = h;
}

SDL_Texture* Drawable::getTexture() {
	return t;
}
SDL_Rect*	 Drawable::getSrc() {
	return src;
}
SDL_Rect*	 Drawable::getDst() {
	return dst;
}