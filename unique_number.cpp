// To find the unique number prsent in an array 
/*
Give condition is size of array is -> 2m+1    (which is always odd bcoz every number will be present two times and only a single number is prsent one time which is unique number)

Approach : Xor with the number itself gives 0 and Xor of any number with the 0 is number itself.


*/
#include<iostream>
using namespace std;




int main()
{
    int size=9,ans=0;
    int array[size]={1,1,2,6,8,2,4,4,8};

    for(int i=0; i<size ; i++)
    {
        ans=ans^array[i];
    }

    cout<<ans<<endl;
    return 0;
}