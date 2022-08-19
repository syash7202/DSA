/*
    Input array is {1,2,3,4,5,6,7,8,9} print this array in wave form, i.e 147852369.

*/



#include<iostream>
using namespace std;

void spiralPrint(int array[][3], int row, int col)
{
    int count = 0;
    int total = row*col;

    // intitalising indexes 
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;


    while (count<total)
    {
        for (int index = startingCol; count<total && index <= endingCol; index++)  // 0,0 to 0,m
        {
            cout<<array[startingRow][index]<<" ";
            count++;
        }

        startingRow++;

        for (int index = startingRow; count<total && index <= endingRow; index++)  // 1,m to n,m
        {
            cout<<array[index][endingCol]<<" ";
            count++;
        }
        
        endingCol--;

        for (int index = endingCol; count<total && index >= startingCol; index--)  // n-1,m to n,0
        {
            cout<<array[endingRow][index]<<" ";
            count++;
        }
        
        endingRow--;

        for (int index = endingRow; count<total && index >= startingRow; index--)  // n-1,0 to 1,0
        {
            cout<<array[index][startingCol]<<" ";
            count++;
        }

        startingCol++;
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
    spiralPrint(array,row,col);
    cout<<endl;

    
    

    return 0;
}