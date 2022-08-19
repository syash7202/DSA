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