#pragma once

#define DEBUG

#ifdef DEBUG
#include "iostream"
#endif

#include "Event.h"
#include "graphics/Graphics.h"

class Engine : public Event {
public:
	Engine();

	virtual int onExecute();

	virtual bool onInit();

	virtual void OnEvent(SDL_Event* Event);
	virtual void OnLoop();
	virtual void OnRender();

	virtual void OnCleanup();

	virtual void OnExit();

private:
	Graphics graphics;
	RenderWindow*	window;
	bool			running;
};