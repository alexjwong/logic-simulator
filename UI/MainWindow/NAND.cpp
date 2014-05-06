#include "NAND.h"


NAND::NAND() : Gate(){
    oneLink=false;
    this->setToolTip("NAND Gate");
	std::cout << "NAND gate constructed" << std::endl;
}

//void NAND::set_linkage(Gate* g1){}

void NAND::set_linkage(Gate* g1, Gate* g2){
    std::cout<<"linked \t"<<std::endl;
	input1 = g1;
	input2 = g2;
}

bool NAND::get_output(){
	return ~(input1->get_output() & input2->get_output());
}
