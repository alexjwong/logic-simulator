#include <iostream>

#include "gate.h"
#include "Input.h"
#include "output.h"

#include "and.h"
#include "nand.h"
#include "nor.h"
#include "not.h"
#include "or.h"
#include "xnor.h"
#include "xor.h"
#include <cmath>
#include <cstring>
#include <sstream>
using namespace std;

string generate_truthtable() {
    
	//bool result;
    
	//Input* x = new Input;
	//Input* y = new Input;
    
	
    
	
    
	/*
     x->set_output(1);
     y->set_output(1);
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
     
     
     
     delete x;
     delete y;
     delete gate1;
     delete o;
     
     
     */
    
    Input* a = new Input;
    Input* b = new Input;
    Input* c = new Input;
    Input* d = new Input;
    //Input* e = new Input;
    //Input* f = new Input;
    //Input* g = new Input;
    
    ///////////////////////
    ///////TESTING/////////
    ///////////////////////
    OR* gate1 = new OR;
    AND* gate2 = new AND;
    NOR* gate3 = new NOR;
    gate2->set_linkage(gate1,c);
    gate1->set_linkage(a,b);
    gate3->set_linkage(d, gate2);
    Output* o = new Output;
    Output* o2= new Output;
    o->set_linkage(gate2);
    o2->set_linkage(gate3);
    Input * input_ptrs[Input::num_inputs];
    Output * output_ptrs[Output::num_outputs];
    input_ptrs[0]=a;
    input_ptrs[1]=b;
    input_ptrs[2]=c;
    input_ptrs[3]=d;
    output_ptrs[0]=o;
    output_ptrs[1]=o2;
    ///////////////////////
    
    
    int inamount = Input::num_inputs;
    int outamount = Output::num_outputs;
    const int row = pow(2,inamount);
    const int column = inamount + outamount;
    int truthtable[row][column];
    
    int count = 0;
    int temp = 0;
    for (int i=0;i<row;i++)
    {
        temp = count;
        for (int j=0;j<(inamount);j++)
        {
            truthtable[i][(inamount-1)-j] = temp%2;
            temp = temp/2;
        }
        count++;
    }
    
    if (inamount == 0)
    {
        return 0;
    }
    
    count = 0;
    if (inamount == 1)
    {
        for( int i=0;i<=1;i++)
        {
            input_ptrs[0]->set_output(i);
            for (int z=0;z<outamount;z++)
            {
                bool tempout = output_ptrs[(outamount-1)-z]->get_output();
                truthtable[count][(column-1)-z]= tempout;
            }
            count++;
        }
    }
    
    count = 0;
    if (inamount == 2)
    {
        for (int i=0;i<=1;i++)
        {
            for (int j=0;j<=1;j++)
            {
                input_ptrs[0]->set_output(i);
                input_ptrs[1]->set_output(j);
                for (int z=0;z<outamount;z++)
                {
                    bool tempout = output_ptrs[(outamount-1)-z]->get_output();
                    truthtable[count][(column-1)-z]= tempout;
                }
                count++;
            }
        }
    }
    
    count = 0;
    if(inamount == 3)
    {
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                for(int k=0;k<=1;k++)
                {
                    input_ptrs[0]->set_output(i);
                    input_ptrs[1]->set_output(j);
                    input_ptrs[2]->set_output(k);
                    for (int z=0;z<outamount;z++)
                    {
                        bool tempout = output_ptrs[(outamount-1)-z]->get_output();
                        truthtable[count][(column-1)-z]= tempout;
                    }
                    count++;
                }
            }
        }
    }
    
    
    count = 0;
    if(inamount == 4)
    {
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                for(int k=0;k<=1;k++)
                {
                    for (int m=0;m<=1;m++)
                    {
                        input_ptrs[0]->set_output(i);
                        input_ptrs[1]->set_output(j);
                        input_ptrs[2]->set_output(k);
                        input_ptrs[3]->set_output(m);
                        for (int z=0;z<outamount;z++)
                        {
                            bool tempout = output_ptrs[(outamount-1)-z]->get_output();
                            truthtable[count][(column-1)-z]= tempout;
                        }
                        count++;
                    }
                }
            }
        }
    }
    
    count = 0;
    if(inamount == 5)
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
                            input_ptrs[0]->set_output(i);
                            input_ptrs[1]->set_output(j);
                            input_ptrs[2]->set_output(k);
                            input_ptrs[3]->set_output(m);
                            input_ptrs[4]->set_output(n);
                            for (int z=0;z<outamount;z++)
                            {
                                bool tempout = output_ptrs[(outamount-1)-z]->get_output();
                                truthtable[count][(column-1)-z]= tempout;
                            }
                            count++;
                        }
                    }
                }
            }
        }
    }
    
    count = 0;
    if(inamount == 6)
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
                                input_ptrs[0]->set_output(i);
                                input_ptrs[1]->set_output(j);
                                input_ptrs[2]->set_output(k);
                                input_ptrs[3]->set_output(m);
                                input_ptrs[4]->set_output(n);
                                input_ptrs[5]->set_output(p);
                                for (int z=0;z<outamount;z++)
                                {
                                    bool tempout = output_ptrs[(outamount-1)-z]->get_output();
                                    truthtable[count][(column-1)-z]= tempout;
                                }
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    
    count = 0;
    if(inamount == 7)
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
                                    input_ptrs[0]->set_output(i);
                                    input_ptrs[1]->set_output(j);
                                    input_ptrs[2]->set_output(k);
                                    input_ptrs[3]->set_output(m);
                                    input_ptrs[4]->set_output(n);
                                    input_ptrs[5]->set_output(p);
                                    input_ptrs[6]->set_output(q);
                                    for (int z=0;z<outamount;z++)
                                    {
                                        bool tempout = output_ptrs[(outamount-1)-z]->get_output();
                                        truthtable[count][(column-1)-z]= tempout;
                                    }
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    
    /*
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            cout<<truthtable[i][j];
        }
        cout<<endl;
    }
    
*/
   
    
    string poop;
    /* 
    
    stringstream ss;
    ss<<"Space Complexity: ";
    ss<< ((Gate::gate_count)-(Input::num_inputs)-(Output::num_outputs));
    ss<<"\n";
    */
    
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            poop.push_back(truthtable[i][j]+'0');
        }
        poop.push_back('\n');
        
    }
    //cout<< ss.str();
    return poop;
}
