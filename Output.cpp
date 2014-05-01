#include "Output.h"

Output::Output() : Gate() {
	num_outputs++;
	std::cout << "Output constructed." << std::endl;  
}

void Output::set_linkage(Gate* g1){
	input = g1;
}

bool Output::get_output(){
	return input->get_output();
}
