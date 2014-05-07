#include "NOT.h"


NOT::NOT() : Gate(){
    oneLink=true;
    setToolTip("NOT");
	std::cout << "NOT gate constructed" << std::endl;
}

void NOT::set_linkage(Gate* g1){
    std::cout<<"linked"<<std::endl;
	input1 = g1;

    tier = g1->tier+1;

}

bool NOT::get_output(){
    return !input1->get_output();
}
