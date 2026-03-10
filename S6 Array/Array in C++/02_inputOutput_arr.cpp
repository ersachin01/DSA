#include <iostream>
using namespace std;

// int main()
// {
//     int arr[5] = {7, 2, 6, 4, 5};

//     for (int idx = 0; idx < 5; idx++)
//     {
//         cout << arr[idx] << " ";
//     }
//     return 0;
// }

int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n]; // Variable Length Array (VLA) - Not standard in C++, but supported by some compilers

    // int n = sizeof(arr) / sizeof(int);

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Output the array elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}