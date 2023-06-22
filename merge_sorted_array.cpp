#include <bits/stdc++.h>
using namespace std;

int merge_array(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size() - 1;
    int n2 = arr2.size() - 1;
    vector<int> result;
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
        }
        else
        {
            result.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n1)
    {
        for (i; i < n1; i++)
        {
            result.push_back(arr1[i]);
        }
    }

    while (j < n2)
    {
        for (j; j < n2; j++)
        {
            result.push_back(arr2[j]);
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}

int main()
{
    vector<int> nums1;
    vector<int> nums2;

    for (int i = 0; i < 8; i++)
    {
        nums1.push_back(rand() % 10 + 2);
    }

    sort(nums1.begin(), nums1.end());

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        nums2.push_back(rand() % 10);
    }

    sort(nums2.begin(), nums2.end());

    for (int i = 0; i < nums2.size(); i++)
    {
        cout << nums2[i] << " ";
    }
    cout << endl;

    merge_array(nums1, nums2);

    return 0;
}