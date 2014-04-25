#ifndef AND_H
#define AND_H

#include "Gate.h"

class AND:Gate{
	
	public:
		AND(bool,bool);

		bool get_output();
};

#endif
