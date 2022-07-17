#include<iostream>
using namespace std;

void reverse_arr(int array[], int size)
{

    int start=0,end=size-1;

   
    while (start<=end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
  
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
cin>>size;
int array[size];

for (int i = 0; i < size; i++)
{
    array[i]= rand()%10;
}

for (int i = 0; i < size; i++)
{
    cout<<array[i]<<" ";
}

cout<<endl;
reverse_arr(array,size);
print_array(array,size);


    return 0;
}