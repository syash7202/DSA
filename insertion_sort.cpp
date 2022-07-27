#include<iostream>
using namespace std;


void insertionSort(int array[], int size)
{
   int i, temp, j; 
    for (i = 1; i < size; i++)
    { 
        temp = array[i]; 
        j = i - 1;
        while (j >= 0 && array[j] > temp)
        { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = temp; 
    } 
    
}

void printArray(int array[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;
}

int main()
{

    int size;
    cin>>size;

    int array[size];
    for(int i =0; i<size; i++)
    {
        array[i]=rand()%10;
    }

    printArray(array, size);
    insertionSort(array,size);
    printArray(array, size);

    return 0;
}