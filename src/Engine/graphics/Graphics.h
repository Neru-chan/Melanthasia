#pragma once

#define DEBUG

#include <iostream>

//#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "AssetManager.h"
#include "RenderWindow.h"

//#include "Engine/Drawable.h"
//#include "Engine/ResourceManager/ResourceManager.h"

class Graphics {
public:
	Graphics();
	virtual ~Graphics();

	/**
	* \returns true on success;
	*/
	bool onInit();

	RenderWindow* getRenderWindow();

	void LoadTexture(const std::string& name, const std::string& path);
	SDL_Texture* GetTexture(const std::string& name);


	//SDL_Texture* LoadTexture(const std::string& name, const std::string& path);

	/*void onDraw();
	void clear();
	void display();
	void destroy();*/


	//void createWindow(const std::string& title, const int& x, const int& y);
	//void createRenderer(SDL_Window* window);

	/*static SDL_Window*		createWindow  (const std::string& title, const int& x, const int& y);
	static SDL_Renderer*	createRenderer(SDL_Window* window);*/

	//SDL_Window*		getWindow();
	//SDL_Renderer*	getRenderer();

private:
	RenderWindow*	_win;
	AssetManager*	_res;

	//SDL_Window*			_window;
	//SDL_Renderer*		_renderer;
	
};