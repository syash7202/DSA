/*

GIven an sorted array, find out the first and last occurences of any given element. Element in array may repeate.

*/ 

#include<iostream>
using namespace std;

int firstOcc(int array[], int size, int key)
{
    int start=0, end = size -1, ans =-1;
    int mid= start+((end-start)/2);

        while (start<= end)
    {
        if(array[mid]==key)
        {
            ans= mid;
            end=mid-1;
        }

        else if(key>array[mid])
        {
            start= mid+1;
        }

        else if (key<array[mid])
        {
            end=mid-1;
        }
         mid =start + ((end-start)/2);
    }
    
    return ans;
}

int lastOcc(int array[], int size, int key)
{
    int start=0, end = size -1, ans =-1;
    int mid= start+((end-start)/2);

        while (start<= end)
    {
        if(array[mid]==key)
        {
            ans= mid;
            start=mid+1;
        }

        else if(key>array[mid])
        {
            start= mid+1;
        }

        else if (key<array[mid])
        {
            end=mid-1;
        }
        mid =start + ((end-start)/2);
    }
    
    return ans;
}

int main()
{
    int even[10]= {0,0,1,2,2,5,5,5,7,8};
    cout<<firstOcc(even,10,2)<<endl;
    cout<<lastOcc(even,10,2)<<endl;

    return 0;
}