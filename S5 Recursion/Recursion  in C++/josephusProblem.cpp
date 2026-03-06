#include <iostream>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
        return 0;

    return (josephus(n - 1, k) + k) % n;
}

int main()
{
    int n, k;
    cout << "Enter number of people: ";
    cin >> n;

    cout << "Enter step count: ";
    cin >> k;

    cout << "Safe position is: " << josephus(n, k) + 1;

    return 0;
}