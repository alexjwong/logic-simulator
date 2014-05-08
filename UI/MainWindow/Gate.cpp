#include "Gate.h"

QList<Gate*>* gates = new QList<Gate*>;

int Gate::gate_count = 0;

Gate::Gate(){
	std::cout << "Gate constructed." << std::endl;
	tier = 0;
	type = 'g';
	gate_count++;
}

Gate::Gate(char inType){
	std::cout << "Gate constructed." << std::endl;
	tier = 0;
	type = inType;
	gate_count++;
}
void Gate::set_linkage(Gate* g1){
std::cout<<"fuck"<<std::endl;}
void Gate::set_linkage(Gate* g1, Gate* g2){
    std::cout<<"shit"<<std::endl;}
Gate::~Gate(){
	std::cout << "Gate destructed." << std::endl;
	gate_count--;
}

int Gate::get_tier(){
	return tier;
}

void Gate::set_tier(int in){
	tier = in;
}

bool Gate::get_output(){
	return false;
}

char Gate::get_type(){
	return type;
}
QRectF Gate::boundingRect() const{
    return QRectF(this->pos(),QSizeF(width,height));
}
void Gate::setRect(QPoint in, int newwidth, int newheight){
    this->setPos(in);
    width=newwidth;
    height=newheight;
}
void Gate::set_output(int in){}

void Gate::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(!this->isSelected()){
        painter->fillRect(this->boundingRect(),Qt::black);
    }
    else{
        painter->drawRect(this->boundingRect());
    }
}

void Gate::mousePressEvent(QGraphicsSceneMouseEvent *in){
    if(this->isSelected()&&in->button()==0x00000001){
        std::cout<<gates->indexOf(this)<<std::endl;
    }
    if(in->button()==0x00000002){
        if(this->scene()->selectedItems().isEmpty()){
            std::cout<<"fuck"<<std::endl;
            return;
        }
        else if(oneLink){
            for(int i=0; i<gates->size(); i++){
                if(gates->at(i)->isSelected()){
                    if(gates->at(i)->scene()!=this->scene()){
                        gates->at(i)->setSelected(false);
                    }
                }
            }
            if(this->scene()->selectedItems().size()==1){
                for(int i=0; i<(gates->size()); i++){
                    if(gates->at(i)->isSelected()){
                        std::cout<<"fuck me"<<std::endl;
                        this->set_linkage(gates->at(i));
                    }
                }
            }
            while(!this->scene()->selectedItems().isEmpty()){
                    this->scene()->selectedItems().first()->setSelected(false);
            }
        }
        else{
            std::cout<<"fuck twice"<<std::endl;
            if(this->scene()->selectedItems().length()!=2){
                while(!this->scene()->selectedItems().isEmpty()){
                    this->scene()->selectedItems().first()->setSelected(false);
                }
            }
            else{
                for(int i=0; i<gates->size(); i++){
                    if(gates->at(i)->isSelected()){
                        if(gates->at(i)->scene()!=this->scene()){
                            gates->at(i)->setSelected(false);
                        }
                    }
                }
                if(this->scene()->selectedItems().length()==2){
                    for(int k=0; k<(gates->size()); k++){
                        if(gates->at(k)->isSelected()){
                            for(int j=k+1; j<(gates->size()); j++){
                                if(gates->at(j)->isSelected()){
                                    this->set_linkage(gates->at(k),gates->at(j));
                                }
                            }
                        }
                    }
                }
                while(!this->scene()->selectedItems().isEmpty()){
                    this->scene()->selectedItems().first()->setSelected(false);
                }
            }
        }
    }
}
