#ifndef GATE_H
#define GATE_H

#include <iostream>

class Gate 
{

	public:
		Gate();
		
		static int gate_count = 0;
		
		int input1;
		int input2;
		int tier;
		int output;
		
};

#endif
