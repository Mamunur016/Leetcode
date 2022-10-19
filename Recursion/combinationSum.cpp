#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

void findCombination(int i, int target, vector<int> candidates, vector<int> ds)
{

    if (i == candidates.size())
    {

        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    if (candidates[i] <= target)
    {

        ds.push_back(candidates[i]);
        findCombination(i, target - candidates[i], candidates, ds);
        ds.pop_back();
    }

    findCombination(i + 1, target, candidates, ds);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{

    vector<int> ds;
    findCombination(0, target, candidates, ds);

    return ans;
}
int main()
{

    return 0;
}