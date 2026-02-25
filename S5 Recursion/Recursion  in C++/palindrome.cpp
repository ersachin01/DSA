// #include <iostream>
// using namespace std;

// int reverseNumber(int n, int rev = 0)
// {
//     if (n == 0)
//         return rev;
//     return reverseNumber(n / 10, rev * 10 + n % 10);
// }

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n == reverseNumber(n))
//         cout << "Palindrome Number";
//     else
//         cout << "Not a Palindrome";

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

// Aapka function
bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;

    // Dono characters match hone chahiye AND baki bachi string bhi palindrome honi chahiye
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string word;
    cout << "Ek word enter karein: ";
    cin >> word;

    int n = word.length();

    // Function call yahan hogi
    if (isPalindrome(word, 0, n - 1))
    {
        cout << word << " ek Palindrome hai! ✅" << endl;
    }
    else
    {
        cout << word << " Palindrome nahi hai. ❌" << endl;
    }

    return 0;
}