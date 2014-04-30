#include "truthtable.h"
#include <cmath>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount of raw inputs: " << endl;
    cin >> amount;
    
    int row = pow(2,amount);
    int column = amount;
    
    /*initializes the matrix
    vector<vector<int> > matrix(row);
    for ( int i = 0 ; i < column ; i++ ){
        matrix[i].resize(column);
    }
    */
    
    int truthtable[128][7];
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
            truthtable[i][(column-1)-j] = temp%2;
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
    
    return 0;
    
}
