#include "NOT.h"

NOT::NOT() : Gate(){
    oneLink=true;
    this->setToolTip("NOT Gate");
	std::cout << "NOT gate constructed" << std::endl;
}

//void NOT::set_linkage(Gate* g1, Gate* g2){}
void NOT::set_linkage(Gate* g1){
    std::cout<<"linked \t"<<std::endl;
	input1 = g1;

}

bool NOT::get_output(){
	return ~input1->get_output();
}
