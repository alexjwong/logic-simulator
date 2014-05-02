#ifndef INPUT_H
#define INPUT_H

#include "Gate.h"

class Gate;

class Input: public Gate {
	public:
		Input();
		Input(bool in);
		
		
		static int num_inputs;	
		void set_output(int in);
		bool get_output();
	
	private:
		bool output;
};

#endif
