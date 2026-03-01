#include <iostream>
#include <string>
using namespace std;

void subsets(string s, string curr = "", int i = 0)
{
    if (i == s.length())
    {
        cout << "[" << curr << "]" << "\n";
        return;
    }
    // Include s[i]
    subsets(s, curr + s[i], i + 1);
    // Exclude s[i]
    subsets(s, curr, i + 1);
}

int main()
{
    string s = "abc";
    cout << "All subsets of \"" << s << "\":" << "\n";
    subsets(s);
    return 0;
}

// **Output:**
// ```
// All subsets of "abc":
// [abc]
// [ab]
// [ac]
// [a]
// [bc]
// [b]
// [c]
// []