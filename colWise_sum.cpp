#include<iostream>
using namespace std;

void printArray(int array[][5], int row , int col)
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

void colSum(int array[][5], int row, int col)
{   
    for (int i = 0; i < col; i++)
    {
    int sum=0;
        for (int j = 0; j < row; j++)
        {
            sum+=array[j][i];
            
        }
            cout<<sum<<" ";
        
    }
    
}

int main()
{
    int col=5,row=5;
    int array[5][5];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j]=rand()%10;
        }
        
    }
    
    printArray(array,row,col);
    cout<<endl;
    colSum(array,row,col);
    cout<<endl;

    return 0;
}