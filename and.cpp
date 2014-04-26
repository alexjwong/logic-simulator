#include "and.h"

AND::AND(Gate in1, Gate in2){
	std::cout << "And gate constructed" << std::endl;
	input1 = in1.output;
	input2 = in2.output;

	// Determine tier
	if (in1.tier >= in2.tier){
		tier = in1.tier;
	}
	else tier = in2.tier;


}