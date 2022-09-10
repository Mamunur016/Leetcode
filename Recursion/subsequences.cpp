#include <bits/stdc++.h>
using namespace std;

void subsequence(string str, int idx, string newStr)
{
    if (idx == str.size())
    {

        cout << newStr << endl;
        return;
    }
    char currChar = str[idx];

    // to be
    subsequence(str, idx + 1, newStr + currChar);

    /// not to be
    subsequence(str, idx + 1, newStr);
}
int main()
{
    string str = "abc";
    subsequence(str, 0, "");
    return 0;
}