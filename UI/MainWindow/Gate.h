#ifndef GATE_H
#define GATE_H

#include <iostream>
#include <QGraphicsObject>

class Gate:QGraphicsRectItem{
	public:
        Gate();
		virtual ~Gate();
		
        virtual bool get_output();
};

#endif
