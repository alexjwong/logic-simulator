#include <iostream>
#include <cmath>
#include <cstring>
#include <sstream>

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

using namespace std;

string generate_truthtable(QList gates) {
    Gate * input_ptrs[7];
    Gate * output_ptrs[7];
    int num_inputs = 0;
    int num_outputs = 0;

    for (int i=0;i<gates.size();i++){
        if (gates.at(i).type() == 'i'){
            input_ptrs[num_inputs] = gates.at(i);
            num_inputs++;
        }
        else if (gates.at(i).type() == 'o'){
            output_ptrs[num_outputs] = gates.at(i);
            num_outputs++;
        }
    }
       
    int inamount = num_inputs;
    int outamount = num_outputs;
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
    
    
    /*  Prints the truthtable
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
