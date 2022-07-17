#include<iostream>
using namespace std;

void alternate_swap(int array[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size)
        {
            swap(array[i],array[i+1]);
        }
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
    cout<<"Enter size :";
cin>>size;
int array[size];

for (int i = 0; i < size; i++)
{
    array[i]= rand()%10;
}

print_array(array,size);
alternate_swap(array,size);
print_array(array,size);


    return 0;
}