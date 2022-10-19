#include <bits/stdc++.h>
using namespace std;
int wordLadderLength(string startWord, string targetWord, vector<string> &wordList)
{
    // Code here
    queue<pair<string, int>> q;
    q.push({startWord, 1});
    unordered_set<string> s(wordList.begin(), wordList.end());

    while (!q.empty())
    {

        string word = q.front().first;
        int steps = q.front().second;
        q.pop();
        if (word == targetWord)
        {
            return steps;
        }

        for (int i = 0; i < word.size(); ++i)
        {
            char orginalChar = word[i];

            for (char ch = 'a'; ch <= 'z'; ++ch)
            {

                word[i] = ch;

                if (s.find(word) != s.end())
                {
                    s.erase(word);
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

    return 0;
}