#include <iostream>
<<<<<<< HEAD

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

=======

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
#include <cmath>
#include <cstring>
using namespace std;

>>>>>>> FETCH_HEAD
int main() {
    
	//bool result;
    
<<<<<<< HEAD
	Input* x = new Input;
	Input* y = new Input;
    
	AND* gate1 = new AND;
    
	Output* o = new Output;
=======
	//Input* x = new Input;
	//Input* y = new Input;
    
	
    
	
>>>>>>> FETCH_HEAD
    
	/*
     x->set_output(1);
     y->set_output(1);
<<<<<<< HEAD
     
     gate1->set_linkage(x,y);
     
     o->set_linkage(gate1);
     
     result = o->get_output();
     
     std::cout << result << std::endl;
     */
    
    
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
	int result;
	std::cout << "point1" << std::endl;
	x->set_output(1);
	y->set_output(1);
	result = o->get_output();
	//std::cout << o->get_output() << std::endl;
    
	std::cout << result << " result" << std::endl;
    
	/*
=======
     */
    
	//result = o->get_output();
    
	//std::cout << result << std::endl;
    
    
	/*int truthtable[4][3];
     
     truthtable[0][0] = 0;
     truthtable[0][1] = 0;
     truthtable[1][0] = 0;
     truthtable[1][1] = 1;
     truthtable[2][0] = 1;
     truthtable[2][1] = 0;
     truthtable[3][0] = 1;
     truthtable[3][1] = 1;
     
     int count = 0;
     
>>>>>>> FETCH_HEAD
     for(int i=0;i<=1;i++){
     for(int j=0;j<=1;j++){
     x->set_output(i);
     y->set_output(j);
     
<<<<<<< HEAD
     std::cout << i << j << "inside" << std::endl;
     
     
     if (o->get_output()){
     result = 1;
     }
     else result = 0;
     
     truthtable[count][2] = result;
     count++;
     
     std::cout << "after" << std::endl;
     }
     }
     */
    
    
	std::cout << "point2" << std::endl;
    
	for(int k=0;k<4;k++){
		for (int l=0;l<3;l++){
			std::cout << truthtable[k][l];
		}
		std::cout << std::endl;
	}
    
    
    
	delete x;
	delete y;
	delete gate1;
	delete o;
=======
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
     
     
     
     delete x;
     delete y;
     delete gate1;
     delete o;
     
     
     */
    
    //test#2:
    Input* a = new Input;
    Input* b = new Input;
    Input* c = new Input;
    Input* d = new Input;
    Input* e = new Input;
    Input* f = new Input;
    Input* g = new Input;
    
    OR* gate1 = new OR;
    AND* gate2 = new AND;
    gate2->set_linkage(gate1,c);
    gate1->set_linkage(a,b);
    Output* o = new Output;
    o->set_linkage(gate2);
    
    int count = 0;
    int amount = 3;
    
    const int row = pow(2,amount);
    const int column = amount+1;
    int truthtable[row][column];
    
    count = 0;
    int temp = 0;
    for (int i=0;i<row;i++)
    {
        temp = count;
        for (int j=0;j<(column-1);j++)
        {
            truthtable[i][(column-2)-j] = temp%2;
            temp = temp/2;
        }
        count++;
    }
    
    if (amount == 0)
    {
        return 0;
    }
    
    count = 0;
    if (amount == 1)
    {
        for( int i=0;i<2;i++)
        {
            
            a->set_output(i);
            
            truthtable[count][column-1] = o->get_output();
            count++;
        }
    }
    
    count = 0;
    if (amount == 2)
    {
        for (int i=0;i<=1;i++)
        {
            for (int j=0;j<=1;j++)
            {
                a->set_output(i);
                b->set_output(j);
                
                truthtable[count][(column-1)] = o->get_output();
                count++;
            }
        }
    }
    
    count = 0;
    if(amount == 3)
    {
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                for(int k=0;k<=1;k++)
                {
                    a->set_output(i);
                    b->set_output(j);
                    c->set_output(k);
                    
                    truthtable[count][(column-1)] = o->get_output();
                    count++;
                }
                
            }
        }
    }
    
    count = 0;
    if(amount == 4)
    {
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                for(int k=0;k<=1;k++)
                {
                    for (int m=0;m<=1;m++)
                    {
                        a->set_output(i);
                        b->set_output(j);
                        c->set_output(k);
                        d->set_output(m);
                        
                        truthtable[count][column-1] = o->get_output();
                        count++;
                    }
                }
            }
        }
        
    }
    
    count = 0;
    if(amount == 5)
    {
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                for(int k=0;k<=1;k++)
                {
                    for (int m=0;m<=1;m++)
                    {
                        for(int n=0;n<=1;n++)
                        {
                            a->set_output(i);
                            b->set_output(j);
                            c->set_output(k);
                            d->set_output(m);
                            e->set_output(n);
                            
                            truthtable[count][column-1] = o->get_output();
                            count++;
                        }
                    }
                }
            }
        }
    }
    
    count = 0;
    if(amount == 6)
    {
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                for(int k=0;k<=1;k++)
                {
                    for (int m=0;m<=1;m++)
                    {
                        for(int n=0;n<=1;n++)
                        {
                            for(int p=0;p<=1;p++)
                            {
                                a->set_output(i);
                                b->set_output(j);
                                c->set_output(k);
                                d->set_output(m);
                                e->set_output(n);
                                f->set_output(p);
                                
                                truthtable[count][column-1] = o->get_output();
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    
    count = 0;
    if(amount == 7)
    {
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                for(int k=0;k<=1;k++)
                {
                    for (int m=0;m<=1;m++)
                    {
                        for(int n=0;n<=1;n++)
                        {
                            for(int p=0;p<=1;p++)
                            {
                                for(int q=0;q<=1;q++)
                                {
                                    a->set_output(i);
                                    b->set_output(j);
                                    c->set_output(k);
                                    d->set_output(m);
                                    e->set_output(n);
                                    f->set_output(p);
                                    g->set_output(q);
                                    
                                    truthtable[count][column-1] = o->get_output();
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    string poop;
    strcat(poop,"space complexity: ");
    
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            
            poop.push_back(truthtable[i][j]+'0');
        }
        poop.push_back('\n');
        
    }
    cout << poop;

    
    
    
    return 0;
>>>>>>> FETCH_HEAD
}

