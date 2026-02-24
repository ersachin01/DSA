#include <iostream>
using namespace std;

// Recursive function
int sumOfNaturalNumbers(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sumOfNaturalNumbers(n - 1);
}

int main()
{
    int n;
    cout << "Enter a positive integer:";

    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << sumOfNaturalNumbers(n) << endl;
    return 0;
}