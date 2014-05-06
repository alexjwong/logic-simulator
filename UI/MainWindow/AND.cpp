#include "AND.h"

AND::AND() : Gate(){
    oneLink=false;
    this->setToolTip("AND Gate");
    std::cout << "AND gate constructed" << std::endl;
}
//void Gate::set_linkage(Gate* g1){}
void AND::set_linkage(Gate* g1, Gate* g2){
    std::cout<<"linked \t"<<std::endl;
	input1 = g1;
	input2 = g2;
}
bool AND::get_output(){
	return (input1->get_output() & input2->get_output());
}
