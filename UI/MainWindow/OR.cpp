#include "OR.h"


OR::OR() : Gate(){
    setToolTip("OR");
	std::cout << "OR gate constructed" << std::endl;
}

void OR::set_linkage(Gate* g1, Gate* g2){
    std::cout<<"linked"<<std::endl;
	input1 = g1;
	input2 = g2;

    if (g2->tier >= g1->tier){
        tier = g2->tier+1;
	}
	else {
        tier = g1->tier+1;
	}
}

void OR::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(!this->isSelected()){
        painter->fillRect(this->boundingRect(),Qt::magenta);
    }
    else{
        painter->drawRect(this->boundingRect());
    }
}

bool OR::get_output(){
	return (input1->get_output() | input2->get_output());
}
