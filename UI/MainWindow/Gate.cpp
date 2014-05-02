#include "Gate.h"

Gate::Gate(){
	std::cout << "Gate constructed." << std::endl;
}

Gate::~Gate(){
	std::cout << "Gate destructed." << std::endl;
}

bool Gate::get_output(){
    return true;
}
