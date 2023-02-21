#pragma once
#include "Event.h"
#include "RenderWindow/RenderWindow.h"

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

	RenderWindow* window;
	bool running;
};