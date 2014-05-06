#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gates.h"
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->textEdit->setReadOnly(true);
    ui->textEdit->insertPlainText("");
    gates->append(defaultInput);
    defaultInput->setRect(QPoint(0,0),30,30);
    defaultInput->setFlag(defaultInput->ItemIsSelectable,true);
    gates->append(defaultOutput);
    defaultOutput->setRect(QPoint(0,25),30,30);
    defaultOutput->setFlag(defaultOutput->ItemIsSelectable,true);
    gates->append(defaultAND);
    defaultAND->setRect(QPoint(0,50),60,30);
    defaultAND->setFlag(defaultAND->ItemIsSelectable,true);
    gates->append(defaultNAND);
    defaultNAND->setRect(QPoint(0,75),60,30);
    defaultNAND->setFlag(defaultNAND->ItemIsSelectable,true);
    gates->append(defaultOR);
    defaultOR->setRect(QPoint(0,100),60,30);
    defaultOR->setFlag(defaultOR->ItemIsSelectable,true);
    gates->append(defaultNOR);
    defaultNOR->setRect(QPoint(0,125),60,30);
    defaultNOR->setFlag(defaultNOR->ItemIsSelectable,true);
    gates->append(defaultXOR);
    defaultXOR->setRect(QPoint(0,150),60,30);
    defaultXOR->setFlag(defaultXOR->ItemIsSelectable,true);
    gates->append(defaultXNOR);
    defaultXNOR->setRect(QPoint(0,175),60,30);
    defaultXNOR->setFlag(defaultXNOR->ItemIsSelectable,true);
    gates->append(defaultNOT);
    defaultNOT->setRect(QPoint(0,200),60,30);
    defaultNOT->setFlag(defaultNOT->ItemIsSelectable,true);

    ui->IOGates->setScene(new QGraphicsScene);
    ui->IOGates->scene()->addItem(defaultInput);
    ui->IOGates->scene()->addItem(defaultOutput);
    ui->IOGates->scene()->addItem(defaultAND);
    ui->IOGates->scene()->addItem(defaultNAND);
    ui->IOGates->scene()->addItem(defaultOR);
    ui->IOGates->scene()->addItem(defaultNOR);
    ui->IOGates->scene()->addItem(defaultXOR);
    ui->IOGates->scene()->addItem(defaultXNOR);
    ui->IOGates->scene()->addItem(defaultNOT);

    ui->graphicsView_3->setScene(new QGraphicsScene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *in){
    QPainter painter;
    if(in->buttons()==0x00000002){
        if(defaultInput->isSelected()){
            gates->append(new Input);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),30,30);
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
       if(defaultOutput->isSelected()){
            gates->append(new Output);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),30,30);
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
        else if(defaultAND->isSelected()){
            gates->append(new AND);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),60,30);
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
        else if(defaultNAND->isSelected()){
            gates->append(new NAND);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),60,30);
            std::cout << gates->indexOf(gates->last()) << std::endl;
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
        else if(defaultOR->isSelected()){
            gates->append(new OR);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),60,30);
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
        else if(defaultNOR->isSelected()){
            gates->append(new NOR);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),60,30);
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
        else if(defaultXOR->isSelected()){
            gates->append(new XOR);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),60,30);
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
        else if(defaultXNOR->isSelected()){
            gates->append(new XNOR);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),60,30);
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
        else if(defaultNOT->isSelected()){
            gates->append(new NOT);
            gates->last()->setFlag(gates->last()->ItemIsMovable,true);
            gates->last()->setFlag(gates->last()->ItemIsSelectable,true);
            gates->last()->setRect(in->pos(),60,30);
            ui->graphicsView_3->scene()->addItem(gates->last());
        }
    }
    std::cout<<gates<<std::endl;
}
