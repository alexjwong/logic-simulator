#include "mainwindow.h"
#include <QApplication>

#include <iostream>

#include "mainwindow.h"
#include <QApplication>

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

int main(int argc, char *argv[]) {

    //bool result;

    Input* x = new Input;
    Input* y = new Input;

    OR* gate1 = new OR;

    Output* o = new Output;

    /*
    x->set_output(1);
    y->set_output(1);
    */

    gate1->set_linkage(x,y);

    o->set_linkage(gate1);

    //result = o->get_output();

    //std::cout << result << std::endl;


    int truthtable[4][3];

    truthtable[0][0] = 0;
    truthtable[0][1] = 0;
    truthtable[1][0] = 0;
    truthtable[1][1] = 1;
    truthtable[2][0] = 1;
    truthtable[2][1] = 0;
    truthtable[3][0] = 1;
    truthtable[3][1] = 1;

    int count = 0;

    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            x->set_output(i);
            y->set_output(j);

            truthtable[count][2] = o->get_output();
            count++;

        }
    }

    for(int k=0;k<4;k++){
        for (int l=0;l<3;l++){
            std::cout << truthtable[k][l];
        }
        std::cout << std::endl;
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

    delete x;
    delete y;
    delete gate1;
    delete o;
}
