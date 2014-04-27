#include "nor.h"

NOR::NOR(Gate in1, Gate in2) : Gate(){
	input1 = in1.get_output();
	input2 = in2.get_output();

	// Determine tier
	if (in1.tier >= in2.tier)
	{
		tier = in1.tier + 1;
	}
	else tier = in2.tier +1;

}

int NOR::get_output()
{
	return ~(input1 | input2);
}
