/*
    Input array is {1,2,3,4,5,6,7,8,9} print this array in wave form, i.e 147852369.

*/



#include<iostream>
using namespace std;

void wavePrint(int array[][3], int nrow, int mcol)
{
   for (int col = 0; col < mcol; col++)
   {
    if (col & 1)
    {
        //odd index -> bottom to up

        for (int row = nrow-1; row >= 0; row--)
        {
            cout<<array[row][col]<<" ";
        }
        
    }

    else
    {
        // even index -> up to bottom
        for (int row = 0; row < nrow; row++)
        {
            cout<<array[row][col]<<" ";
        }
        
    }
   }
}

void printArray(int array[][3], int row , int col)
{
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<array[i][j]<<" ";
        }

        cout<<endl;        
    }
}

int main()
{

    int col=3,row=3;
    int array[3][3];
    int target = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j]=rand()%10;
        }
        
    }

    printArray(array,row,col);
    cout<<endl;
    wavePrint(array,row,col);
    cout<<endl;

    
    

    return 0;
}