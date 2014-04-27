#include "output.h"
OUTPUT::OUTPUT(Gate in)
{
	std::cout << "OUTPUT gate constructed" << std::endl;
	 input = in.get_output()

  	int OUTPUT::get_output(){
	return input;
}

