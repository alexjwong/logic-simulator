#include "XNOR.h"


XNOR::XNOR() : Gate(){
	std::cout << "XNOR gate constructed" << std::endl;
}

void XNOR::set_linkage(Gate* g1, Gate* g2){
	input1 = g1;
	input2 = g2;
}

bool XNOR::get_output(){
	return ~(input1->get_output() ^ input2->get_output());
}
//HOLY CRAP BATMAN
