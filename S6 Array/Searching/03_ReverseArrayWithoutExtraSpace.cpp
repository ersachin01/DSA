// C++ program to reverse an array without using extra space: Time complexity O(1) and space complexity O(1)

#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
int main()
{
    int arr[] = {5, 3, 4, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n - 1;

    while (start < end)
    {
        // C++ provides a built-in function to swap two elements, but since we are not allowed to use extra space, we will swap the elements manually using a temporary variable.
        // swap(arr[start], arr[end]);

        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards  the middle
        start++;
        end--;
    }

    printArr(arr, n);
    return 0;
}