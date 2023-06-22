#include <bits/stdc++.h>
using namespace std;

// given two sorted vectors, return a vector merging both the vectors in a sorted order.
// int merge_array(vector<int> arr1, vector<int> arr2)
// {
//     int n1 = arr1.size() - 1;
//     int n2 = arr2.size() - 1;
//     vector<int> result;
//     int i = 0, j = 0;

//     while (i < n1 && j < n2)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             result.push_back(arr1[i]);
//             i++;
//         }
//         else
//         {
//             result.push_back(arr2[j]);
//             j++;
//         }
//     }

//     while (i < n1)
//     {
//         for (i; i < n1; i++)
//         {
//             result.push_back(arr1[i]);
//         }
//     }

//     while (j < n2)
//     {
//         for (j; j < n2; j++)
//         {
//             result.push_back(arr2[j]);
//         }
//     }

//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }

// int main()
// {
//     vector<int> nums1;
//     vector<int> nums2;

//     for (int i = 0; i < 8; i++)
//     {
//         nums1.push_back(rand() % 10 + 2);
//     }

//     sort(nums1.begin(), nums1.end());

//     for (int i = 0; i < nums1.size(); i++)
//     {
//         cout << nums1[i] << " ";
//     }

//     cout << endl;

//     for (int i = 0; i < 4; i++)
//     {
//         nums2.push_back(rand() % 10);
//     }

//     sort(nums2.begin(), nums2.end());

//     for (int i = 0; i < nums2.size(); i++)
//     {
//         cout << nums2[i] << " ";
//     }
//     cout << endl;

//     merge_array(nums1, nums2);

//     return 0;
// }

// Given the same above question but one has to append the result in the nums1 vector.
// solution for --> https://leetcode.com/problems/merge-sorted-array/description/

int sorted_merge(vector<int> arr1, vector<int> arr2)
{
    int j = arr2.size() - 1;
    int i = arr1.size() - 1 - j - 1; // as i needs to point the last element in nums1 which will be compared not 0 as per full capacity. k points to last position to place the larger elemnet there.
    int k = arr1.size() - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k--] = arr1[i--];
        }

        else
        {
            arr1[k--] = arr2[j--];
        }
    }

    while (i >= 0)
    {
        arr1[k--] = arr1[i--];
    }

    while (j >= 0)
    {
        arr1[k--] = arr2[j--];
    }

    // printing the result
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}

int main()
{
    vector<int> nums1;
    vector<int> nums2;

    for (int i = 0; i < 9; i++)
    {
        nums1.push_back(rand() % 10 + 2);
    }

    sort(nums1.begin(), nums1.end());

    nums1.at(6) = 0;
    nums1.at(7) = 0;
    nums1.at(8) = 0;

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        nums2.push_back(rand() % 10);
    }

    sort(nums2.begin(), nums2.end());

    for (int i = 0; i < nums2.size(); i++)
    {
        cout << nums2[i] << " ";
    }
    cout << endl;

    cout << "The sorted merged array is ---> ";
    sorted_merge(nums1, nums2);
    cout << endl;

    return 0;
}