#include "XNOR.h"

XNOR::XNOR() : Gate(){
    oneLink=false;
    this->setToolTip("XNOR Gate");
	std::cout << "XNOR gate constructed" << std::endl;
}

//void XNOR::set_linkage(Gate* g1){}

void XNOR::set_linkage(Gate* g1, Gate* g2){
    std::cout<<"linked \t"<<std::endl;
	input1 = g1;
	input2 = g2;
}

bool XNOR::get_output(){
	return ~(input1->get_output() ^ input2->get_output());
}
//HOLY CRAP BATMAN
