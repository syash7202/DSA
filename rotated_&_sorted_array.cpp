#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> arr)
{
    int count = 0;
    int size = arr.size();

    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[size] > arr[0])
    {
        count++;
    }

    return count <= 1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 1, 2, 3};

    if (check(nums))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}