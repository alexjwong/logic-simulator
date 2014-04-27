#ifndef OUTPUT_H
#define OUTPUT_H

#include "Gate.h"

class OUTPUT:Gate{

public:
	OUTPUT(Gate);
    	int get_output();
    	int input;

};

#endif
