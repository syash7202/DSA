#include<iostream>
using namespace std;


void merge( int array[], int start, int end){

    int mid = (start + end)/2;

    int len1 = mid - start +1;
    int len2 = end - mid;

    int first[len1];
    int second[len2];

    // copy values 
    int mainArrayindex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i]= array[mainArrayindex++];
    }

    mainArrayindex = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i]= array[mainArrayindex++];
    }

    // merge sorted arrays
    int index1=0 , index2 =0;
    mainArrayindex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1]<second[index2])
        {
           array[mainArrayindex++]= first[index1++];
        }
        else{
            array[mainArrayindex++] = second[index2++];
        }
    }

    while (index1<len1)
    {
        array[mainArrayindex++]= first[index1++];
    }
    while (index2<len2)
    {
        array[mainArrayindex++]= second[index2++];
    }
    
}

void mergeSort(int array[], int start, int end ){

    int mid = (start + end)/2;
    // base case
    if(start>=end){
        return;
    }

    // left side array sort
    mergeSort(array, start, mid);

    // left side array sort
    mergeSort(array, mid+1, end );


    merge(array, start, end);
}

void printArray(int array[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;
}

int main() {
    int array[5]= {2,5,1,6,9};
    int size = 5;
    int start = 0;

    mergeSort(array, start, size-1);
    printArray(array,size);

}