#include "Gate.h"

Gate::Gate(){
	std::cout << "Gate constructed." << std::endl;
	gate_count++;
}

Gate::~Gate(){
	std::cout << "Gate destructed." << std::endl;
	gate_count--;
}

bool Gate::get_output(){
	
}
