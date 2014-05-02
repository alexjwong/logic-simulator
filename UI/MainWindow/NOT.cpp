#include "NOT.h"


NOT::NOT() : Gate(){
	std::cout << "NOT gate constructed" << std::endl;
}

void NOT::set_linkage(Gate* g1){
	input1 = g1;

}

bool NOT::get_output(){
	return ~input1->get_output();
}
