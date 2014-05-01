#ifndef NOT_H
#define NOT_H

#include "Gate.h"

class Gate;

class NOT: public Gate {
	public:
		NOT();

		void set_linkage(Gate* g1);
		bool get_output();

	private:
		Gate* input1;
		Gate* input2;
};

#endif
