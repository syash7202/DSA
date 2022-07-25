#include<iostream>
using namespace std;


void print_array(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}


// Brute force approach

int main()
{
    int array1[5] = {1,2,3,4,5};
    int array2[5]= {2,3,4,7,8};
    // for (int i = 0; i < 5; i++)
    // {
    //     array1[i]=rand();
    //     array2[i]=rand();
    // }

    print_array(array1);
    cout<<endl;
    print_array(array2);
    cout<<endl;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (array1[i]==array2[j])
            {
                cout<<array1[i]<<" ";
            }
            
        }
        
    }
    
    

    return 0;
    
    
    
}