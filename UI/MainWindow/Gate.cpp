#include "Gate.h"

QList<Gate*>* gates = new QList<Gate*>;

Gate::Gate(){
    std::cout << "Gate constructed." << std::endl;
}

Gate::~Gate(){
    std::cout << "Gate destructed." << std::endl;
}
void Gate::set_linkage(Gate* g1){}
void Gate::set_linkage(Gate* g1, Gate* g2){}
bool Gate::get_output(){
    return true;
}
QRectF Gate::boundingRect() const{
    return QRectF(this->pos(),QSizeF(width,height));
}
void Gate::setRect(QPoint in, int newwidth, int newheight){
    this->setPos(in);
    width=newwidth;
    height=newheight;
}
void Gate::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(this->isSelected()){
        painter->fillRect(this->boundingRect(),Qt::black);
    }
    else{
        painter->drawRect(this->boundingRect());
    }
}

void Gate::mousePressEvent(QGraphicsSceneMouseEvent *in){
    if(in->button()==0x00000002){
        if(this->scene()->selectedItems().isEmpty()){
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
                        this->set_linkage(gates->at(i));
                    }
                }
            }
            while(!this->scene()->selectedItems().isEmpty()){
                    this->scene()->selectedItems().first()->setSelected(false);
            }
        }
        else{
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
                std::cout<<gates->indexOf(this)<<std::endl;
                if(this->scene()->selectedItems().length()==2){
                    for(int k=0; k<(gates->size()); k++){
                        if(gates->at(k)->isSelected()){
                            for(int j=k+1; j<(gates->size()); j++){
                                if(gates->at(j)->isSelected()){
                                    this->set_linkage(gates->at(k),gates->at(j));
                                };
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
