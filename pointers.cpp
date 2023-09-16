/*
             Timestamp  : 21:07 - Friday  15,Sep 2023   
*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int num1 =10;
    int *p1 = &num1; // pointer declaration way 1

    cout<< "num1 :" << num1 <<endl;
    cout<< "*p1  :" << *p1<<endl;
    cout<< "p1   :" << p1<<endl;

cout<<"----------------------------------------"<<endl;

    int num2 =20;
    int *p2 = 0; // pointer declaration way 2 (pointing null now)
    p2 = &num2; // value mapped 
    cout<< "num2 :" << num2 <<endl;
    cout<< "*p2  :" << *p2<<endl;
    cout<< "p2   :" << p2<<endl;

cout<<"----------------------------------------"<<endl;

    int num3= 5;
    int *p3 =&num3;
    cout<<"before Num3 : " << num3 << endl;
    (*p3)++;    // incrementing a pointer
    cout<<"after Num3 : " << num3 << endl;
    cout<<"*p3 : " << *p3 << endl;
    cout<<"p3 : " << p3 << endl;

cout<<"----------------------------------------"<<endl;

    // coping a pointer
    int num4 =10;
    int *p4 = &num4;

    int *q = p4; //pointer p4 copied to q
    cout<<"num4 :"<<num4<<endl;
    cout<<"*p4  :"<<*p4<<endl;
    cout<<"*q   :"<<*q<<endl;

cout<<"----------------------------------------"<<endl;

    // incrementing in the pointer
    int num5 = 10;
    int *p5 = &num5;

    cout<<"num5 : "<< num5 <<endl;
    cout<<"*p  : "<< *p5 <<endl;
    cout<< "p5  : "<< p5<<endl;

    p5++; // p5=p5+1  if p is 100 it doesn't goes to 101 ;; rather it moves to next memory location and thats for int is 4 bytes so it will be 104

    cout<< "p5++  : "<< p5<<endl;

cout<<"----------------------------------------"<<endl;

    int arr[10]={9,8,7,6,5,4,3,2,1};

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    cout<<"arr         : "<< arr <<endl;
    cout<<"&arr[0]     : "<< &arr[0] <<endl;
    cout<<"*arr        : "<< *arr <<endl;
    cout<<"(*arr) +1   : "<< *arr+1 <<endl;
    cout<<"*(arr +1)  or arr[1] : "<< *(arr+1) <<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<*(arr + i)<<" ";  
    }
    cout<<endl;

    // arr[i] = i[arr] = *(arr + i)
    // let i =1
    cout<<"arr[1] :" << arr[1]<<endl;
    cout<<"1[arr] :" << 1[arr]<<endl;

    cout<< "Size of arr  : " << sizeof(arr)<<endl; 
    cout<< "Size of *arr : " << sizeof(*arr)<<endl; 
    cout<< "Size of &arr : " << sizeof(&arr)<<endl; 

    int *p6 = &arr[0];
    cout<< "Size of p6  : " << sizeof(p6)<<endl; 
    cout<< "Size of *p6 : " << sizeof(*p6)<<endl; 
    cout<< "Size of &p6 : " << sizeof(&p6)<<endl; 





   
    return 0;
}