#ifndef NOR_H
#define NOR_H

#include "Gate.h"

class Gate;

class NOR: public Gate{
	public:
		NOR();

		void set_linkage(Gate* g1, Gate* g2);
		bool get_output();
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

	private:
		Gate* input1;
		Gate* input2;
};

#endif
