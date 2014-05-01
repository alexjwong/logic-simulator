#include "NAND.h"



NAND::NAND() : Gate(){
	std::cout << "NAND gate constructed" << std::endl;
}

void NAND::set_linkage(Gate* g1, Gate* g2){
	input1 = g1;
	input2 = g2;
}

bool NAND::get_output(){
	return ~(input1.get_output() & input2.get_output());
}
