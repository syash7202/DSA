#include<iostream>
using namespace std;

void printArray(int array[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;
}

int partition( int* arr, int start, int end){
    int pivot = arr[start];
    int count = 0;

    for (int i = start+1; i <= end; i++)
    {
        if (arr[i]<pivot)
        {
            count++;
        }
    }

    int pivotIndex = start + count;

    swap(arr[pivotIndex],arr[start]);

    int i =start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i],arr[j]);
        }
        
        
    }
    
    return pivotIndex;
    
}

void quickSort (int* arr, int start, int end){

    //base case 
    if(start>=end){
        return;
    }

    // partition call
    int p = partition(arr, start, end);

    // recursive call 
    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);

}

int main() {
    int arr[9]= {9,8,7,6,5,4,3,2,1};
    int start = 0;
    int end = (sizeof(arr) / sizeof(arr[0])) ;
    // cout<<end<<endl;

    quickSort(arr, start, end);

    printArray(arr, end);

    return 0;

}