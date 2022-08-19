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

void rowSum(int array[][5], int row, int col)
{   
    for (int i = 0; i < row; i++)
    {
    int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=array[i][j];
            
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
    rowSum(array,row,col);
    cout<<endl;

    return 0;
}