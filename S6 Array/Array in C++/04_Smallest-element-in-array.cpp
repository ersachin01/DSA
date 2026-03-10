#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n]; // Variable Length Array (VLA)

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) //  Input array elements
    {
        cin >> arr[i];
    }
    // Find the smallest element in the array
    int min = arr[0];

    // Traverse the array to find the minimum element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Smallest element in the array is: " << min;
    return 0;
}
