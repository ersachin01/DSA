#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the maximum number of pieces
int maxPieces(int n, int a, int b, int c)
{
    // Base Case 1: If rope length becomes 0, it's a valid set of cuts
    if (n == 0)
        return 0;

    // Base Case 2: If length becomes negative, this path is invalid
    if (n < 0)
        return -1;

    // Recursively try all three possible cut lengths (a, b, and c)
    int res = max({maxPieces(n - a, a, b, c),
                   maxPieces(n - b, a, b, c),
                   maxPieces(n - c, a, b, c)});

    // If all three recursive calls returned -1, no valid cut is possible
    if (res == -1)
        return -1;

    // Add 1 to the result to include the current cut
    return res + 1;
}

int main()
{
    int n = 5, a = 2, b = 1, c = 5;

    // Call the function and store the result
    int result = maxPieces(n, a, b, c);

    if (result == -1)
        cout << "Rope cannot be cut into given lengths." << endl;
    else
        cout << "Maximum pieces: " << result << endl;

    return 0;
}