#include <iostream>

#include "Gate.h"
#include "Input.h"
#include "Output.h"

#include "AND.h"
#include "NAND.h"
#include "NOR.h"
#include "NOT.h"
#include "OR.h"
#include "XNOR.h"
#include "XOR.h"

int main() {

	bool result;

	Input* x = new Input;
	Input* y = new Input;

	AND* gate1 = new AND;

	Output* o = new Output;


	x->set_output(1);
	y->set_output(1);

	gate1->set_linkage(x,y);

	o->set_linkage(gate1);

	result = o->get_output();

	std::cout << result << std::endl;



	delete x;
	delete y;
	delete gate1;
	delete o;
}