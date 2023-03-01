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

	virtual int OnExecute();

	virtual bool OnInit();

	virtual void OnEvent(SDL_Event* Event);
	virtual void OnLoop();
	virtual void OnRender();

	virtual void OnCleanup();

	virtual void OnExit();

	Graphics graphics;

private:
	RenderWindow*	window;
	bool			running;
};