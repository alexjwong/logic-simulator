#include "xnor.h"

XNOR::XNOR(Gate in1, Gate in2){
	input1 = get_output(in1);
	input2 = get_output(in2);

	// Determine tier
	if (in1.tier >= in2.tier){
		tier = in1.tier + 1;
	}
	else tier = in2.tier +1;
}

int get_output::XNOR(){
	return ~(input1 ^ input2);
}