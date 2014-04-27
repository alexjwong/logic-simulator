#ifndef AND_H
#define AND_H

#include "Gate.h"

class AND:Gate{
	
	public:
		AND(Gate,Gate);

		bool get_output();
		
		int tier;
};

#endif
