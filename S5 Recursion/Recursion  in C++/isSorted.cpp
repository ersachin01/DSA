#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int i)
{
    if (i == n - 1) // base case
    {
        return true;
    }

    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSorted(arr, n, i + 1);
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}; // sorted : 1
    int arr2[5] = {1, 2, 4, 3, 5}; // unSorted : 0

    cout << isSorted(arr2, 5, 2);
    return 0;
}