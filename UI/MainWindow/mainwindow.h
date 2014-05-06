#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsSceneDragDropEvent>

#include "Gate.h"
#include "Input.h"
#include "Output.h"

#include "AND.h"
#include "NAND.h"
#include "NOR.h"
#include "NOT.h"
#include "OR.h"
#include "XNOR.h"
#include "XOR.h"
#include <qline.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void mousePressEvent(QMouseEvent *);
    //void dragEnterEvent(QGraphicsSceneDragDropEvent *event);

private:
    Ui::MainWindow *ui;

    Input *defaultInput=new Input;
    Output *defaultOutput=new Output;
    AND *defaultAND = new AND;
    NAND *defaultNAND= new NAND;
    OR *defaultOR=new OR;
    NOR *defaultNOR=new NOR;
    XOR *defaultXOR=new XOR;
    XNOR *defaultXNOR= new XNOR;
    NOT *defaultNOT=new NOT;

public slots:
    //clear();
};

#endif // MAINWINDOW_H
