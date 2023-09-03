#include <bits/stdc++.h>
using namespace std;

string add_binary(string a, string b)
{
    int i = a.length() - 1;
    int j = b.length() - 1;
    string result = "";
    int sum = 0, carry = 0;

    while (i >= 0 && j >= 0)
    {
        if (a[i] == '0' && b[j] == ' 0')
        {
            carry = 0;
            sum = 0;
            result = to_string(carry) + to_string(sum);
        }
    }

    return 0;
}

int main()
{
    string a, b;
    a = "11";
    b = "1";

    add_binary(a, b);

    return 0;
}