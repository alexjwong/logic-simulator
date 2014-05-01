#include "AND.h"

AND::AND() : Gate(){
	std::cout << "AND gate constructed" << std::endl;
}

void AND::set_linkage(Gate* g1, Gate* g2){
	input1 = g1;
	input2 = g2;
}

bool AND::get_output(){
	return (input1->get_output() & input2->get_output());
}