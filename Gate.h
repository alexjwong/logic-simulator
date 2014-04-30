#ifndef GATE_H
#define GATE_H

#include <iostream>

class Gate 
{

	public:
		Gate();
		
		static int gate_count = 0;
		static vector<int> all_the_gates;
		
		int id_num;
		int input1;
		int input2;
		int tier;
		int output;
		
};

#endif
