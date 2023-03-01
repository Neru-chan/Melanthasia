#include "Engine.h"

bool Engine::OnInit() {
	#ifdef DEBUG
	std::cout << "Engine::onInit()" << std::endl;
	#endif

	
	if (!graphics.onInit()) return false;

	return true;
}