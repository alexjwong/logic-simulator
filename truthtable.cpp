#include "truthtable.h"
#include <cmath>
using namespace std;

int main()
{
    amount = num_inputs;
    
    int row = pow(2,amount);
    int column = amount+1;
    
    int truthtable[128][8];
    for (int i=0;i<128;i++)
    {
        for (int j=0;j<7;j++)
        {
            truthtable[i][j] = 0;
        }
    }
    
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            //cout << truthtable[i][j];
        }
        //cout << endl;
    }
    
    int count = 0;
    int temp = 0;
    for (int i=0;i<row;i++)
    {
        temp = count;
        for (int j=0;j<column;j++)
        {
            truthtable[i][(column-2)-j] = temp%2;
            temp = temp/2;
        }
        count++;
    }
    
    
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            cout << truthtable[i][j];
        }
        cout << endl;
    }
    
    
   if (amount == 0)
    {
        return 0;
    }
    
    if (amount == 1)
    {
        input[0]->set_output(0);
        input[1]->set_output(1);
        
        output[0]->get_output();
    }
    
    if (amount == 2)
    {
        for (int a=0;a==1;a++)
        {
            for (int b=0;b==1;b++)
            {
                input[0]->set_output(a);
                input[1]->set_output(b);
            }
        }
        output[0]->get_output();
        output[1]->get_output();
    }
    
    if(amount == 3)
    {
        for(int a=0;a==1;a++)
        {
            for(int b=0;b==1;b++)
            {
                for(int c=0;c==1;c++)
                input[0]->set_output(a);
                input[1]->set_output(b);
                input[2]->set_output(c);
                
            }
        }
        output[0]->get_output();
        output[1]->get_output();
        output[2]->get_output();
    }
    
    if(amount == 4)
    {
        for(int a=0;a==1;a++)
        {
            for(int b=0;b==1;b++)
            {
                for(int c=0;c==1;c++)
                {
                    for (int d=0;d==1;d++)
                    {
                        input[0]->set_output(a);
                        input[1]->set_output(b);
                        input[2]->set_output(c);
                        input[3]->set_output(d);
                    }
                }
            }
        }
        output[0]->get_output();
        output[1]->get_output();
        output[2]->get_output();
        output[3]->get_output();
    }
    
    if(amount == 5)
    {
        for(int a=0;a==1;a++)
        {
            for(int b=0;b==1;b++)
            {
                for(int c=0;c==1;c++)
                {
                    for (int d=0;d==1;d++)
                    {
                        for(int e=0;e==1;e++)
                        {
                            input[0]->set_output(a);
                            input[1]->set_output(b);
                            input[2]->set_output(c);
                            input[3]->set_output(d);
                            input[4]->set_output(e);
                        }
                    }
                }
            }
        }
        output[0]->get_output();
        output[1]->get_output();
        output[2]->get_output();
        output[3]->get_output();
        output[4]->get_output();
    }
    
    if(amount == 6)
    {
        for(int a=0;a==1;a++)
        {
            for(int b=0;b==1;b++)
            {
                for(int c=0;c==1;c++)
                {
                    for (int d=0;d==1;d++)
                    {
                        for(int e=0;e==1;e++)
                        {
                            for(int f=0;f==1;f++)
                            {
                                input[0]->set_output(a);
                                input[1]->set_output(b);
                                input[2]->set_output(c);
                                input[3]->set_output(d);
                                input[4]->set_output(e);
                                input[5]->set_output(f);
                            }
                        }
                    }
                }
            }
        }
        output[0]->get_output();
        output[1]->get_output();
        output[2]->get_output();
        output[3]->get_output();
        output[4]->get_output();
        output[5]->get_output();
    }
    
    if(amount == 7)
    {
        for(int a=0;a==1;a++)
        {
            for(int b=0;b==1;b++)
            {
                for(int c=0;c==1;c++)
                {
                    for (int d=0;d==1;d++)
                    {
                        for(int e=0;e==1;e++)
                        {
                            for(int f=0;f==1;f++)
                            {
                                for(int g=0;g==1;g++)
                                {
                                    input[0]->set_output(a);
                                    input[1]->set_output(b);
                                    input[2]->set_output(c);
                                    input[3]->set_output(d);
                                    input[4]->set_output(e);
                                    input[5]->set_output(f);
                                }
                            }
                        }
                    }
                }
            }
        }
        output[0]->get_output();
        output[1]->get_output();
        output[2]->get_output();
        output[3]->get_output();
        output[4]->get_output();
        output[5]->get_output();
        output[6]->get_output();
    }

    for (int i=0;i<amount;i++)
    {
        truthtable[i][(column-1)] = output[i]->get_output();
    }


    
    return 0;
    
}
