#ifndef GATE_H
#define GATE_H

#include <iostream>

class Gate {
	public:
		Gate();
		virtual ~Gate();
		
		virtual bool get_output();		
};

#endif
