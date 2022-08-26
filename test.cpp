#include <bits/stdc++.h>
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

// rotate 2d matrix
// int main()
// {
//     vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for (int i = 0; i < matrix.size(); i++) // transpose of a matrix
//     {
//         for (int j = i; j < matrix.size(); j++)
//         {
//             if (i != j)
//             {
//                 int temp = matrix[i][j];

//                 matrix[i][j] = matrix[j][i];
//                 matrix[j][i] = temp;
//             }
//         }
//     }

//     int col = matrix[0].size();
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < col / 2; j++)
//         {
//             int temp = matrix[i][j];

//             matrix[i][j] = matrix[i][col - j - 1];
//             matrix[i][col - j - 1] = temp;
//         }
//     }

//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix.size(); j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Revese a string III
// int main()
// {
//     string s = "Let's take LeetCode contest";

//     string str = "";
//     stack<char> stack;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] != ' ')
//         {
//             stack.push(s[i]);
//         }
//         else
//         {
//             while (!stack.empty())
//             {
//                 str += stack.top();
//                 stack.pop();
//             }
//             str += ' ';
//         }
//     }

//     while (!stack.empty())
//     {
//         str += stack.top();
//         stack.pop();
//     }

//     for (int i = 0; i < str.length(); i++)
//     {
//         cout << str[i];
//     }

//     cout << endl;

//     return 0;
// }

// segmented sieve

// vector<int> createSieve(int n)
// {
//     vector<int> ans;
//     vector<bool> isPrime(n + 1, true); // sieve of eratosthenes O(n*log(logn))

//     isPrime[0] = isPrime[1] = false;

//     for (int i = 2; i < n; i++)
//     {
//         if (isPrime[i])
//         {
//             for (int j = 2 * i; j < n; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) // save prime nubers till sqrt(n) in ans.
//     {
//         if (isPrime[i])
//         {
//             ans.push_back(i);
//         }
//     }

//     return ans;
// }

// void segmentedSieve(int l, int r)
// {
//     int rootR = int(sqrt(r));
//     vector<bool> array(r - l + 1, true);
//     vector<int> prime = createSieve(rootR);
// }

// int main()
// {
//     int l, r;
//     cin >> l >> r;

//     segmentedSieve(l, r);

//     return 0;
// }

// Gcd of two numbers  gdc(a,b) = gcd(a-b,b) or gcd(a%b,b)  and lcm(a,b) * gcd(a,b) = a*b

int gcd(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}