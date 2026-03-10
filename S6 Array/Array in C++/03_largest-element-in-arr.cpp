#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n]; // Variable Length Array (VLA) - Not standard in C++, but supported by some compilers

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Largest element in the array is: " << max;
    return 0;
}
