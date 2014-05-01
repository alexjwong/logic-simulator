#ifndef OUTPUT_H
#define OUTPUT_H

#include "Gate.h"

class Output: public Gate {
	public:
		Output();

		void set_linkage(Gate* g1);
		bool get_output();

	private:
		Gate* input;
};

#endif
