#include "Gate.h"

Gate::Gate(){
	std::cout << "Gate constructed." << std::endl;
	tier = 0;
}

Gate::~Gate(){
	std::cout << "Gate destructed." << std::endl;
}

int Gate::get_tier(){
	return tier;
}

void Gate::set_tier(int in){
	tier = in;
}

bool Gate::get_output(){
	return false;
}