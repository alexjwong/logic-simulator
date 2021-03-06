#ifndef OR_H
#define OR_H

#include "Gate.h"

class Gate;

class OR: public Gate{
	public:
		OR();

		void set_linkage(Gate* g1, Gate* g2);
		bool get_output();
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

	private:
		Gate* input1;
		Gate* input2;
};

#endif
