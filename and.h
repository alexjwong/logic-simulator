#ifndef AND_H
#define AND_H

#include "gate.h"

class Gate;

class AND: public Gate{
	public:
		AND(Gate,Gate);
		int output;
};

#endif
