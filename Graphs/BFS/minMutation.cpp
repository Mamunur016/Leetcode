#include <bits/stdc++.h>
using namespace std;
int minMutation(string start, string end, vector<string> &bank)
{

    queue<pair<string, int>> q;
    q.push({start, 0});
    unordered_set<string> s(bank.begin(), bank.end());
    for (auto x : s)
    {
        cout << x << " ";
    }
    string res = "ACGT";
    while (!q.empty())
    {

        string word = q.front().first;
        int steps = q.front().second;
        q.pop();
        cout << word << endl;
        if (word == end)
        {
            return steps;
        }

        for (int i = 0; i < word.size(); ++i)
        {
            char orginalChar = word[i];

            for (int j = 0; j <= 3; ++j)
            {
                char ch = res[j];
                word[i] = ch;
                if (s.find(word) != s.end())
                {
                    // s.erase(word);
                    cout << "1"
                         << " ";
                    q.push({word, steps + 1});
                }
            }
            word[i] = orginalChar;
        }
    }
    return 0;
}
int main()
{
    vector<string> res;
    res.push_back("AACCGGTA");
    res.push_back("AACCGCTA");
    res.push_back("AAACGGTA");

    cout << minMutation("AACCGGTT", "AAACGGTA", res);
    return 0;
}