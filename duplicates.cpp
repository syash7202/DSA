/*
    In the given array elements arefrom 1 to n-1 and only one element is present twice return that element which is present twice.

    solution:

    Xor of all the elements and then xor it with 1 to n-1.



*/

#include<iostream>
using namespace std;


int main()
{
    int array[10]={1,2,3,5,5,6,7,8,9,4};
    int ans=0;
    for (int i = 0; i < 10; i++)
    {
        ans=ans^array[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        ans=ans^i;
    }

    cout<<ans<<endl;

    return 0;
    
}