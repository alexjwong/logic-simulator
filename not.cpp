#include "not.h"

NOT::NOT(Gate in1, Gate in2) : Gate(){
	input1 = get_output(in1);
	input2 = get_output(in2);

	// Determine tier
	if (in1.tier >= in2.tier){
		tier = in1.tier + 1;
	}
	else tier = in2.tier +1;

}

int NOT::get_output(){
	return ~input1;
}
