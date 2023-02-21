#include "Engine.h"

bool Engine::onInit() {
#ifdef DEBUG
	std::cout << "Engine::onInit()" << std::endl;
#endif // DEBUG

	return true;
}