#include<iostream>
using namespace std;


void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size -1; i++)  // t.C -> O(n^2)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
             if (array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
                swapped = true;
            }
        }
        if (swapped = false)  // already sorted, so T.C -> O(n)
        {
            break;
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
    bubbleSort(array,size);
    printArray(array, size);

    return 0;
}