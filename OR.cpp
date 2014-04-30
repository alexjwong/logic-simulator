#include "OR.h"

OR::OR(Gate in1, Gate in2) : Gate(){
	input1 = in1.output;
	input2 = in2.output;
	output = input1 | input2;

	// Determine tier
	if (in1.tier >= in2.tier){
		tier = in1.tier + 1;
	}
	else tier = in2.tier +1;
}


