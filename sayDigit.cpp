#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[]){

    // base case 
    if(n ==0){
        return ;
    }

    // updating  number
    int digit = n%10;
    n/=10;

    //recursive call
    sayDigit(n,arr);

    cout<<arr[digit]<<" "; 
}

int main(){
    int n;
    string arr[10] = {"zero","one","two","three","four", "five","six","seven","eight","nine"};

    cout<<"Enter Number : ";
    cin>>n;

    cout<<endl;
    sayDigit(n, arr);
    cout<<endl;
    return 0;
}