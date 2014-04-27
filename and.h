#ifndef AND_H
#define AND_H

#include "Gate.h"

class AND:Gate{
	
	public:
		AND(Gate,Gate);

		int get_output();
	
};

#endif
