#include <bits/stdc++.h>
using namespace std;
set<string> s;
void subsequence(string str, int idx, string newStr)
{
    if (idx == str.size())
    {
        if (s.find(newStr) != s.end())
        {
            return;
        }
        else
        {

            s.insert(newStr);
            cout << newStr << endl;
            return;
        }
    }
    char currChar = str[idx];

    // to be
    subsequence(str, idx + 1, newStr + currChar);

    /// not to be
    subsequence(str, idx + 1, newStr);
}
int main()
{
    string str = "aaa";

    subsequence(str, 0, "");
    return 0;
}