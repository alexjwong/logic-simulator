#ifndef XNOR_H
#define XNOR_H

#include "Gate.h"

class Gate;

class XNOR: public Gate{
	public:
		XNOR();

		void set_linkage(Gate* g1, Gate* g2);
		bool get_output();

	private:
		Gate* input1;
		Gate* input2;
};

#endif
