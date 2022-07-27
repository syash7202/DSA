#include<iostream>
#include<vector>
using namespace std;


int main()
{
    // If the size of vector is incresedthen it creates a new vector of double length and thgen copies the previous values to new vector and dumps the old vector. Therefore when we have 3 elements in vector, size is 4 . because 0 -> 1 then 1-> 2 then 2-> 4.
    vector<int> v;
    // cout<<"Capacity is -> "<<v.capacity()<<endl;
    // cout<<"Size is -> "<<v.size()<<endl;
    v.push_back(1);
    // cout<<"Capacity is -> "<<v.capacity()<<endl;
    // cout<<"Size is -> "<<v.size()<<endl;
    v.push_back(2);
    // cout<<"Capacity is -> "<<v.capacity()<<endl;
    // cout<<"Size is -> "<<v.size()<<endl;
    v.push_back(3);
    // cout<<"Capacity is -> "<<v.capacity()<<endl;
    // cout<<"Size is -> "<<v.size()<<endl;
    v.push_back(4);
    // cout<<"Capacity is -> "<<v.capacity()<<endl;
    // cout<<"Size is -> "<<v.size()<<endl;
    v.push_back(5);
    // cout<<"Capacity is -> "<<v.capacity()<<endl;
    // cout<<"Size is -> "<<v.size()<<endl;
    v.push_back(6);
    // cout<<"Capacity is -> "<<v.capacity()<<endl;
    // cout<<"Size is -> "<<v.size()<<endl;

    // //Capaity shows how much elements it can have whereas size shows how much elements are currently present.
    // cout<<"\n\n\n";
    // cout<<"Before pop_back : ";
    // for(int i : v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // v.pop_back(); // emoves the last element from vector
    
    // cout<<"After pop_back : ";
    // for(int i : v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"Before clear size : "<<v.size(); 
    v.clear(); // clear() just erase the elements stored imn vector & doesnt dumps the space.
    cout<<endl;
    cout<<"After clear size : "<<v.size();
    cout<<endl;



    return 0;
}