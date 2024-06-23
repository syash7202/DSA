#include<iostream>
using namespace std;


int fib(int num){

    if (num==1)
    {
        return 0;
    }
    
    if (num == 2)
    {
        return 1;
    }
    // cout<<fib(num - 1) + fib(num - 2)<<endl;
    return fib(num - 1) + fib(num - 2);
    
}

int main() {
int num;

    cout<<"Enter the index number: ";
    cin>>num;

    cout<<fib(num)<<endl;

    return 0;
}