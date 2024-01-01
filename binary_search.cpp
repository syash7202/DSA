#include<iostream>
using namespace std;

// int binary_search(int array[], int size, int key)
// {
//     int start=0, end=size-1;

//     int mid = start + ((end -start)/2); // because if start & end are 2^31-1 then value of mid will be out of limit of int. therfore we can substract 2 big values. so start + (end - start)/2 -> start + (end/2 - start/2) -> start - start/2 + end/2 -> start/2 + end/2 = (start+end)/2 

//     while (start<= end)
//     {
//         if(array[mid]==key)
//         {
//             return mid;
//         }

//         if(key>array[mid])
//         {
//             start= mid+1;
//         }

//         else 
//         {
//             end=mid-1;
//         }
//          mid =start + ((end-start)/2);
//     }

//     return -1;
    
// }

bool binary_search_Recursive(int array[], int start, int end, int key)
{
    if (start>end)
    {
        return false;
    }

    int mid = start + ((end -start)/2);
    if (array[mid]==key)
    {
        return true;
    }

    if (array[mid]<key)
    {
        return binary_search_Recursive(array,mid+1,end,key);
    }
    else{
        return binary_search_Recursive(array,start,mid-1,key);
    }

}
    


int main()
{
    int even[6] = {1,2,3,4,5,6};
    int odd[7] = {1,2,3,4,6,8,7};


    // int even_index = binary_search(even,6,5);
    // cout<<even_index<<endl;
    // int odd_index= binary_search(odd,7,2);
    // cout<<odd_index<<endl;

    int start=0;
    int even_index = binary_search_Recursive(even,start,5,5);
    cout<<even_index<<endl; // only tell present or not
    int odd_index= binary_search_Recursive(odd,start,6,2);
    cout<<odd_index<<endl; // only tell present or not


    return 0;
}