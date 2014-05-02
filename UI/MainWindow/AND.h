#ifndef AND_H
#define AND_H

#include "Gate.h"

class Gate;

class AND: public Gate {
	public:
		AND();

		void set_linkage(Gate* g1, Gate* g2);
		bool get_output();

	private:
		Gate* input1;
		Gate* input2;
};

#endif
