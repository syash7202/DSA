#include<iostream>
using namespace std;
// t h e   s k y   i s   b l u e /0 







void reverseWords(string s)
{
    int start=0;
    int end =s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
    }
}

int main()
{
    string s;
    s="the sky is blue";

    reverseWords(s);

    cout<<s<<endl;
    return 0;
}