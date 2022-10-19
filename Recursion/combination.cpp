#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> res;

void findCombinations(vector<int> src, vector<int> ds, int idx, int n, int k)
{

    if (ds.size() == k)
    {
        res.push_back(ds);
        return;
    }

    for (int i = idx; i < n; ++i)
    {

        ds.push_back(src[i]);
        findCombinations(src, ds, i + 1, n, k);
        ds.pop_back();
    }
}
vector<vector<int>> combine(int n, int k)
{

    vector<int> ds;
    vector<int> src;
    for (int i = 0; i < n; ++i)
    {
        src.push_back(i + 1);
    }
    findCombinations(src, ds, 0, n, k);

    return res;
}
int main()
{

    return 0;
}