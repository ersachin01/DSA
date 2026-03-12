#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key)
{
    int st = 0;
    int end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1; // Key not found
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << binarySearch(arr, n, 50) << endl;
    return 0;
}