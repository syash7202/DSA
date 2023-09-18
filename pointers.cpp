/*
             Timestamp  : 21:07 - Friday  15,Sep 2023   
*/
#include <bits/stdc++.h>
using namespace std;

void update_pointer(int *p7)
{
    p7= p7 +1;
    cout<<"p7++ : "<<p7<<endl;

}

void update_pointer_value(int *p7)
{
    (*p7)++;
    cout<<"*p7++ : "<<*p7<<endl;

}

void update_double_pointer(int** p9){
    // p9 = p9 +1;  // no change
    // *p9 = *p9 +1;  // yes, now it changes value at *p9 --> add of p8  
    **p9 = **p9 +1;  // yes, now it changes value at **p9 --> num8  
}

void getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }

    cout<<"Sum : "<<sum<<endl;
    
}

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

cout<<"----------------------------------------"<<endl;

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

cout<<"----------------------------------------"<<endl;
cout<<"----------------------------------------"<<endl;


    // pointer implementation of string
    // Its diffrent from array 

    char str[6] ="abcde"; 
    char *sp1 = &str[0];

    cout<< "*sp1 :" << *sp1<<endl;  // this prints a (first character of string)
    cout<< "str :" << str <<endl;   // this should print address of first character (as in case of array) but prints whole string (till it finds '/0' i.e null character )

    char str2 = 'y'; 
    char *sp2 = &str2;
    cout<<"str2 : "<<str2<<endl; // it may print only y if next character is /0 if not then it prints till it gets /0




cout<<"----------------------------------------"<<endl;
cout<<"----------------------------------------"<<endl;


    // Pointers and function
    // when apointer is passed to a function change in value of pointer is not possible but changes in the value of the variable it is pointing to i possible.

    int num7 =10;
    int *p7 = &num7;

    cout<<"Before p7 : "<<p7<<endl;
    update_pointer(p7);
    cout<<"After  p7 : "<<p7<<endl;
    cout<<"*Before p7 : "<<*p7<<endl;
    update_pointer_value(p7);
    cout<<"After  *p7 : "<<*p7<<endl;

    // by default when an array is passed to function not array but the pointer to the first cell or array address is passed.
    // and the benefit of this we can pass partial array to a function

    int arr2[6]= {1,2,3,4,5,6};
    getSum(arr2+3,3);

cout<<"----------------------------------------"<<endl;
cout<<"----------------------------------------"<<endl;

    // Pointer to Pointer (double pointer)

    int num8 =10;
    int* p8 = &num8;
    int** p9 = &p8;

    cout<<" Before : "<<endl;
    cout<<"num8 : " <<num8 <<endl;
    cout<<"p8 : " <<p8 <<endl;
    cout<<"p9 : " <<p9 <<endl;

    update_double_pointer(p9);

    cout<<" After : "<<endl;
    cout<<"num8 : " <<num8 <<endl;
    cout<<"p8 : " <<p8 <<endl;
    cout<<"p9 : " <<p9 <<endl;



    

    return 0;
}