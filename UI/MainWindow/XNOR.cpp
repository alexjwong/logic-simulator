#include "XNOR.h"


XNOR::XNOR() : Gate(){
    setToolTip("XNOR");
	std::cout << "XNOR gate constructed" << std::endl;
}

void XNOR::set_linkage(Gate* g1, Gate* g2){
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

void XNOR::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(!this->isSelected()){
        painter->fillRect(this->boundingRect(),Qt::yellow);
    }
    else{
        painter->drawRect(this->boundingRect());
    }
}

bool XNOR::get_output(){
    return !(input1->get_output() ^ input2->get_output());
}
//HOLY CRAP BATMAN
