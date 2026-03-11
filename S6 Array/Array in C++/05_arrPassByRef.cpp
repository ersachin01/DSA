#include <iostream>
using namespace std;

void printArr(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << ",";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "array size = " << sizeof(arr) << endl;
    printArr(arr, n); // Passing array to function by reference
    return 0;
}

// void func(int arr[])
// {
//     arr[0] = 100; // Modifying element of the array
// }

// void fun2(int *ptr)
// {
//     ptr[0] = 200; // Modifying element of the array using pointer
// }

// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     cout << ptr << endl;  // Output: Address of a
//     cout << *ptr << endl; // Output: 5

//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     func(arr); // Passing array to function by reference
// }