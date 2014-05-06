#include "Output.h"

Output::Output() : Gate() {
    oneLink=true;
	//num_outputs++;
    this->setToolTip("Output \"Gate\"");
	std::cout << "Output constructed." << std::endl;  
}

//void Gate::set_linkage(Gate* g1){}

void Output::set_linkage(Gate* g1){
    std::cout<<"linked \t"<<std::endl;
    input = g1;
}

bool Output::get_output(){
	return input->get_output();
}
