#include "XOR.h"


XOR::XOR() : Gate(){
    setToolTip("X   OR");
	std::cout << "XOR gate constructed" << std::endl;
}

void XOR::set_linkage(Gate* g1, Gate* g2){
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

void XOR::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(!this->isSelected()){
        painter->fillRect(this->boundingRect(),Qt::darkBlue);
    }
    else{
        painter->drawRect(this->boundingRect());
    }
}

bool XOR::get_output(){
	return (input1->get_output() ^ input2->get_output());
}
