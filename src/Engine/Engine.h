#pragma once
#include "Event.h"
#include "RenderWindow/RenderWindow.h"

class Engine : public Event {
public:
	Engine();

	int onExecute();

	bool onInit();

	void OnEvent(SDL_Event* Event);
	void OnLoop();
	void OnRender();

	void OnCleanup();

	void OnExit();

	RenderWindow* window;
	bool running;
};