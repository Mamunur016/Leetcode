#include <bits/stdc++.h>
using namespace std;
string firstRepChar(string s)
{
    // code here.
    map<char, int> ss;

    for (int i = 0; i < s.size() - 1; ++i)
    {

        if (s[i] == s[i + 1])
        {
            string str;
            str += s[i];
            return str;
        }
    }
    return "-1";
}
int main()
{

    cout << firstRepChar("geeksforgeeks");
    return 0;
}