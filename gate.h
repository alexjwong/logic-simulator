#ifndef GATE_H
#define GATE_H

#include <iostream>

class Gate {

	public:
		bool tier_change(int new_input, bool repeat = false);

		static int gate_count;

	private:
		bool input1;
		bool input2;
		int tier;
		
};

#endif
