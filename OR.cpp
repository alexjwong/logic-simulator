#include "OR.h"


OR::OR() : Gate(){
	std::cout << "OR gate constructed" << std::endl;
}

void OR::set_linkage(Gate* g1, Gate* g2){
	input1 = g1;
	input2 = g2;
}

bool OR::get_output(){
	return (input1.get_output() | input2.get_output());
}
