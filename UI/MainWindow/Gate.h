#ifndef GATE_H
#define GATE_H

#include <iostream>
#include <QGraphicsObject>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>

class Gate : public QGraphicsObject{
	public:
        bool oneLink = false;
		Gate();
        Gate(char type);
        int height, width;
		virtual ~Gate();
        virtual void set_linkage(Gate* g1);
        virtual void set_linkage(Gate* g1, Gate* g2);
		int get_tier();
		void set_tier(int);
		virtual bool get_output();
		char get_type();
        virtual void set_output(int in);

		static int gate_count;
        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
        void setRect(QPoint in, int newwidth, int newheight);
        void mousePressEvent(QGraphicsSceneMouseEvent *in);
        int tier;
		char type;
};

#endif
