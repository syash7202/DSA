#include<iostream>
using namespace std;

bool isPresent(int array[][5], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if (array[row][col]==target)
           {
            
            return 1;
           }
           
        }
        
    }
    return 0;
}


int main()
{
    int col=5,row=5;
    int array[5][5];
    int target = 0;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j]=rand()%10;
        }
        
    }
    
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<array[i][j]<<" ";
        }

        cout<<endl;        
    }

    if (isPresent(array,target,row,col))
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;

    }
    
    return 0;
}