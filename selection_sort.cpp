#include<iostream>
using namespace std;

void selectionSort(int array[], int size){

    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < size; j++)
        {
            if (array[j]<array[minIndex])
            {
                minIndex=j;
            }
            
            swap(array[minIndex],array[i]);
        }   
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
    selectionSort(array,size);
    printArray(array, size);

    return 0;
}