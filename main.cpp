#include <iostream>
#include <string>

#include "gate.h"
#include "and.h"

int main() {

	std::string input;
	std::cin >> input;

	if (input == "and"){
		AND();
	}
}