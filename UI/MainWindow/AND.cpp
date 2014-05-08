#include "AND.h"

AND::AND() : Gate(){
    setToolTip("AND");
	std::cout << "AND gate constructed" << std::endl;
}
//void AND::set_output(int in){}
void AND::set_linkage(Gate* g1, Gate* g2){
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

void AND::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(!this->isSelected()){
        painter->fillRect(this->boundingRect(),Qt::blue);
    }
    else{
        painter->drawRect(this->boundingRect());
    }
}

bool AND::get_output(){
	return (input1->get_output() & input2->get_output());
}
