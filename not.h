#ifndef NOT_H
#define NOT_H

#include "Gate.h"

class NOT:Gate {
	public:
		NOT(Gate);
		int get_output();
};

#endif
