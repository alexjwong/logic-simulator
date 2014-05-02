#ifndef GATE_H
#define GATE_H

#include <iostream>

class Gate {
	public:
		Gate();
		virtual ~Gate();

		int get_tier();
		void set_tier(int);
		virtual bool get_output();

	protected:
		int tier;

};

#endif
