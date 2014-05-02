#ifndef GATE_H
#define GATE_H

#include <iostream>
#include <QGraphicsObject>

class Gate: public QGraphicsRectItem{
	public:
        Gate();
        virtual ~Gate();
		
        virtual bool get_output();
};

#endif
