#ifndef AND_H
#define AND_H

#include "Gate.h"

class OUTPUT:Gate{

public:
	OUTPUT(Gate);
    	int get_output();
    	bool input;

};

#endif
