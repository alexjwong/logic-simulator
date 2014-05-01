#include "NOR.h"


NOR::NOR() : Gate(){
	std::cout << "NOR gate constructed" << std::endl;
}

void NOR::set_linkage(Gate* g1, Gate* g2){
	input1 = g1;
	input2 = g2;
}

bool NOR::get_output(){
	return ~(input1.get_output() | input2.get_output());
}

