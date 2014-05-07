#ifndef GATE_H
#define GATE_H

#include <iostream>

class Gate {
	public:
		Gate();
		Gate(char inType);
		virtual ~Gate();

		int get_tier();
		void set_tier(int);
		virtual bool get_output();
		char get_type();

		static int gate_count;

	protected:
		int tier;
		char type;
};

#endif
