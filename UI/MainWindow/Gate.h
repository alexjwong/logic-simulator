#ifndef GATE_H
#define GATE_H

#include <qlist.h>
#include <iostream>
#include <QGraphicsObject>
#include <qpainter.h>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>

class Gate: public QGraphicsObject{
public:
    bool oneLink;
    bool makeLinkages=false;
    int width;
    int height;
    void setRect(QPoint in, int newwidth, int newheight);
    Gate();
    virtual ~Gate();
    virtual bool get_output();
    virtual void set_linkage(Gate* g);
    virtual void set_linkage(Gate* g1, Gate* g2);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
    void mousePressEvent(QGraphicsSceneMouseEvent *in);
};



#endif
