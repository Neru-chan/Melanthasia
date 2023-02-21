#define DEBUG

#include <iostream>
#include "Engine/Engine.h"


class Game : public Engine{
public:
	Game();

	int onExecute();

private:
	bool running;
};