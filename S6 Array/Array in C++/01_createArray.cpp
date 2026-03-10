#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int arr2[50] = {1, 2, 3}; // Remaining elements will be initialized to 0

    int arr3[] = {1, 2, 3, 4}; // Size will be determined by the number of elements

    cout << arr[1] << endl; // Output: 2
    cout << arr[0] << endl; // Output: 1
    cout << arr[4] << endl; // Output: 5
    cout << arr[5] << endl; // Output: 063633 garbage value (out of bounds access)

    int size = sizeof(arr) / sizeof(int);
    cout << "Size of arr: " << size << endl; // Output: Size of
    return 0;
}