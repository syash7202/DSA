#include <iostream>
using namespace std;

int quick_sort(int arr[])
{
    int
}
void print(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
    }

    cout << "The array : ";
    print(arr);

    return 0;
}