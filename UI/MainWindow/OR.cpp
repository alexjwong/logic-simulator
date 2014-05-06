#include "OR.h"

OR::OR() : Gate(){
    oneLink=false;
    this->setToolTip("OR Gate");
	std::cout << "OR gate constructed" << std::endl;
}

//void OR::set_linkage(Gate* g1){}

void OR::set_linkage(Gate* g1, Gate* g2){
    std::cout<<"linked \t"<<std::endl;
	input1 = g1;
	input2 = g2;
}

bool OR::get_output(){
	return (input1->get_output() | input2->get_output());
}
