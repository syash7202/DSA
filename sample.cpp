#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
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

    // cout<<"Before clear size : "<<v.size(); 
    // v.clear(); // clear() just erase the elements stored imn vector & doesnt dumps the space.
    // cout<<endl;
    // cout<<"After clear size : "<<v.size();
    // cout<<endl;

    // vector<int> a(5,1); // gives vector of 5 elements having value 1
    // for(int i : a)
    // {
    //     cout<<i<<" ";
    // }    
    // cout<<endl;

    // vector<int> b(a); // copies data of a into b
    //     for(int i : a)
    // {
    //     cout<<i<<" ";
    // }    
    // cout<<endl;

    // cout<<"First elemet at index 1 : "<<a.at(1);

    // Deque gives functions to push and pop from both the ends
    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);

    // for(int i : d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<"First elemet at index 1 : "<<d.at(1);

    // d.pop_front();
    // for(int i : d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // list<int> l;
    // l.push_back(1);
    // l.push_front(2);
    // for(int i:l)
    // {
    //     cout <<i<<" ";
    // }
    // cout << endl;
    // l.erase(l.begin());
    // cout <<"after erase"<< endl;
    // for(int i:l)
    // {
    //     cout <<i<<"";
    // }


    // cout<<"\nSize of list : "<< l.size()<<endl;
    
    // stack<string> s;
    // s.push("Yash");
    // s.push("Sharma");
    // s.push("Go");

    // cout<<"\nTop element : "<<s.top();

    // s.pop();

    // cout<<"\nTop element : "<<s.top();
    // cout<<"\nSize of stack : "<<s.size();

    // cout<<"\nEmpty or not : "<<s.empty();
    // cout<<endl;

    // queue<string> q;
    // q.push("Yash");
    // q.push("Sharma");
    // q.push("Go");

    // cout<<"\nFirst Element : "<< q.front();
    // q.pop();
    // cout<<"\nFirst Element : "<< q.front();

    // cout<<endl;

    // priority_queue<int> maxi; // this is default case and creates max heap
    // maxi.push(0);
    // maxi.push(1);
    // maxi.push(5);
    // maxi.push(4);

    // int n = maxi.size();

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }

    // cout<<endl;


    // priority_queue<int, vector<int>, greater<int>> mini; // this creates max heap
    
    // mini.push(5);
    // mini.push(1);
    // mini.push(2);
    // mini.push(0);

    // int m = mini.size();

    // for (int i = 0; i < m; i++)
    // {
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }
    
    // cout<<endl;
    
    // set works on the BTS, only insert and delete options are available, no modifications in ordered set data is returned in sorted order. Only unique values are stored in a set.

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);

    for(auto i : s)
    {
        cout<<i<<endl;
    }

    set<int>::iterator it =s.begin();
    it++;

    s.erase(it);

    for(auto i : s)
    {
        cout<<i<<endl;
    }

    cout<<"5 present or not : "<<s.count(5)<<endl;


    






    return 0;
}
