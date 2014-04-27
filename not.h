#ifndef NOT_H
#define NOT_H

#include "Gate.h"

class Gate;

class NOT: public Gate {
	public:
		NOT(Gate,Gate);
		int get_output();
};

#endif
