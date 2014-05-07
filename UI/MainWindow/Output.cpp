#include "Output.h"

Output::Output() : Gate('o') {
    oneLink=true;
//	num_outputs++;
	std::cout << "Output constructed." << std::endl;  
}

void Output::set_linkage(Gate* g1){
    std::cout<<"linked"<<std::endl;
	input = g1;
}

bool Output::get_output(){
	return input->get_output();
}
