#ifndef XOR_H
#define XOR_H

#include "Gate.h"

class Gate;

class XOR: public Gate {
	public:
		XOR(Gate,Gate);
		bool get_output();
};

#endif
