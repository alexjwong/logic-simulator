#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyleOptionGraphicsItem>

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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->textEdit->setReadOnly(true);
    ui->textEdit->insertPlainText("");

    ui->graphicsView->setScene(new QGraphicsScene);

    Input *defaultInput=new Input;
    ui->graphicsView->scene()->addItem(defaultInput);
    defaultInput->setRect(0,0,30,30);
    defaultInput->setFlag(defaultInput->ItemIsSelectable,true);
    ui->graphicsView->scene();
    Output *defaultOutput=new Output;
    defaultOutput->setRect(0,60,30,30);
    defaultOutput->setFlag(defaultOutput->ItemIsSelectable,true);
    ui->graphicsView->scene()->addItem(defaultOutput);

    AND *defaultAND = new AND;
    defaultAND->setRect(0,0,60,30);
    defaultAND->setFlag(defaultAND->ItemIsSelectable,true);
    NAND *defaultNAND= new NAND;
    defaultNAND->setRect(0,60,60,30);
    defaultNAND->setFlag(defaultNAND->ItemIsSelectable,true);
    OR *defaultOR=new OR;
    defaultOR->setRect(0,120,60,30);
    defaultOR->setFlag(defaultOR->ItemIsSelectable,true);
    NOR *defaultNOR=new NOR;
    defaultNOR->setRect(0,180,60,30);
    defaultNOR->setFlag(defaultNOR->ItemIsSelectable,true);
    XOR *defaultXOR=new XOR;
    defaultXOR->setRect(0,240,60,30);
    defaultXOR->setFlag(defaultXOR->ItemIsSelectable,true);
    XNOR *defaultXNOR= new XNOR;
    defaultXNOR->setRect(0,300,60,30);
    defaultXNOR->setFlag(defaultXNOR->ItemIsSelectable,true);
    NOT *defaultNOT=new NOT;
    defaultNOT->setRect(0,360,60,30);
    defaultNOT->setFlag(defaultNOT->ItemIsSelectable,true);
    ui->graphicsView_2->setScene(new QGraphicsScene);
    ui->graphicsView_2->scene()->addItem(defaultAND);
    ui->graphicsView_2->scene()->addItem(defaultNAND);
    ui->graphicsView_2->scene()->addItem(defaultOR);
    ui->graphicsView_2->scene()->addItem(defaultNOR);
    ui->graphicsView_2->scene()->addItem(defaultXOR);
    ui->graphicsView_2->scene()->addItem(defaultXNOR);
    ui->graphicsView_2->scene()->addItem(defaultNOT);
}

MainWindow::~MainWindow()
{
    delete ui;
}
