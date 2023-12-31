#include <bits/stdc++.h>
using namespace std;

//without recursion

int fibWithoutRecursion(int n){
    if(n==0 || n==1){
        return n;
    }
    int a=0,b=1,ans;
    for (int i = 1; i < n; i++)
    {
        ans = a+b;
        a=b;
        b=ans;
    }
    return ans;
    
}


//using recursion 
int fib(int n) {

    if(n ==0 ){
        return 0;
    }

    if(n ==1 ){
        return 1;
    }

    else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int n;

    cout<<"Enter n : ";
    cin>>n;
    cout<<endl<<fib(n)<<endl;
    cout<<endl<<fibWithoutRecursion(n)<<endl;
    return 0;
}