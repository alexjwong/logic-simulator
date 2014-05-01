#ifndef INPUT_H
#define INPUT_H

#include "Gate.h"

class Gate;

class Input: public Gate {
	public:
		Input();
		Input(bool);

		void set_output(int);
		bool get_output();
	
	private:
		bool output;
};

#endif
