#include "XOR.h"

XOR::XOR() : Gate(){
    oneLink=false;
    this->setToolTip("XOR Gate");
	std::cout << "XOR gate constructed" << std::endl;
}

//void XOR::set_linkage(Gate* g1){}

void XOR::set_linkage(Gate* g1, Gate* g2){
    std::cout<<"linked \t"<<std::endl;
	input1 = g1;
	input2 = g2;
}

bool XOR::get_output(){
	return (input1->get_output() ^ input2->get_output());
}
