// C++ program to perform linear search in an array: Time complexity O(n) and space complexity O(1)
#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << linearSearch(arr, n, 30) << endl;
    return 0;
}