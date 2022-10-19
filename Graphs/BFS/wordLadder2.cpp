#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
{
    unordered_set<string> s(wordList.begin(), wordList.end());
    queue<vector<string>> q;
    vector<string> usedLevel;
    int level = 0;
    q.push({beginWord});
    usedLevel.push_back(beginWord);

    vector<vector<string>> ans;

    while (!q.empty())
    {
        vector<string> vec = q.front();
        q.pop();

        if (vec.size() > level)
        {
            level++;

            for (auto it : usedLevel)
            {
                s.erase(it);
            }
        }
        string word = vec.back();

        if (word == endWord)
        {

            if (ans.size() == 0)
            {
                ans.push_back(vec);
            }
            else if (ans[0].size() == vec.size())
            {
                ans.push_back(vec);
            }
        }

        for (int i = 0; i < word.size(); ++i)
        {
            char orginal = word[i];

            for (char c = 'a'; c <= 'z'; ++c)
            {

                word[i] = c;

                if (s.count(word) > 0)
                {
                    vec.push_back(word);
                    q.push(vec);
                    usedLevel.push_back(word);
                    vec.pop_back();
                }
            }
            word[i] = orginal;
        }
    }

    return ans;
}

// Driver code
int main()
{

    vector<string> wordList;
    wordList.push_back("poon");
    wordList.push_back("plee");
    wordList.push_back("same");
    wordList.push_back("poie");
    wordList.push_back("plie");
    wordList.push_back("poin");
    wordList.push_back("plea");

    string start = "toon";
    string target = "plea";
    vector<vector<string>> ans;
    ans = findLadders(start, target, wordList);

    for (auto x : ans)
    {
        for (auto z : x)
        {
            cout << z << " ";
        }
        cout << endl;
    }
    return 0;
}