#ifndef GATE_H
#define GATE_H

#include <iostream>

class Gate {

	public:
		Gate();
		

		bool tier_change(int new_input, bool repeat = false);
		bool get_output();

		static int gate_count;

	private:
		bool input[2];
		bool output;
		int tier;
		

};

#endif
