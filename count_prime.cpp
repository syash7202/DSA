#include <bits/stdc++.h>
using namespace std;

int count_prime(int n)
{
    vector<bool> grid(n + 1, true); // initially all are marked as prime
    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (grid[i])
        {
            count++;

            for (int j = 2 * i; j < n; j += i) // marking multiples of i as false
            {
                grid[j] = 0;
            }
        }
    }

    return count;
}

int main()
{
    int n = rand() % 100;
    cout << n << endl;
    cout << count_prime(n) << endl;

    return 0;
}