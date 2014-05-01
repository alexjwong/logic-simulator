#ifndef XOR_H
#define XOR_H

#include "Gate.h"

class Gate;

class AXOR: public Gate{
	public:
		XOR();

		void set_linkage(Gate* g1, Gate* g2);
		bool get_output();

	private:
		Gate* input1;
		Gate* input2;
};

#endif
