#ifndef INPUT_H
#define INPUT_H

#include "Gate.h"

class Gate;

class INPUT: public Gate {
	public:
		INPUT(int);
		int get_output();
};

#endif
