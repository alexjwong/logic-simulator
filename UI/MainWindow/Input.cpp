#include "Input.h"

Input::Input() : Gate() {
	//num_inputs++;
    this->setToolTip("Input \"Gate\"");
	std::cout << "Raw input default constructed." << std::endl;
}
//void Gate::set_linkage(Gate* g1){}
//void Gate::set_linkage(Gate* g1, Gate* g2){}
Input::Input(bool in) : Gate() {
	output = in;
	//num_inputs++;
	std::cout << "Raw input constructed." << std::endl;
}

Input::~Input(){
    std::cout << "shitfucker" << std::endl;
}

void Input::set_output(int in){
	if (in == 0){
		output = false;
	}
	else if (in == 1){
		output = true;
	}
	else
		std::cout << "Something has gone terribly wrong." << std::endl;
}

bool Input::get_output(){
	return output;
}
