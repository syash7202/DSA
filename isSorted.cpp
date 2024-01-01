#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){

    if(size ==0 || size==1){
        return true;
    }
    
    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool ans = isSorted(arr+1,size -1);
        return ans;
    }
    

}


int main() {
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i]=rand()%10;
    }

    cout<< isSorted(arr,10)<<endl;
    
    return 0;
}