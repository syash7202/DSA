#include <bits/stdc++.h>
using namespace std;

int rotate_array(vector<int> arr, int rotate_point)
{
    vector<int> temp(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        temp[(i + rotate_point) % arr.size()] = arr[i];
    }

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }

    cout << endl;

    return 0;
}

int main()
{
    vector<int> arr;

    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i);
    }

    cout << "Before --> ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After  --> ";
    rotate_array(arr, 5); // rotating by 5

    return 0;
}