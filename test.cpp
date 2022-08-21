#include <iostream>
#include <vector>
using namespace std;

//  leetcode   ->      https://leetcode.com/problems/search-insert-position/
// int searchElement(vector<int> &nums, int target)
// {
//     int start = 0;
//     int end = nums.size() - 1;

//     while (start <= end)
//     {
//         int mid = start + ((end - start) / 2);
//         if (target == nums[mid])
//         {
//             return mid;
//         }

//         if (target < nums[mid])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }

//     return start;
// }

// int main()
// {

//     vector<int> nums = {1, 2, 3, 6, 7, 8, 9};
//     int target = 4;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " ";
//     }

//     cout << endl;

//     cout << searchElement(nums, target) << endl;

//     return 0;
// }

// bikweekly contest 85

// int main() //incomplete
// {

//     string blocks = "WBBWWBBWBW";
//     int k = 7;

//     int countB = 0;
//     for (int i = 0; i < blocks.length(); i++)
//     {
//         if (blocks[i] == 'B')
//         {
//             countB++;
//         }
//     }
//     cout << countB << endl;
//     return 0;
// }

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < matrix.size(); i++) // transpose of a matrix
    {
        for (int j = i; j < matrix.size(); j++)
        {
            if (i != j)
            {
                int temp = matrix[i][j];

                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    int col = matrix[0].size();
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < col / 2; j++)
        {
            int temp = matrix[i][j];

            matrix[i][j] = matrix[i][col - j - 1];
            matrix[i][col - j - 1] = temp;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}