#include <iostream>
using namespace std;

// Function to swap two characters
void swapChar(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

// Recursive function to generate permutations
void permute(string str, int l, int r)
{
    // Base case: if left index equals right index
    // then one permutation is formed
    if (l == r)
    {
        cout << str << endl;
    }
    else
    {
        // Generate permutations by swapping characters
        for (int i = l; i <= r; i++)
        {
            // Swap current index with loop index
            swapChar(str[l], str[i]);

            // Recursive call for remaining string
            permute(str, l + 1, r);

            // Backtracking: restore original string
            swapChar(str[l], str[i]);
        }
    }
}

int main()
{
    string str = "ABC"; // Input string
    int n = str.length();

    // Call permutation function
    permute(str, 0, n - 1);

    return 0;
}