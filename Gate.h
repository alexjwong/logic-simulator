#ifndef GATE_H
#define GATE_H

#include <iostream>

class Gate {
	public:
		Gate();
		virtual ~Gate();
		static int gate_count;
		virtual bool get_output();		
};

#endif
