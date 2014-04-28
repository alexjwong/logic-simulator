#include "not.h"

NOT::NOT(Gate in1) : Gate(){
	input1 = in1.output;
	output = ~input1;

	// Determine tier
	tier = in1.tier + 1;

}

