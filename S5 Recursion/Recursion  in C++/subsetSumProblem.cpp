#include <iostream>
using namespace std;

// Function to check if subset with given sum exists
bool subsetSum(int arr[], int n, int sum)
{
    // Base Case: If sum becomes 0, subset is found
    if (sum == 0)
        return true;

    // Base Case: If no elements left and sum is not 0
    if (n == 0)
        return false;

    // If last element is greater than sum, ignore it
    if (arr[n - 1] > sum)
        return subsetSum(arr, n - 1, sum);

    // Check two possibilities:
    // 1. Include the last element
    // 2. Exclude the last element
    return subsetSum(arr, n - 1, sum) || subsetSum(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {3, 34, 4, 12, 5, 2}; // Input array
    int n = 6;                        // Number of elements
    int sum = 9;                      // Target sum

    // Check if subset exists
    if (subsetSum(arr, n, sum))
        cout << "Subset with given sum exists";
    else
        cout << "No subset with given sum exists";

    return 0;
}