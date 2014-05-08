#include "Input.h"

int Input::num_inputs = 0;

Input::Input() : Gate('i') {
	num_inputs++;
	std::cout << "Raw input default constructed." << std::endl;
}

Input::Input(bool in) : Gate('i') {
	output = in;
	num_inputs++;
	std::cout << "Raw input constructed." << std::endl;
}

void Input::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(!this->isSelected()){
        painter->fillRect(this->boundingRect(),Qt::gray);
    }
    else{
        painter->drawRect(this->boundingRect());
    }
}

void Input::set_output(int in){
	if (in == 0){
		output = false;
	}
	else if (in == 1){
		output = true;
	}
	else
		std::cout << "Something has gone terribly wrong." << std::endl;
}

bool Input::get_output(){
	return output;
}
