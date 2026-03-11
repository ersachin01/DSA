// C++ program to reverse an array using a copy array OR with using space complexity O(n)
#include <iostream>
using namespace std;

// Function to print the elements of an array
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
    // Original array
    int arr[] = {5, 3, 4, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    // Create a copy of the original array to store the reversed elements
    int copyArr[n];
    for (int i = 0; i < n; i++)
    {
        copyArr[i] = arr[n - 1 - i];
    }
    printArr(copyArr, n);
}