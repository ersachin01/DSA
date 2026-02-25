#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits

int getSum(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res + (n % 10);
        n = n / 10;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits of " << n << " is " << getSum(n) << endl;
    return 0;
}